#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool RednBrackets(string &s)
{
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if (ch=='(' || ch=='+' || ch=='-' || ch=='*' || ch=='/')
        {
            st.push(ch);
        }
        else if(ch == ')')
        {
            int operatorCount = 0;
            while (st.top() != '(' && !st.empty())        // do not forget to check if stack is empty
            {
                char temp = st.top();
                if (temp=='+' || temp=='-' || temp=='*' || temp=='/')    //  IMP
                {
                    operatorCount++;
                }               
                st.pop();
            }
            st.pop();                // IMP -  yaha pe galti karoge  
            if (operatorCount == 0)
            {
                return true;               // eq. has redundant brackets
            }
        }
        
    }
    return false;    // no redundant brackets
    
}

int main()
{
    string str = "((a+b)*(a-b))";         // eq. should be valid
    bool ans = RednBrackets(str);

    if (ans == true)
    {
        cout << "Redundand brackets present" << endl;
    }
    else
    {
        cout << "Redundant brackets NOT present" << endl;
    }
    
    return 0;
}