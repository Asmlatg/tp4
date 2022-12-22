#ifndef BASICENCRYPT_H
#define BASICENCRYPT_H
#include <iostream>


class BasicEncrypt
{
    public:
        BasicEncrypt(std::string plain);
        void encode();
        void decode();
        void read(std::string const directory);
        void write(std::string const direc);
        void plain();
        void cypher();
        virtual ~BasicEncrypt();

    protected:
        std::string _plain;
        std::string _cypher;


    private:
};

#endif // BASICENCRYPT_H

