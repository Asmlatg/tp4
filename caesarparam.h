#ifndef CAESAR_H
#define CAESAR_H
#include "encrypt.h"
#include <string>

class caesar : public encrypt
{
    public:
        caesar(std::string plainn, int param);
        void encode();
        void decode();
        virtual ~caesar();
    private:
        int _param;
};

#endif
