#include<iostream>
#include<climits>

void CountingSort(long long a[], int n)
{
    long long max = LONG_MIN;
    for(long long i = 0; i < n; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }    
    long long count[max + 1] = {0};
    for(long long i = 0; i < n; i++)
    {
        count[a[i]]++;
    }
    for(long long i = 0; i < max + 1; i++)
    {
        while(count[i] > 0)
        {
            std::cout<<i<<" ";
            count[i]--;
        }
    }
}

int main() {
	int n;
	std::cin>>n;	
	long long a[n];
	for(int i = 0; i < n; i++)
	{
		std::cin>>a[i];
	}
    CountingSort(a, n);
	return 0;
}