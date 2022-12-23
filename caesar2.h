#ifndef CAESAR2_H
#define CAESAR2_H
#include "encrypt.h"
#include <string>

class caesar2 : public encrypt
{
    public:
        caesar2(std::string plainn, int param);
        void encode();
        void decode();
        virtual ~caesar2();
    private:
        int _param;
};

#endif
