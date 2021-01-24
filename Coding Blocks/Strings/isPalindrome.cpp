#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;

bool isPalindrome(int a[], int i, int j)
{
    if(j < i)
    {
        return true;
    }
    if(a[i] == a[j])
    {
        return true;
    }
    else
    {
        return false;
    }    
    return isPalindrome(a, i + 1, j - 1);
}

int main() {
    int n;
    std::cin>>n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<boolalpha<<isPalindrome(a, 0, n - 1);
	return 0;
}