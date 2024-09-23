#include<iostream>
using namespace std;

int main()
{
    int rows;
    cout<<"Rows: ";
    cin>>rows;

    int cols;
    cout<<"Cols: ";
    cin>>cols;

    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=cols;j++)
        {
            if((i+j)%2!=0)
            {
                cout<<"2"<<" ";
            }
            else
            {
                cout<<"1"<<" ";
            }
        }

        cout<<endl;
    }

    return 0;
}