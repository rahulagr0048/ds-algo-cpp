#include<iostream>
using namespace std;

long long maxSubarraySum(long long a[], int n)
{
    long long cs = 0;
    long long ms = 0;
    for(int i = 0; i < n; i++)
    {
        cs += a[i];
        if(cs < 0)
        {
            cs = 0;
        } 
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
    std::cout<<maxSubarraySum(a, n)<<endl;
    t--;    
    }
	return 0;
}