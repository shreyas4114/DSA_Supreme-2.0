#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        int temp = row+1;
        for (int space = 0; space < n-row-1; space++)
        {
            cout << "  ";
        }
        for (int col = 0; col < row; col++)
        {
            cout << temp++ << " ";
        }
        int temp2 = 2*row + 1;
        for (int col = 0; col <= row; col++)
        {
            cout << temp2 << " ";
            temp2-- ;
        }
        
        cout << endl;

    }
    
    return 0;
}