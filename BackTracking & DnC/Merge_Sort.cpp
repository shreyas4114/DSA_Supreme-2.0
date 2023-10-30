#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, vector<int> &temp, int s, int mid, int e)
{
    int i = s;          // left side of mid
    int j = mid+1 ;      // right side of mid
    int k = s;         //  for temp vector
    while (i <= mid && j <= e)
    {
        if(arr[i] <= arr[j])
        {
            temp[k] = arr[i] ;
            k++;
            i++;
        }
        else
        {
            temp[k] = arr[j];
            k++;
            j++;
        }
    }
    // handle remaining elements in case of diff array size
    while (i <= mid)
    {
        temp[k] = arr[i];
        k++;
        i++;
    }
    while (j <= e)
    {
        temp[k] = arr[j];
        k++;
        j++;
    }

    // copy elements from temp to arr
    while (s <= e)
    {
        arr[s] = temp[s];
        s++;
    }
}

void mergesort(vector<int> &arr, vector<int> &temp, int s, int e)
{
    if(s >= e) return ;

    int mid = (s+e)/2 ;
    // divide
    mergesort(arr, temp, s, mid);
    mergesort(arr, temp, mid + 1, e);
    // conqour
    merge(arr, temp, s, mid, e);
}

int main()
{
    vector<int> arr = {2,1,6,9,4,5};
    int size = arr.size();
    int s= 0;
    int e= size-1;
    vector<int> temp(arr.size(), 0) ;    // yaha galti karoge    don't forget this

    cout << "Before merge sort: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " " ;
    }
    cout << endl;

    mergesort(arr, temp, s, e);
    
    cout << "After merge sort: " << endl;
    for (int j = 0; j < size; j++)
    {
        cout << arr[j] << " " ;
    }
  
    return 0;
}