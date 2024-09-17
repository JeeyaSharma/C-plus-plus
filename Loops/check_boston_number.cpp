/*
A Boston number is a composite number, the sum of whose digits is the sum of the digits of its prime factors obtained as a result of prime factorization (excluding 1 ). The first few such numbers are 4,22 ,27 ,58 ,85 ,94 and 121 . For example, 378 = 2 × 3 × 3 × 3 × 7 is a Boston number since 3 + 7 + 8 = 2 + 3 + 3 + 3 + 7. Write a program to check whether a given integer is a Boston number.

Input Format
There will be only one line of input:N , the number which needs to be checked.

Constraints
1 < N < 2,147,483,647 (max value of an integer of the size of 4 bytes)

Output Format
1 if the number is a Boston number. 0 if the number is a not Boston number.

Sample Input
378
Sample Output
1
*/

#include<iostream>
using namespace std;

int digits_sum(int n)
{
    int sum=0;
    while(n!=0)
    {
        sum+=(n%10);
        n/=10;
    }

    return sum;
}

int main()
{
    int num;
    cin>>num;

    int sum_of_digits=digits_sum(num);
    int sum_of_primes=0;

    for(int i=2;i<=num;i++)
    {
        while(num%i==0)
        {
            sum_of_primes+=digits_sum(i);
            num/=i;
        }
    }

    if(sum_of_digits == sum_of_primes)
    {
        cout<<"1"<<endl;
    }

    else
    {
        cout<<"0"<<endl;
    }

    return 0;
}