#include<iostream>
using namespace std;

long long maxCircularSum(long long a[], int n)
{
    long long cs = 0;
    long long ms = 0;
    for(int i = 0; i < n; i++)
    {
        cs += a[i];
        ms = max(ms, cs);
    }
    for(int i = 0; i < n - 1; i++)
    {
        cs += a[i];
        ms = max(ms, cs);
    }
    return ms;
}

int main() {
    int t;
    cin>>t;
    while(t > 0)
    {
	int n;
	std::cin>>n;	
	long long a[n];
	for(int i = 0; i < n; i++)
	{
		std::cin>>a[i];
	}
    std::cout<<maxCircularSum(a, n)<<endl;
    t--;    
    }
	return 0;
}