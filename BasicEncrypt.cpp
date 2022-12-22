#include "BasicEncrypt.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

BasicEncrypt::BasicEncrypt(string tocode)
{
    _plain=tocode;
}
void BasicEncrypt::encode()
{
    _cypher =_plain;
}
void BasicEncrypt::decode()
{
    _plain= _cypher;
}
void BasicEncrypt::plain()
{
    cout << _plain;
}
void BasicEncrypt::cypher()
{
    cout << _cypher;
}
BasicEncrypt::~BasicEncrypt()
{
}
