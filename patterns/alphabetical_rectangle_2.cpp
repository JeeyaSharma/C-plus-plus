#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<(char)(65+j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}