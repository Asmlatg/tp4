#include "Vigenere.h"
#include "encrypt.h"
#include <vector>
#include <string>
Vigenere::Vigenere(std::string plain, std::vector <int> cle) : encrypt(plain)
{
    _cle=cle;
    _clechaine=" ";
}
Vigenere::Vigenere(std::string plain2 ,std::string clechaine ) : encrypt(plain2)
{
    _clechaine=clechaine;
    _cle={0};
}
void Vigenere::encode()
{
    if (_clechaine==" ")
    {
        int i=0;
        _cypher=_plain;
        while (i != _plain.size())
        {
            for (int j=0 ; j<= _cle.size();j++)
            {
                _cypher[i]=(_cypher[i]+ _cle[j] -97)%26 + 97;
                i++;
            }
        }
    }
    std::vector<int> vectornul={0};
    if ( _cle== vectornul )
    {
        int a=0;
        while (a != _plain.size())
        {
            for (int b=0 ; b<= _clechaine.size();b++)
            {
                char c=_clechaine[b];
                int d;
                d=c;
                _cypher[a]=(_cypher[a]+ d -97)%26 + 97;
                a++;
            }
        }
    }
}
void Vigenere::decode()
{
    if (_clechaine==" ")
    {
        int i=0;
        _plain=_cypher;
        while (i != _plain.size())
        {
            for (int j=0 ; j<= _cle.size();j++)
            {
                _plain[i]=(_plain[i]+ _cle[j] -97)%26 + 97;
                i++;
            }
        }
    }
    std::vector<int> vectornul={0};
    if ( _cle== vectornul )
    {
        int a=0;
        while (a != _plain.size())
        {
            for (int b=0 ; b<= _clechaine.size();b++)
            {
                char c=_clechaine[b];
                int d;
                d=c;
                _plain[a]=(_plain[a]+ d -97)%26 + 97;
                a++;
            }
        }
    }
}

Vigenere::~Vigenere()
{
    //dtor
}
int main()
{
    std::vector<int> tableau={3,1,5,2};
    Vigenere code("asmae",tableau);
    code.encode();
    code.coded();
    return 0;
}
