#include<iostream>
using namespace std;

class Stack
{
    public:

    int *arr;
    int size;
    int top1;
    int top2;

    Stack(int size)
    {
        arr = new int[size];           // yaha pe galti karoge
        this->size = size;            // imp
        top1 = -1;
        top2 = size;
        for (int i = 0; i < size; i++)             // array ko 0 se initialize karna hoga or garbage value ayegi
        {
            arr[i] = 0;
        }
        
    }

    void push1(int data) 
    {
        if(top2-top1 == 1)
            cout << "Overflow" << endl;
        else
        {
            top1++;
            arr[top1] = data;
        }
    }

    void push2(int data)
    {
        if(top2-top1 == 1)
            cout << "Overflow" << endl;
        else
        {
            top2--;
            arr[top2] = data;
        }
        
    }

    void pop1()
    {
        if (top1 == -1)
        {
            cout << "Underflow stack 1" << endl;
        }
        else
        {
            arr[top1] = 0;
            top1--;
        }
    }

    void pop2()
    {
        if (top1 == size)
        {
            cout << "Underflow stack 2" << endl;
        }
        else
        {
            arr[top2] = 0;
            top2++;
        }
    }

    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        
    }
};


int main()
{
    Stack st(5);
    st.push1(10);
    st.push1(20);
    st.push1(30);
    st.push2(100);
    st.push2(200);
    
    st.print();

    st.pop1();
    st.pop2();
    
    st.print();



    return 0;
}