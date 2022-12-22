#include "encrypt.h"
#include <string>
encrypt::encrypt(std::string plain)
{
    _plain=plain;
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
