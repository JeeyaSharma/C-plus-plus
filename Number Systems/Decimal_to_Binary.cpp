//Check whether the entered number is positive or negative and find the binary form accordingly

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
    cout<<"Enter a Decimal Number: ";
    cin>>n;

    if(n>=0)
    {
        int ans=0;
        int i=0;
        while(n!=0)
        {
            int bit=n&1;
            ans+=(bit*power(10,i));
            n=n>>1;
            i++;
        }
        cout<<"Binary form is: "<<ans<<endl;
    }
    else
    {
        int comp_1= ~n;
        int comp_2= comp_1+1;

        int ans=0;
        int i=0;
        while(comp_2!=0)
        {
            int bit=comp_2&1;
            ans+=(bit*power(10,i));
            comp_2=comp_2>>1;
            i++;
        }
        cout<<"Binary Form is: "<<ans<<endl;
    }

    return 0;
}