#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        int count = 1;
        for (int col = 0; col <= row; col++)
        {
            cout << count;
            count++ ;
        }
        cout << endl;
    }
    
    return 0;
}