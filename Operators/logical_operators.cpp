#include<iostream>
using namespace std;

int main()
{
    bool exp1=true, exp2=true;
    bool exp3=false, exp4=false;
    
    cout<<"AND Operator: "<<endl;

    cout<<"Both true: "<<(exp1 && exp2)<<endl; //Returns true
    cout<<"One true and one false: "<<(exp1 && exp3)<<endl; //Returns false
    cout<<"Both false: "<<(exp3 && exp4)<<endl; //Returns false

    cout<<"OR Operator: "<<endl;
    cout<<"Both true: "<<(exp1|| exp2)<<endl; //Returns true
    cout<<"One true and one false: "<<(exp1 || exp3)<<endl; //Returns true
    cout<<"Both false: "<<(exp3 || exp4)<<endl; //Returns false

    cout<<"NOT Operator: "<<endl;
    cout<<"NOT on true: "<<!exp1<<endl; //Returns false
    cout<<"NOT on false: "<<!exp3<<endl; //Returns true
    return 0;
}