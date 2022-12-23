#include "caesar.h"
#include "encrypt.h"
#include <string>
using namespace std;
caesar::caesar(std::string plainn) : encrypt(plainn)
{
}
void caesar::encode()
{
    _cypher=_plain;
    for ( int i=0 ; i<= _plain.size(); i++)
    {
        int a=_cypher[i];
        if ( a>=97 and a<=122 )
        {
           _cypher[i]=(_cypher[i]+3-97)%26 + 97;
        }
    }
}
void caesar::decode()
{
    _plain=_cypher;
    for ( int i=0 ; i<= _cypher.size(); i++)
    {
        int b=_plain[i];
        if ( b>=97 and b<=122 )
        {
           _cypher[i]=(_cypher[i]-3-97)%26 + 97;
        }
    }
}
caesar::~caesar()
{
}
int main()
{
    caesar code("c:/Users/asmae/Desktop/abc.txt");
    code.encode();
    code.coded();
}

