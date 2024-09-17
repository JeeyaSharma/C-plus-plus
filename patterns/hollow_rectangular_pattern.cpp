/*
#include<iostream>
using namespace std;

int main()
{
    int rows;
    cout<<"Enter number of rows: ";
    cin>>rows;

    int cols;
    cout<<"Enter number of columns: ";
    cin>>cols;

    for(int i=1;i<=rows;i++)
    {
        if(i==1 || i==rows)
        {
            for(int j=1;j<=cols;j++)
            {
                cout<<"* ";
            }
            cout<<endl;
        }
        else
        {
            for(int j=1;j<=cols;j++)
            {
                if(j==1 || j==cols) cout<<"* ";
                else cout<<"  ";
            }
            cout<<endl;
        }
    }

    return 0;
}
*/

//Smaller code

#include<iostream>
using namespace std;

int main()
{
    int rows;
    cout<<"Input the number of rows: ";
    cin>>rows;

    int cols;
    cout<<"Input the number of cols: ";
    cin>>cols;

    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=cols;j++)
        {
            if(i==1 || i==rows || j==1 || j==cols)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    return 0;
}