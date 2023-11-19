
//#include "echoserver.h"
//#include "QtWebSockets/qwebsocketserver.h"
//#include "QtWebSockets/qwebsocket.h"
//#include <QtCore/QDebug>
//#include "QagtDB.h"
//QT_USE_NAMESPACE



////! [constructor]
//EchoServer::EchoServer(quint16 port, bool debug, QObject *parent) :
//    QObject(parent),
//    m_pWebSocketServer(new QWebSocketServer(QStringLiteral("Echo Server"),
//                                            QWebSocketServer::NonSecureMode, this)),
//    m_debug(debug)
//{
//    if (m_pWebSocketServer->listen(QHostAddress::Any, port)) {
//        if (m_debug)
//            qDebug() << "Echoserver listening on port" << port;
//        connect(m_pWebSocketServer, &QWebSocketServer::newConnection,
//                this, &EchoServer::onNewConnection);
//        connect(m_pWebSocketServer, &QWebSocketServer::closed, this, &EchoServer::closed);
//    }
//}
////! [constructor]



//EchoServer::~EchoServer()
//{
//    m_pWebSocketServer->close();
//    delete m_clients;
//   // qDeleteAll(m_clients.begin(), m_clients.end());
//}




////! [onNewConnection]
//void EchoServer::onNewConnection()
//{
//    m_clients = m_pWebSocketServer->nextPendingConnection();
//    Timer = new QTimer (this);
//    connect (Timer,SIGNAL(timeout()),this,SLOT(load_dll()));
//    Timer ->setInterval(1000); //call your connected slot after define time(ms).
//    Timer->start();




//    //connect(pSocket, &QWebSocket::textMessageReceived, this, &EchoServer::processTextMessage);
//    //connect(pSocket, &QWebSocket::binaryMessageReceived, this, &EchoServer::processBinaryMessage);
//    connect(m_clients, &QWebSocket::disconnected, this, &EchoServer::socketDisconnected);



//    //m_clients = pSocket;
//}
////! [onNewConnection]



//////! [processTextMessage]
////void EchoServer::processTextMessage(QString message)
////{
////    QWebSocket *pClient = qobject_cast<QWebSocket *>(sender());
////    if (m_debug)
////        qDebug() << "Message Received :" << message;
////    if (pClient) {
////        pClient->sendTextMessage(message);
////    }
////}
//////! [processTextMessage]



//////! [processBinaryMessage]
////void EchoServer::processBinaryMessage(QByteArray message)
////{
////    QWebSocket *pClient = qobject_cast<QWebSocket *>(sender());
////    if (m_debug)
////        qDebug() << "Binary Message received:" << message;
////    if (pClient) {
////        pClient->sendBinaryMessage(message);
////    }
////}
//////! [processBinaryMessage]



////! [socketDisconnected]
//void EchoServer::load_dll()
//{



////    QLibrary QagtDB("QagtDB10.dll");



////    if (QagtDB.load())
////    {
////       m_clients-> sendTextMessage("QagtDB loaded ");
////    }
////    else
////    {
////        m_clients-> sendTextMessage("QagtDB unloaded ");
////    }



//    QWebSocket *pClient = qobject_cast<QWebSocket *>(sender());



////    for (int i=0; i< m_clients.size();i++)
////    {
//       m_clients-> sendTextMessage(QDateTime::currentDateTime().toString());
////    }
//    //ui->statusbar->showMessage(QDateTime::currentDateTime().toString());
//    qDebug () << "Timer Event called ";
//}
//void EchoServer::socketDisconnected()
//{
//    //QWebSocket *pClient = qobject_cast<QWebSocket *>(sender());
//    if (m_debug)
//        qDebug() << "socketDisconnected:" << m_clients;
//    if (m_clients) {
//        //m_clients.removeAll(pClient);
//        m_clients->deleteLater();
//    }
//}
////! [socketDisconnected]




//#include "echoserver.h"
//#include "QtWebSockets/qwebsocketserver.h"
//#include "QtWebSockets/qwebsocket.h"
//#include <QtCore/QDebug>
//#define ADD_VEHICLE_TYPE 0x01



//QT_USE_NAMESPACE



