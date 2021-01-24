#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void bounds(int arr[], int n, vector<int> query)
{
    for(int i = 0; i < query.size(); i++)
    {
        bool present = binary_search(arr, arr + n, query[i]);
        if(present == 0)
        {
            cout<<-1<<" "<<-1<<endl;
        }
        else
        {
            auto lb = lower_bound(arr, arr + n, query[i]);
            auto ub = upper_bound(arr, arr + n, query[i]);
            cout<<(lb - arr)<<" "<<(ub - arr - 1)<<endl;
        }
    }
}

int main() {
  int n;
  std::cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    std::cin >> arr[i];
  }
  int q;
  std::cin>>q;
  vector<int> query(q);
  for (int i = 0; i < q; i++) {
    std::cin >> query[i];
  }
  bounds(arr, n, query);
  return 0;
}