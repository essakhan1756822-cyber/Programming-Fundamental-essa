#include<iostream>
using namespace std;
int main()
{
	int Num1,Num2;
	char Operator;
	cout<<"Enter First Number:";
	cin>>Num1;
	cout<<"Enter Second Number:";
	cin>>Num2;
	cout<<"Enter Operator:";
	cin>>Operator;
	switch(Operator)
	{
		case '+': cout<<"Addition of Two Numbers is:"<<Num1+Num2;
		break;
		case '-': cout<<"Subtraction of Two Numbers is:"<<Num1-Num2;
		break;
		case '*': cout<<"Multiplication of Two Numbers is:"<<Num1*Num2;
		break;
		case '/': cout<<"Division of Two Numbers is:"<<Num1/Num2;
		break;
		default: cout<<"Invalid Operator.";
		break;
	}
	return 0;
}