////! [constructor]
//EchoServer::EchoServer(quint16 port, bool debug, QObject *parent) :
//    QObject(parent),
//    m_pWebSocketServer(new QWebSocketServer(QStringLiteral("Echo Server"),
//                                            QWebSocketServer::NonSecureMode, this)),
//    m_debug(debug)
//{
//    if (m_pWebSocketServer->listen(QHostAddress::Any, port)) {
//        if (m_debug)
//            qDebug() << "Echoserver listening on port" << port;
//        connect(m_pWebSocketServer, &QWebSocketServer::newConnection,
//                this, &EchoServer::onNewConnection);
//        connect(m_pWebSocketServer, &QWebSocketServer::closed, this, &EchoServer::closed);
//    }
//}
////! [constructor]



//EchoServer::~EchoServer()
//{
//    m_pWebSocketServer->close();
//    qDeleteAll(m_clients.begin(), m_clients.end());
//}



////! [onNewConnection]
//void EchoServer::onNewConnection()
//{
//    QWebSocket *pSocket = m_pWebSocketServer->nextPendingConnection();



//    connect(pSocket, &QWebSocket::textMessageReceived, this, &EchoServer::processTextMessage);
//    connect(pSocket, &QWebSocket::binaryMessageReceived, this, &EchoServer::processBinaryMessage);
//    connect(pSocket, &QWebSocket::disconnected, this, &EchoServer::socketDisconnected);



//    m_clients << pSocket;
//}
////! [onNewConnection]



////! [processTextMessage]
//void EchoServer::processTextMessage(QString msg)
//{
//    QWebSocket *socket = qobject_cast<QWebSocket *>(sender());
//    if (socket) {
//        // Lire la trame TLV
//        QByteArray data = msg.toUtf8();
//        quint8 type = data[0];
//        quint16 length = (data[1] << 8) | data[2];
//        QByteArray value = data.right(length);



//        // Traiter la trame
//        if (type == ADD_VEHICLE_TYPE) {
//            // extraire les données de la trame
//            QString vehicleName = QString::fromUtf8(value);
//            qDebug() << "Received ADD_VEHICLE_TYPE message with vehicle name:" << vehicleName;



//            // Faire quelque chose avec les données reçues
//            // ...
//        }




//    }
//}



////{
////    QWebSocket *pClient = qobject_cast<QWebSocket *>(sender());
////    if (m_debug)
////        qDebug() << "Message received:" << msg;
////    if (pClient) {
////        pClient->sendTextMessage(msg);
////    }
////}
////! [processTextMessage]



////! [processBinaryMessage]
//void EchoServer::processBinaryMessage(QByteArray msg)
//{
//    QWebSocket *pClient = qobject_cast<QWebSocket *>(sender());
//    if (m_debug)
//        qDebug() << "Binary Message received:" << msg;
//    if (pClient) {
//        pClient->sendBinaryMessage(msg);
//    }
//}
////! [processBinaryMessage]



////! [socketDisconnected]
//void EchoServer::socketDisconnected()
//{
//    QWebSocket *pClient = qobject_cast<QWebSocket *>(sender());
//    if (m_debug)
//        qDebug() << "socketDisconnected:" << pClient;
//    if (pClient) {
//        m_clients.removeAll(pClient);
//        pClient->deleteLater();
//    }
//}
////! [socketDisconnected]



#include "echoserver.h"
#include "QtWebSockets/qwebsocketserver.h"
#include "QtWebSockets/qwebsocket.h"
#include <QtCore/QDebug>
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>



QT_USE_NAMESPACE



//! [constructor]
EchoServer::EchoServer(quint16 port, bool debug, QObject *parent) :
    QObject(parent),
    m_pWebSocketServer(new QWebSocketServer(QStringLiteral("Echo Server"),
                                            QWebSocketServer::NonSecureMode, this)),
    m_debug(debug)
{
    if (m_pWebSocketServer->listen(QHostAddress::Any, port)) {
        if (m_debug)
            qDebug() << "Echoserver listening on port" << port;
        connect(m_pWebSocketServer, &QWebSocketServer::newConnection,
                this, &EchoServer::onNewConnection);
        connect(m_pWebSocketServer, &QWebSocketServer::closed, this, &EchoServer::closed);
    }
}
//! [constructor]



