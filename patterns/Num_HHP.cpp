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
            if ((col == 0 || col == row) && row != n-1)
            {
                cout << count << " ";
                count = count + row;
            }
            else if (row == n-1)
            {
                cout << count << " ";
                count++ ;
            }
            else
            {
                cout << "  ";
            }
            
            
        }
        cout << endl;
    }
    
    return 0;
}