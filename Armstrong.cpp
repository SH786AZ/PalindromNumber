#include<iostream>
#include<math.h>
using namespace std;
int A(int n)
{
    int cnt=0;
    int m=n;
    while(m!=0)
    {
        m/=10;
        cnt++;
    }
    m=n;
    int ans=0;
    while(m!=0)
    {
        int dig=m%10;
        ans+=round(pow(dig,cnt));
        m/=10;
    }
    cout<<ans<<endl;
    return ans==n;
}
int main()
{
    int n;
    cin>>n;
    if(A(n))
    cout<<"yes";
    else
    cout<<"no";
    return 0;
}