EchoServer::~EchoServer()
{
    m_pWebSocketServer->close();
    qDeleteAll(m_clients.begin(), m_clients.end());
}



//! [onNewConnection]
void EchoServer::onNewConnection()
{
    QWebSocket *pSocket = m_pWebSocketServer->nextPendingConnection();



    //connect(pSocket, &QWebSocket::textMessageReceived, this, &EchoServer::processTextMessage);
    connect(pSocket, &QWebSocket::binaryMessageReceived, this, &EchoServer::processBinaryMessage);
    connect(pSocket, &QWebSocket::disconnected, this, &EchoServer::socketDisconnected);



    m_clients << pSocket;
}



//void EchoServer::processBinaryMessage(QByteArray message)
//{
//    qDebug() <<"message received";
//    QWebSocket *socket = qobject_cast<QWebSocket *>(sender());
//    if (socket) {
//     QString str = QString(message);
//     QJsonDocument document = QJsonDocument::fromJson(str.toUtf8());
//     QJsonObject object = document.object();



//     qWarning() << "Action: " << object["Action"].toString();
//     qWarning() << "value: " << object["value"].toString();
//     QString action = object["Action"].toString();
//     QString value = object["value"].toString();
//     QStringList parts = value.split("-");
//     qWarning() << "var: " << parts[0];
//     //qWarning() << "veh: " << parts[1];
//    }



//}



void EchoServer::processBinaryMessage(QByteArray message)
{
    qDebug() << "Message reçu";
    QWebSocket *socket = qobject_cast<QWebSocket *>(sender());
    if (socket) {
        QString str = QString(message);
        QJsonDocument document = QJsonDocument::fromJson(str.toUtf8());
        QJsonObject object = document.object();



        QJsonObject dataVehicle = object["DATA VEHICLE"].toObject();
        QString action = dataVehicle["Action"].toString();
        QString value = dataVehicle["value"].toString();
        if (!value.isEmpty())
        {
            qWarning() << "Action: " << action;
            qWarning() << "Vehicle Name: " << value;
        }



        QJsonObject dataVariant = object["DATA VARIANT"].toObject();
        QString action1 = dataVariant["Action"].toString();
        QString value1 = dataVariant["value"].toString();
        if (!value1.isEmpty())
        {
            qWarning() << "Action: " << action1;
            qWarning() << "Variant Name: " << value1;
        }




        QJsonObject dataDelete = object["Delete Action"].toObject();
        QString action0 = dataDelete["Action"].toString();
        QString value0 = dataDelete["value"].toString();
        if (!value0.isEmpty())
        {
            qWarning() << "Action: " << action0;
            qWarning() << "Delete Name: " << value0;
        }
    }
}
void EchoServer::socketDisconnected()
{
    QWebSocket *pClient = qobject_cast<QWebSocket *>(sender());
    if (m_debug)
        qDebug() << "socketDisconnected:" << pClient;
    if (pClient) {
        m_clients.removeAll(pClient);
        pClient->deleteLater();
    }
}




//     QWebSocket *pClient = qobject_cast<QWebSocket *>(sender());
//     if (m_debug)
//         qDebug() << "Binary Message received:" << message;
//     if (pClient) {
//         pClient->sendBinaryMessage(message);
//     }



//         if (!file.open(QIODevice::ReadOnly| QIODevice::Text)) {
//             qDebug() << "Failed to open file" << message;
//             return;
//         }



//         QJsonDocument document = QJsonDocument::fromJson(file.readAll());
//         QJsonObject object = document.object();



//         qDebug() << "Action: " << object["Action"].toString();
//         qDebug() << "value: " << object["value"].toString();



//         /* in case of string value get value and convert into string*/
//         qDebug() << tr("QJsonObject[Frame] of Action: ") << object["Frame"];
//         QJsonValue subobj = object["Frame"];
//         qDebug() << subobj.toString();



//         /* in case of array get array and convert into string*/
//         qDebug() << tr("QJsonObject[Frame] of value: ") << object["Frame"];
//         QJsonArray test = object["Frame"].toArray();
//         qDebug() << test[1].toString();
