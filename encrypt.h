#ifndef ENCRYPT_H
#define ENCRYPT_H
#include <iostream>
class encrypt
{
    public:
        encrypt(std::string plain);
        void uncoded() ;
        void coded() ;
        virtual void encode() =0;
        virtual void decode() =0;
        virtual ~encrypt();
    protected:
        std::string _plain;
        std::string _cypher;
};
#endif
