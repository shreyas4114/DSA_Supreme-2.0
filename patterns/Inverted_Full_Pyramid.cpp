#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int space = 0; space < row; space++)
        {
            cout << " ";
        }
        for (int col = 0; col < n-row ; col++)
        {
            cout << "* ";
        }
        
        cout << endl;
    }
    
    return 0;
}