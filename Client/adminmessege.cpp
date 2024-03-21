#include "adminmessege.h"
#include <QFile>
#include <QDebug>

long bytes=0;

AdminMessege::AdminMessege() {}



#include "adminmessege.h"

QString AdminMessege::verificarArchivoExistente(const QString &nombreUsuario1, const QString &nombreUsuario2)
{
    QString path = nombreUsuario1 + "_" + nombreUsuario2 + ".dat";
    QString pathInverso = nombreUsuario2 + "_" + nombreUsuario1 + ".dat";
    // Verificar si el archivo con el path directo existe
    if (QFile::exists(path)) {
        return path;
    } // Verificar si el archivo con el path inverso existe
    else if (QFile::exists(pathInverso)) {
        return path;
    }
    return "false";
}

QString AdminMessege::crearArchivoSiNoExiste(const QString &nombreUsuario1, const QString &nombreUsuario2)
{
    QString path = "/Users/Kenny/Desktop/qtchatapplication-master/Client/"+nombreUsuario1 + "_" + nombreUsuario2 + ".dat";
    QString pathInverso = nombreUsuario2 + "_" + nombreUsuario1 + ".dat";
    // Verificar si el archivo con el path directo existe
    if (QFile::exists(path)) {
        return path;
    } // Verificar si el archivo con el path inverso existe
    else if (QFile::exists(pathInverso)) {
        return path;
    } // Si ninguno de los archivos existe, crear uno nuevo
    else {
        QFile file(path);
        if (file.open(QIODevice::ReadWrite)) {
            file.close();
            return path;
        } else {
            return "false";
        }
    }
}
bool AdminMessege::AgregarMensaje(const QString &path, const QString &NombreUser1, const QString &NombreUser2, const QString &Mensaje, const QString &fecha) {

    QFile file(path); if (!file.open(QIODevice::ReadWrite)) {
        return false;
    }
    QDataStream out(&file);
    out.setVersion(QDataStream::Qt_5_15); file.seek(file.size());
    out << NombreUser1 << NombreUser2 << Mensaje << fecha; file.flush();
    file.close();
    return true;
}
qint64 AdminMessege::ContadorMensajes(const QString &path)
{
    QFile file(path);
    if (!file.open(QIODevice::ReadOnly)) {
        return 0;
    } qint64 count = 0; QDataStream in(&file);
    in.setVersion(QDataStream::Qt_5_15);
    while (!file.atEnd()) {

        QString NombreUser1, NombreUser2, Mensaje, fecha; in >> NombreUser1 >> NombreUser2 >> Mensaje >> fecha; ++count;
    }
    file.close();
    return count;
}
QString AdminMessege::ReturnMesage(const QString &path) {
    QString messageData; QFile file(path);
    if (!file.open(QIODevice::ReadOnly)) {
        qDebug() << "No se pudo abrir el archivo para leer.";
        return messageData;
    }
    QDataStream in(&file);
    in.setVersion(QDataStream::Qt_5_15);
    QString NombreUser1, NombreUser2, Mensaje, fecha;
    file.seek(bytes);
    in >> NombreUser1 >> NombreUser2 >> Mensaje >> fecha;
    messageData = NombreUser1 + ":;" + NombreUser2 + ":;" + Mensaje + ":;" + fecha; // Agregar los valores a messageData
    bytes = file.pos();
    file.close();
    return messageData;
}
void AdminMessege::LimpiarBytes() {
    bytes=0;
}
