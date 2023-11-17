// find next smaller element in an array   in O(1)
#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> nextSmaller(int *arr, int size, vector<int> &ans)
{
    stack<int> st;
    st.push(-1);

    for (int i = size-1; i >= 0; i--)
    {
        int curr = arr[i];

        while (st.top() >= curr)
        {
            st.pop();
        }

        ans[i] = st.top();
        st.push(curr);
        
    }
    return ans;
    
}

int main()
{
    int arr[5] = {8,4,6,2,3};
    int size = 5;

    vector<int> ans(size);            // size pass karna jaruri hai
    ans = nextSmaller(arr,size,ans);
    for(auto x: ans)
    {
        cout << x << " " ;
    }
    cout << endl;

    
    return 0;
}