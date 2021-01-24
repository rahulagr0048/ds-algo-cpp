#include<iostream>
#include<climits>

void SortLinearTime(long long a[], int n)
{
    long long count[3] = {0};
    for(int i = 0; i < n; i++)
    {
        if(a[i] == 0)
        {
            count[0]++;
        }
        else if(a[i] == 1)
        {
            count[1]++;
        }
        else
        {
            count[2]++;
        }    
    }
    while(count[0] > 0)
    {
        std::cout << 0 << std::endl;
        count[0]--;
    }
    while(count[1] > 0)
    {
        std::cout << 1 << std::endl;
        count[1]--;
    }
    while(count[2] > 0)
    {
        std::cout << 2 << std::endl;
        count[2]--;
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
    SortLinearTime(a, n);
	return 0;
}