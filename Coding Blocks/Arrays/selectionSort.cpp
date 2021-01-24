#include<iostream>
#include<climits>

void selectionSort(long long a[], int n)
{
for(int i = 0; i < n - 1; i++)
{
    int min = i;
    for(int j = i + 1; j < n; j++)
    {
        if(a[j] < a[min])
        {
            min = j;
        }
    }
    long long c = a[i];
    a[i] = a[min];
    a[min] = c;
}
for(int i = 0; i < n; i++)
{
    std::cout << a[i] << std::endl;
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
    selectionSort(a, n);
	return 0;
}