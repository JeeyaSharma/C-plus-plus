/*
Take N as input. Print the sum of its odd placed digits and sum of its even placed digits.

Input Format
Constraints
0 < N <= 1000000000

Output Format
Sample Input
2635
Sample Output
11
5
*/

#include<iostream>
using namespace std;

int digits(int n)
{
	int count=0;
	while(n!=0)
	{
		n/=10;
		count++;
	}

	return count;
}
int main() {

	int n;
	cin>>n;

	int digit=digits(n);
	int r;

	int sum_even=0,sum_odd=0;

	for(int i=1;i<=digit;i++)
	{
		r=n%10;

		if(i % 2 == 0) sum_even+=r;

		else sum_odd+=r;

		n/=10;
	}

	cout<<sum_odd<<endl<<sum_even<<endl;

	return 0;
}