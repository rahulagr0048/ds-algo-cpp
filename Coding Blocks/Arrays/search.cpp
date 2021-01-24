#include <iostream>
#include <vector>
using std::vector;

int linearSearch(vector<int> arr, int n, int key)
{
    int i;
    for(i=0; i < n; i++)
    {
        if(arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int binarySearch(vector<int> arr, int n, int key)
{
int s = 0;
int e = n - 1;
while(s <= e)
{
    int mid = (s + e)/2;
    if(arr[mid] == key)
    {
        return mid;
    }
    else if(arr[mid] > key)
    {
        e = mid - 1;
    }
    else
    {
        s = mid + 1;
    }    
}
return -1;
}

int main() {
  int n;
  int key;
  std::cin >> n >> key;
  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    std::cin >> arr[i];
  }
  std::cout<<linearSearch(arr, n, key)<<std::endl;
  std::cout<<binarySearch(arr, n, key);
  return 0;
}