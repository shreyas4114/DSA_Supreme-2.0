#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        char count = 'A';
        for (int col = 0; col <= row; col++)
        {
            cout << count;
            count++ ;
        }
        char temp = row + 'A' -1;
        for (int col = 0; col < row; col++)
        {
            cout << temp;
            temp-- ;
        }
        
        cout << endl;

    }
    
    return 0;
}