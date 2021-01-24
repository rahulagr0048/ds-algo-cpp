#include<iostream>
#include<climits>

void insertionSort(long long a[], int n)
{
for(int i = 1; i < n; i++)
{
    long long x = a[i];
    int j = i - 1;
    while(j >=0 && a[j] > x)
    {
        a[j + 1] = a[j];
        j--;
    }
    a[j + 1] = x;
}
for(int i = 0; i < n; i++)
{
    std::cout << a[i] << " ";
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
    insertionSort(a, n);
	return 0;
}