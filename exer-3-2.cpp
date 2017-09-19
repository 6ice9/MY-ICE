#include<iostream.h>
void main()
{
	int x,y;
    cout<<"please input x:"<<endl;
    cin>>x;
    if(x<10)
    y=1;
    else
    if(x<=99)
    y=2;
    else
    if(x<=999)
       y=3;
       else
       y=4;
       switch(y)
	   {
       case 1:cout<<"<10/n";break;
       case 2:cout<<"10~99/n";break;
       case 3:cout<<"100~999/n";break;
       case 4:cout<<"1000ртио/n";break;
   }}
