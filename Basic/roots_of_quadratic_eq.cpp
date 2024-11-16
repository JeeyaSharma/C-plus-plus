#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the coefficients: "<<endl;
    cin>>a>>b>>c;

    float root1,root2;

    root1=(-b + (sqrt(pow(b,2)-(4*a*c)))/(2*a));
    root2=(-b-(sqrt(pow(b,2)-(4*a*c)))/(2*a));

    cout<<"Roots are: "<<endl<<root1<<endl<<root2<<endl;

    return 0;
}