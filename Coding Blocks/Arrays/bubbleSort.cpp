#include<iostream>
#include<climits>

void bubbleSort(long long a[], int n)
{
//Assume to be sorted
for(int i = 1; i < n; i++)
{
    //Assume to be unsorted, keep swapping to push larger element to the end
    for(int j = 0; j < n - i; j++)
    {
        if(a[j] > a[j + 1])
        {
            long long temp = a[j];
            a[j] =  a[j + 1];
            a[j + 1] = temp;
        }
    }
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
    bubbleSort(a, n);
	return 0;
}