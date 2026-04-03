#include <iostream>
using namespace std;


int main()
{
    std::cout<<"coding : 2nd/100 code from challenge "<<endl;
    string name;
    std::cout<<"Enter your name"<<endl;
    
   // std::cin>>name;
    getline(cin,name);                  // getline take full line as input 
    
    std::cout<<"My name is : "<<name;
    
    return 0;
}
