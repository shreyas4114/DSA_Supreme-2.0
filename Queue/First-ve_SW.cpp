#include<iostream>
#include<queue>
using namespace std;

void printFirstNegative(int *arr, int n, int k)
{
    deque<int> dq;

    // for first window
    for (int i = 0; i < k; i++)
    {
        int element = arr[i];
        if (element < 0)
        {
            dq.push_back(i);
        }   
    }

    // process remaining windows -> addition and deletion
    for (int i = k; i < n; i++)
    {
        //aage badhne se pehele purane window ka ans nikal lo
        if (dq.empty())
        {
            cout << " " ;
        }
        else {
            cout << arr[dq.front()] << " ";
        }

        // Removal -> out of range ho to queue se nikal do 
        if (i - dq.front() >= k) {      // IMP
            dq.pop_front();
        }

        // Addition 
        if (arr[i] < 0)
        {
            dq.push_back(i);
        }
        
    }

    // last window ka ans print kardo
    if (dq.empty())
    {
        cout << " " ;
    }
    else {
        cout << arr[dq.front()] << " ";
    }
    
}

int main()
{
    int arr[] = {2,-5,4,-1,-2,0,5};
    printFirstNegative(arr,7,3);   
    return 0;
}