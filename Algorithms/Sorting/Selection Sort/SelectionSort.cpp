#include<iostream>
#include<vector>
using namespace std;

void selectionSort(vector<int> &arr)
{
      int n = arr.size();

      for (int i = 0; i < n - 1; i++)
      {
            int M = arr[i];

            for (int j = i + 1; j < n; j++)
            {
                  if (M > arr[j])
                  {
                        swap(arr[j], M);
                  }
            }

            arr[i] = M;
      }
}

int main()
{
      vector<int> arr = {64, 25, 12, 22, 11};

      cout << "Before Sorting: ";
      for (int num : arr)
      {
            cout << num << " ";
      }

      selectionSort(arr);

      cout << "\nAfter Sorting: ";
      for (int num : arr)
      {
            cout << num << " ";
      }

      return 0;
}