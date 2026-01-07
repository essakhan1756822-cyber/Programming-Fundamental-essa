#include<iostream>
using namespace std;
int main()
{
	const float Pie=3.14;
	int S;
	int r,l,w,b,h;
	cout<<"Enter Shape(1 for Circle, 2 for Rectangle, 3 for Triangle):\t";
	cin>>S;
	switch(S)
	{
		case 1:cout<<"Enter radius:";
		cin>>r;
	    cout<<"Area of Circle is:"<<Pie*r*r;
		break;
		case 2: cout<<"Enter Length:";
		cin>>l;
		cout<<"Enter Width:";
		cin>>w;
		cout<<"Area of Rectangle is:"<<l*w;
		break;
		case 3: cout<<"Enter Base:";
		cin>>b;
		cout<<"Enter Height:";
		cin>>h;
		cout<<"Area of Triangle is:"<<0.5*b*h;
		break;
		default: cout<<"Wrong Shape input.";
		break;
	}
	return 0;
}