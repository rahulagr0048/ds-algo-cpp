#include<iostream>
#include<climits>
#include<algorithm>

void targetSumTriplet_twoPointer(int a[], int n, int target)
{
    for(int x = 0; x < n - 1; x++)
    {
        int i = x + 1;
        int j = n - 1;
        while( i < j)
        {
            int sum = a[x] + a[i] + a[j];
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
                std::cout<<a[x]<<", "<<a[i]<<" and "<<a[j]<<std::endl;
                i++;
                j--;
            }	        	
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
    targetSumTriplet_twoPointer(a, n, target);
	return 0;
}