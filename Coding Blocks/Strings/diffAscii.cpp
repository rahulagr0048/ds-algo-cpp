#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;

void diffAscii(string s)
{
    char z[1000];
    int k = 0;   
    int i; 
    for(i = 0; i < s.length() - 1; i++)
    {
        cout<<s[i];
        cout<<(int)s[i + 1] - (int)s[i];        
    }
    cout<<s[i];
}

int main() {
    string s;
    std::cin>>s;
    diffAscii(s);
	return 0;
}