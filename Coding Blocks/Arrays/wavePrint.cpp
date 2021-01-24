#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;

int main() {
    int n, m;
    std::cin>>n;
    std::cin>>m;   
    int a[n][m];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
    }
    //Wave Print
    for(int i = 0; i < m; i++)
    {
        if(i % 2 == 0)
        {
            for(int j = 0; j < n; j++)
            {
                cout<<a[j][i]<<", ";
            }
        }
        else
        {
            for(int j = n - 1; j >= 0; j--)
            {
                cout<<a[j][i]<<", ";
            }            
        }        
    }
    cout<<"END";
	return 0;
}