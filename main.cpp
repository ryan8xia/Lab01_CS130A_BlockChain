
#include <iostream>
#include <fstream>
#include <string>
#include"blockChain.h"

using namespace std;

int main(int argv, char** argc){
  cout<<"hello World";
  cout<<"\n";
  
  blockChain b;
  b.addTransaction(1,"me","her");
  return 0;
  
  
}
