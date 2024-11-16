#include<iostream>
using namespace std;

int power(int n,int exp)
{
    int ans=1;
    for(int i=1;i<=exp;i++)
    {
        ans*=n;
    }
    return ans;
}

int main()
{
    int n;
    cout<<"Enter a decimal number: ";
    cin>>n;

    int ans=0;
    int i=0;
    while(n!=0)
    {
        int bit=n&1;
        ans+=(bit*power(10,i));
        n=n>>1;
        i++;
    }
    cout<<"Binary Form is: "<<ans<<endl;

    return 0;
}