#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter num:";
    cin>>num;
    int x=num;
    int reverse=0;
    while(num!=0)
    {
        int lastDigit=num%10;
        reverse=reverse*10+lastDigit;
        num/=10;
    }
    if(reverse==x)
    {
        cout<<" yes it is palindrome";
    }
    else
    {
        cout<<" no it is not palindrome";
    }
    return 0;
}