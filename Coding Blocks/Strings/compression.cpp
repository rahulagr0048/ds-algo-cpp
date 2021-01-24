#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;

void compress(string s)
{
    int k = 0;
    char out[1000];
    char count = '1';
    for(int i = 0; i < s.length(); i++)
    {
        out[k++] = s[i];
        while(s[i + 1] == s[i])
        {            
            count += 1;
            i++;
        }
        out[k++] = count;
        count = '1';
    }
    cout<<out;
}

int main() {
    string s;
    cin>>s;
    compress(s);
	return 0;
}