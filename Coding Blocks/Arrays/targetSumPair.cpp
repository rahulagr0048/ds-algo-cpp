#include<iostream>
#include<climits>
#include<algorithm>

void targetSumPair(int a[], int n, int target)
{
	for(int i = 0; i < n; i++)
	{
        for(int j = i + 1; j < n; j++)
        {
		if(a[i] + a[j] == target)
		{
			std::cout<<a[i]<<" and "<<a[j]<<std::endl;
		}
        }
    }
}

void targetSumPair_twoPointer(int a[], int n, int target)
{
	int i = 0;
	int j = n - 1;
	while( i < j)
	{
		int sum = a[i] + a[j];
		if(sum < target)
		{
			i++;
		}
		else if(sum > target)
		{
			j--;
		}
		else
		{
			std::cout<<a[i]<<" and "<<a[j]<<std::endl;
			i++;
			j--;
		}		
	}
}

int main() {
	int n;
	std::cin>>n;	
	int a[n];
	for(int i = 0; i < n; i++)
	{
		std::cin>>a[i];
	}
    int target;
    std::cin>>target;
	std::sort(a,a+n);
    targetSumPair_twoPointer(a, n, target);
	return 0;
}