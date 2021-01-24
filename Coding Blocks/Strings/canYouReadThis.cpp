#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;

void canYouReadThis(string s)
{
    char a[1000];
    int k = 0;
    for(int i = 0; i < s.length(); i++)
    {
        for(int j = i; j < s.length(); j++)
        {
            if((s[j + 1] >= 'A' && s[j + 1] <= 'Z') || s[j + 1]=='\0')
            {
                a[k++] = s[j]; 
                a[k] = '\0';
                cout<<a<<endl;
                i = j;
                k = 0;
                break;
            }
            else
            {
                a[k++] = s[j]; 
            }            
        }
    }
}

int main() {
    string s;
    std::cin>>s;
    canYouReadThis(s);
	return 0;
}