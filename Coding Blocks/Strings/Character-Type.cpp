#include<iostream>

char getType(char a)
{
    if(a >= 'a' && a <= 'z')
    {
        return 'L';
    }
    else if(a >= 'A' && a <= 'Z')
    {
        return 'U';
    }
    else
    {
        return 'I';
    }
}

int main() {
    char a;
    std::cin>>a;
    std::cout<<getType(a);
	return 0;
}