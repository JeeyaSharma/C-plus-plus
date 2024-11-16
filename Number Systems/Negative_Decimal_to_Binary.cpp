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
    cout<<"Enter a negative number: ";
    cin>>n;

    int comp_1= ~n; //1's complement
    int comp_2= comp_1+1; //2's complement

    int ans=0;
    int i=0;
    while(comp_2!=0)
    {
        int bit=comp_2 & 1;
        ans+=(bit*power(10,i));
        comp_2=comp_2>>1;
        i++;
    }
    cout<<"Binary Form is: "<<ans<<endl;

    return 0;
}