#ifndef ADMINMESSEGE_H
#define ADMINMESSEGE_H
#include <QString>

class AdminMessege
{
public:
    AdminMessege();
    QString verificarArchivoExistente(const QString &nombreUsuario1, const QString &nombreUsuario2);
    QString crearArchivoSiNoExiste(const QString& nombreUsuario1, const QString& nombreUsuario2);
    bool AgregarMensaje(const QString &path, const QString &NombreUser1, const QString &NombreUser2, const QString &Mensaje, const QString &fecha);
    qint64 ContadorMensajes(const QString &path);
    QString ReturnMesage(const QString &path);
    void LimpiarBytes();
};

#endif // ADMINMESSEGE_H
