#include "caesar2.h"
#include "encrypt.h"
#include <string>
using namespace std;
caesar2::caesar2(std::string plainn, int param) : encrypt(plainn)
{
    _param=param;
}
void caesar2::encode()
{
    _cypher=_plain;
    for ( int i=0 ; i<= _plain.size(); i++)
    {
        _cypher[i]= _cypher[i]+ _param;
    }
}
void caesar2::decode()
{
    _plain=_cypher;
    for ( int i=0 ; i<= _cypher.size(); i++)
    {
        _cypher[i]=_cypher[i]- _param;
    }
}
caesar2::~caesar2()
{
}
int main()
{
    caesar2 code("c:/Users/asmae/Desktop/abc.txt",3);
    code.encode();
    code.coded();
}
