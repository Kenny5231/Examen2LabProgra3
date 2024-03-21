/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Client/mainwindow.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "on_actionConnect_triggered",
    "",
    "on_btnSend_clicked",
    "dataReceived",
    "message",
    "on_lnClientName_editingFinished",
    "on_cmbStatus_currentIndexChanged",
    "index",
    "onTyping",
    "on_btnSendFile_clicked",
    "onRejectReceivingFile",
    "onInitReceivingFile",
    "clientName",
    "fileName",
    "fileSize",
    "onConnectionACK",
    "myName",
    "clientsName",
    "onNewClientConnectedToServer",
    "clienName",
    "onClientNameChanged",
    "prevName",
    "onClientDisconnected",
    "on_backmenu_clicked",
    "on_login_clicked",
    "on_signin_clicked",
    "on_loginb_clicked",
    "on_singin_clicked",
    "on_pushButton_clicked",
    "on_log_out_clicked",
    "addfullnameUsers",
    "on_conectedUsers_itemClicked",
    "QListWidgetItem*",
    "item",
    "updateConnectedUsers"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[72];
    char stringdata0[11];
    char stringdata1[27];
    char stringdata2[1];
    char stringdata3[19];
    char stringdata4[13];
    char stringdata5[8];
    char stringdata6[32];
    char stringdata7[33];
    char stringdata8[6];
    char stringdata9[9];
    char stringdata10[23];
    char stringdata11[22];
    char stringdata12[20];
    char stringdata13[11];
    char stringdata14[9];
    char stringdata15[9];
    char stringdata16[16];
    char stringdata17[7];
    char stringdata18[12];
    char stringdata19[29];
    char stringdata20[10];
    char stringdata21[20];
    char stringdata22[9];
    char stringdata23[21];
    char stringdata24[20];
    char stringdata25[17];
    char stringdata26[18];
    char stringdata27[18];
    char stringdata28[18];
    char stringdata29[22];
    char stringdata30[19];
    char stringdata31[17];
    char stringdata32[29];
    char stringdata33[17];
    char stringdata34[5];
    char stringdata35[21];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 26),  // "on_actionConnect_triggered"
        QT_MOC_LITERAL(38, 0),  // ""
        QT_MOC_LITERAL(39, 18),  // "on_btnSend_clicked"
        QT_MOC_LITERAL(58, 12),  // "dataReceived"
        QT_MOC_LITERAL(71, 7),  // "message"
        QT_MOC_LITERAL(79, 31),  // "on_lnClientName_editingFinished"
        QT_MOC_LITERAL(111, 32),  // "on_cmbStatus_currentIndexChanged"
        QT_MOC_LITERAL(144, 5),  // "index"
        QT_MOC_LITERAL(150, 8),  // "onTyping"
        QT_MOC_LITERAL(159, 22),  // "on_btnSendFile_clicked"
        QT_MOC_LITERAL(182, 21),  // "onRejectReceivingFile"
        QT_MOC_LITERAL(204, 19),  // "onInitReceivingFile"
        QT_MOC_LITERAL(224, 10),  // "clientName"
        QT_MOC_LITERAL(235, 8),  // "fileName"
        QT_MOC_LITERAL(244, 8),  // "fileSize"
        QT_MOC_LITERAL(253, 15),  // "onConnectionACK"
        QT_MOC_LITERAL(269, 6),  // "myName"
        QT_MOC_LITERAL(276, 11),  // "clientsName"
        QT_MOC_LITERAL(288, 28),  // "onNewClientConnectedToServer"
        QT_MOC_LITERAL(317, 9),  // "clienName"
        QT_MOC_LITERAL(327, 19),  // "onClientNameChanged"
        QT_MOC_LITERAL(347, 8),  // "prevName"
        QT_MOC_LITERAL(356, 20),  // "onClientDisconnected"
        QT_MOC_LITERAL(377, 19),  // "on_backmenu_clicked"
        QT_MOC_LITERAL(397, 16),  // "on_login_clicked"
        QT_MOC_LITERAL(414, 17),  // "on_signin_clicked"
        QT_MOC_LITERAL(432, 17),  // "on_loginb_clicked"
        QT_MOC_LITERAL(450, 17),  // "on_singin_clicked"
        QT_MOC_LITERAL(468, 21),  // "on_pushButton_clicked"
        QT_MOC_LITERAL(490, 18),  // "on_log_out_clicked"
        QT_MOC_LITERAL(509, 16),  // "addfullnameUsers"
        QT_MOC_LITERAL(526, 28),  // "on_conectedUsers_itemClicked"
        QT_MOC_LITERAL(555, 16),  // "QListWidgetItem*"
        QT_MOC_LITERAL(572, 4),  // "item"
        QT_MOC_LITERAL(577, 20)   // "updateConnectedUsers"
    },
    "MainWindow",
    "on_actionConnect_triggered",
    "",
    "on_btnSend_clicked",
    "dataReceived",
    "message",
    "on_lnClientName_editingFinished",
    "on_cmbStatus_currentIndexChanged",
    "index",
    "onTyping",
    "on_btnSendFile_clicked",
    "onRejectReceivingFile",
    "onInitReceivingFile",
    "clientName",
    "fileName",
    "fileSize",
    "onConnectionACK",
    "myName",
    "clientsName",
    "onNewClientConnectedToServer",
    "clienName",
    "onClientNameChanged",
    "prevName",
    "onClientDisconnected",
    "on_backmenu_clicked",
    "on_login_clicked",
    "on_signin_clicked",
    "on_loginb_clicked",
    "on_singin_clicked",
    "on_pushButton_clicked",
    "on_log_out_clicked",
    "addfullnameUsers",
    "on_conectedUsers_itemClicked",
    "QListWidgetItem*",
    "item",
    "updateConnectedUsers"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  152,    2, 0x08,    1 /* Private */,
       3,    0,  153,    2, 0x08,    2 /* Private */,
       4,    1,  154,    2, 0x08,    3 /* Private */,
       6,    0,  157,    2, 0x08,    5 /* Private */,
       7,    1,  158,    2, 0x08,    6 /* Private */,
       9,    0,  161,    2, 0x08,    8 /* Private */,
      10,    0,  162,    2, 0x08,    9 /* Private */,
      11,    0,  163,    2, 0x08,   10 /* Private */,
      12,    3,  164,    2, 0x08,   11 /* Private */,
      16,    2,  171,    2, 0x08,   15 /* Private */,
      19,    1,  176,    2, 0x08,   18 /* Private */,
      21,    2,  179,    2, 0x08,   20 /* Private */,
      23,    1,  184,    2, 0x08,   23 /* Private */,
      24,    0,  187,    2, 0x08,   25 /* Private */,
      25,    0,  188,    2, 0x08,   26 /* Private */,
      26,    0,  189,    2, 0x08,   27 /* Private */,
      27,    0,  190,    2, 0x08,   28 /* Private */,
      28,    0,  191,    2, 0x08,   29 /* Private */,
      29,    0,  192,    2, 0x08,   30 /* Private */,
      30,    0,  193,    2, 0x08,   31 /* Private */,
      31,    0,  194,    2, 0x08,   32 /* Private */,
      32,    1,  195,    2, 0x08,   33 /* Private */,
      35,    0,  198,    2, 0x08,   35 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::LongLong,   13,   14,   15,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList,   17,   18,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   22,   13,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 33,   34,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'on_actionConnect_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnSend_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'dataReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'on_lnClientName_editingFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_cmbStatus_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onTyping'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnSendFile_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRejectReceivingFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onInitReceivingFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'onConnectionACK'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QStringList, std::false_type>,
        // method 'onNewClientConnectedToServer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'onClientNameChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'onClientDisconnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'on_backmenu_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_login_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_signin_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_loginb_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_singin_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_log_out_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addfullnameUsers'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_conectedUsers_itemClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>,
        // method 'updateConnectedUsers'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_actionConnect_triggered(); break;
        case 1: _t->on_btnSend_clicked(); break;
        case 2: _t->dataReceived((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->on_lnClientName_editingFinished(); break;
        case 4: _t->on_cmbStatus_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->onTyping(); break;
        case 6: _t->on_btnSendFile_clicked(); break;
        case 7: _t->onRejectReceivingFile(); break;
        case 8: _t->onInitReceivingFile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[3]))); break;
        case 9: _t->onConnectionACK((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[2]))); break;
        case 10: _t->onNewClientConnectedToServer((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->onClientNameChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 12: _t->onClientDisconnected((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 13: _t->on_backmenu_clicked(); break;
        case 14: _t->on_login_clicked(); break;
        case 15: _t->on_signin_clicked(); break;
        case 16: _t->on_loginb_clicked(); break;
        case 17: _t->on_singin_clicked(); break;
        case 18: _t->on_pushButton_clicked(); break;
        case 19: _t->on_log_out_clicked(); break;
        case 20: _t->addfullnameUsers(); break;
        case 21: _t->on_conectedUsers_itemClicked((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 22: _t->updateConnectedUsers(); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 23;
    }
    return _id;
}
QT_WARNING_POP
