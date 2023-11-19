//#ifndef ECHOSERVER_H
//#define ECHOSERVER_H



//#include <QtCore/QObject>
//#include <QtCore/QList>
//#include <QtCore/QByteArray>
//#include <QTimer>
////#include <QLibrary>
//QT_FORWARD_DECLARE_CLASS(QWebSocketServer)
//QT_FORWARD_DECLARE_CLASS(QWebSocket)



//class EchoServer : public QObject
//{
//    Q_OBJECT
//public:
//    explicit EchoServer(quint16 port, bool debug = false, QObject *parent = nullptr);
//    ~EchoServer();



//Q_SIGNALS:
//    void closed();



//private Q_SLOTS:
//    void onNewConnection();
//    //void processTextMessage(QString message);
//   // void processBinaryMessage(QByteArray message);
//    void load_dll();
//    void socketDisconnected();



//private:
//    QWebSocketServer *m_pWebSocketServer;
//    //QList<QWebSocket *> m_clients;
//    bool m_debug;
//    QTimer *Timer;
//    QWebSocket * m_clients;
//};



//#endif //ECHOSERVER_H



//#ifndef ECHOSERVER_H
//#define ECHOSERVER_H



//#include <QtCore/QObject>
//#include <QtCore/QList>
//#include <QtCore/QByteArray>



//QT_FORWARD_DECLARE_CLASS(QWebSocketServer)
//QT_FORWARD_DECLARE_CLASS(QWebSocket)



//class EchoServer : public QObject
//{
//    Q_OBJECT
//public:
//    explicit EchoServer(quint16 port, bool debug = false, QObject *parent = nullptr);
//    ~EchoServer();



//Q_SIGNALS:
//    void closed();



//private Q_SLOTS:
//    void onNewConnection();
//    void processTextMessage(QString message);
//    void processBinaryMessage(QByteArray message);
//    void socketDisconnected();



//private:
//    QWebSocketServer *m_pWebSocketServer;
//    QList<QWebSocket *> m_clients;
//    bool m_debug;
//};



//#endif //ECHOSERVER_H



#ifndef ECHOSERVER_H
#define ECHOSERVER_H



#include <QtCore/QObject>
#include <QtCore/QList>
#include <QtCore/QByteArray>



QT_FORWARD_DECLARE_CLASS(QWebSocketServer)
QT_FORWARD_DECLARE_CLASS(QWebSocket)



class EchoServer : public QObject
{
    Q_OBJECT
public:
    explicit EchoServer(quint16 port, bool debug = false, QObject *parent = nullptr);
    ~EchoServer();



Q_SIGNALS:
    void closed();



private Q_SLOTS:
    void onNewConnection();
    //void processTextMessage(QString message);
    void processBinaryMessage(QByteArray message);
    void socketDisconnected();



private:
    QWebSocketServer *m_pWebSocketServer;
    QList<QWebSocket *> m_clients;
    bool m_debug;
};



#endif //ECHOSERVER_H
