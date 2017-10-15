#include<iostream.h>
#include<math.h>
void main()
{
	float a,b,c,s;
	cout<<"Please enter three sides of the triangle:";
	cin>>a>>b>>c;
	s=(a+b+c)/2;
	cout<<"The area of this triangle is:"
	<<sqrt(s*(s-a)*(s-b)*(s-b))<<endl;
}