#include<iostream>
using namespace std;

int power(int n, int exp)
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
    cout<<"Enter a Binary Number: ";
    cin>>n;

    int ans=0;
    int i=0;
    while(n!=0)
    {
        int digit=n%10;
        if(digit==1)
        {
            ans+=digit*power(2,i);
        }
        n/=10;
        i++;
    }

    cout<<"Decimal Form of the number: "<<ans<<endl;
    return 0;
}