#include<iostream>
#include<climits>

long long findMax(long long a[], int n)
{
	long long max = LLONG_MIN;
	for(int i = 0; i < n; i++)
	{
		if(a[i] > max)
		{
			max = a[i];
		}
	}
	return max;
}
int main() {
	int n;
	std::cin>>n;	
	long long a[n];
	for(int i = 0; i < n; i++)
	{
		std::cin>>a[i];
	}
	std::cout<<findMax(a, n);
	return 0;
}