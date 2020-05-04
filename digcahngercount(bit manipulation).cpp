#include<iostream>
using namespace std;

void numdig(int n,int m)
{
	if(n>m)
		swap(n,m);
		
	int count=0;
	int tempm=m;
	while(tempm!=0)
	{
		tempm=tempm>>1;
		count++;
	}
	cout<<count<<endl;
	tempm=m;
	int tempn=0;
	int dig=0;
	for (int i=0;i<count;i++)
	{
		if((tempn&1)!=(tempm&1))
			dig++;
		
		tempm=tempm>>1;
		tempn=tempn>>1;
	}
	cout<<"No of digits to change: "<<dig<<endl;
		
}
int main()
{
	int m;
	int n;
	cin>>n>>m;
	numdig(n,m);	
	return 0;
}
