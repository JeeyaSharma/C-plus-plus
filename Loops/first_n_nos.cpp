//Print the sum of first n natural numbers where, n is the input

//Using while loop

/*
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a natural number: ";
    cin>>n;

    int i=1,sum=0;
    while(i<=n)
    {
        sum+=i;
        i++;
    }

    cout<<"Sum of first "<<n<<" natural numbers using while loop= "<<sum<<endl;
    return 0;
}
*/


//Using for loop

/*
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=i;
    }

    cout<<"Sum of first "<<n<<" natural numbers using for loop= "<<sum<<endl;

    return 0;
}
*/


//Using do-while loop


#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int sum=0;
    int i=1;
    do{
        sum+=i;
        i++;
    }
    while(i<=n);

    cout<<"Sum of first "<<n<<" natural numbers using do-while loop= "<<sum<<endl;

    return 0;
}