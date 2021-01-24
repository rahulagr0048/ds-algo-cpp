#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;

char maxFreq(string s)
{
    sort(s.begin(), s.end());
    char a = s[0];
    int max = 0;
    int current = 0;
    for(int i = 0; i < s.length(); i++)
    {
        current = 1;
        while(s[i] == s[i + 1])
        {
            current++;
            i++;
        }
        if(current > max && current != 1)
        {
            max = current;
            a = s[i - 1];
        }
    }
    return a;
}

int main() {
    string s;
    std::cin>>s;
    std::cout<<maxFreq(s);
	return 0;
}