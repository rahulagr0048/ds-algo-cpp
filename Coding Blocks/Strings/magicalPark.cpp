#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;

void magicalPark(char park[][1000], int m, int n, int k, int s)
{
    bool success = true;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            char ch = park[i][j];
            if(s < k)
            {
                success = false;
                break;
            }

            if(ch == '.')
            {
                s -=2;
            }
            else if(ch == '*')
            {
                s +=5;
            }
            else
            {
                break;
            }

            if(j != m-1)
            {
                s--;
            }
        }
        if(success == false)
        {
            break;
        }
    }

    if(success == true)
    {
        cout<<"Yes"<<endl;
        cout<<s;
    }
    else
    {
        cout<<"No";
    }
}

int main() {
    int n, m, k, s;
    std::cin>>n>>m>>k>>s;
    char a[1000][1000];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
    }
    magicalPark(a, m, n, k, s);
	return 0;
}