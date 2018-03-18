#include<iostream>
using namespace std;

class kathir
{
public:
void square()
{
	int a,n;
	cout<<"square of the number";
	cin>>a;
	n=a*a;
	cout<<"\t"<<n;
}
void fact()
{
	int n,i,sum=1;
	cout<<"factorial of the number";
	cin>>n;
	for(i=1;i<n;i++)
	{
	sum=sum*i;
	}
	cout<<"\t"<<sum;
}
};
int main() 
{
	kathir f;
	int n;
	cin>>n;
	switch(n)
	{
		case 1:
		f.square();
		break;
		     case 2:
		f.fact();
		break;
		default:
                           cout<<"try another";
		
	}
	
return 0;	
}
