#include <iostream>
using namespace std;

template <class T>
T addFun(int a, int b)
{
    return a+b;
}

int main()
{
    int a = 14;
    int b = 14;
    int res = addFun<int>(a, b);
    cout<<"Sum is : "<<res<<endl;
}