//Input a number and check if it is prime or not

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    bool flag=true;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=false;
            break;
        }
        else flag=true;
    }

    if(flag==false) cout<<"Not Prime"<<endl;
    else cout<<"Prime"<<endl;

    return 0;
}