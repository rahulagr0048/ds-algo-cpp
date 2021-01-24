#include<iostream>
int main() {
    char a;
    std::cin>>a;
    if(a >= 'a' && a <= 'z')
    {
        std::cout<<"lowercase";
    }
    else if(a >= 'A' && a <= 'Z')
    {
        std::cout<<"UPPERCASE";
    }
    else
    {
        std::cout<<"Invalid";
    }    
	return 0;
}