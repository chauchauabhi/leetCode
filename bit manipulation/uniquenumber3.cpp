#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

void uniquenumb3(int arr[],int n)
{	
	int tarr[32]={0,};

	for(int i=0;i<n;i++)
	{
		int j=0;
		int temp=arr[i];
		while (temp>0)
		{
			
			tarr[j]+=temp&1;
			j++;
			temp=temp>>1;
			//cout<<tarr[j]<<" ";
		}
		//cout<<endl;
	}
	int uqnumb=0;
	
	for(int i=0;i<32;i++)
	{
		tarr[i]=tarr[i]%3;
		if(tarr[i]==1)
		{
			uqnumb=uqnumb+pow(2,i);
		}
	}
			
	
	cout<<"Unique number is : "<<uqnumb<<endl;
} 

int main()
{
	int arr[]={2,2,5,2,5,5,3,9,3,3};
	uniquenumb3(arr,sizeof(arr)/sizeof(int));
	return 0;
}
