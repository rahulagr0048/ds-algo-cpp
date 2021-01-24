#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;

int main() {
    int n, m;
    std::cin>>n>>m; 
    int a[n][m];
    int x;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
    }
    cin>>x;
    //
    int i = 0;
    int j = m - 1;
    while(i < n && j >=0)
    {
        if(a[i][j] > x)
        {
            j--;
        }
        else if(a[i][j] < x)
        {
            i++;
        }
        else
        {
            cout<<"1";
            return 0;
        }               
    }
    cout<<"0";
	return 0;
}