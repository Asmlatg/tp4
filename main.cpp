#include "caeser.h"
#include "Vigenere.h"
#include "caeser2.h"
#include <iostream>
#include <string>
#include <vector>
int main()
{
    std::vector<int> tableau={3,1,5,2};
    Vigenere code("asmae",tableau);
    code.encode();
    code.coded();
  
    caesar code("c:/Users/asmae/Desktop/abc.txt");
    code.encode();
    code.coded();

    caesar2 code("c:/Users/asmae/Desktop/abc.txt",3);
    code.encode();
    code.coded();
    return 0;
}
