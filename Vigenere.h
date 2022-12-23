#ifndef VIGENERE_H
#define VIGENERE_H
#include "encrypt.h"
#include <vector>
class Vigenere : public encrypt
{
     public:
        Vigenere(std::string plain, std::vector <int> cle);
        Vigenere(std::string plain2, std::string clechaine);
        void encode();
        void decode();
        virtual ~Vigenere();
     private:
        std::vector<int> _cle;
        std::string _clechaine;
};

#endif
