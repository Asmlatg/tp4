#include "encrypt.h"
#include <string>
#include <fstream>
using namespace std;
std::string read(std::string directory)
{
    ifstream flux;
    flux.open(directory);
    string ligne;
    string filedata=" ";
    while(getline(flux, ligne))
      {
         filedata += ligne;
      }
    return filedata;
}


encrypt::encrypt(std::string plain)
{
    ifstream monFlux;
    monFlux.open(plain);
    if(monFlux)
    {
        _plain=read(plain);
    }
    else
    {
        _plain=plain;
    }
}
void encrypt::uncoded()
{
    std::cout << _plain << std::endl;
}
void encrypt::coded()
{
    std::cout << _cypher << std::endl;
}
encrypt::~encrypt()
{
}
