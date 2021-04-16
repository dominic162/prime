#include<iostream>
using namespace std;
int main()
{
	int num,i=0,j,flag=0;
	cout<<"enter the number ";
	cin>>num;
	if(num>=2)
	cout<<"2 ";
	if (num>=3)
	cout<<"3 ";
	for(i=4;i<num;i++)
	{
		for(j=2;j*j<=i;j++)
		{
			if((i%j)==0)
			{
			flag=1;
		    break;
		   }
		   else
		   flag=0;
		}
		if(flag==0)
		cout<<i<<" ";
	}
	return 0;
}
