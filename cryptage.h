#ifndef CRYPTAGE_H
#define CRYPTAGE_H


#include <QByteArray>

class CryptoUtils {
public:
    static QByteArray encryptData(const QByteArray& data, const QByteArray& key);
    static QByteArray decryptData(const QByteArray& encryptedData, const QByteArray& key);
};

#endif // CRYPTAGE_H
