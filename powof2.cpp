#include<iostream>
#include<cmath>
using namespace std;

int  powerof2(long long  n)
{
	      if(n<=0)
            return 0;
	int count= __builtin_popcount(n);
	if(count==1)
		return 1;
	else 
		return 0;
}


int main()
{
		long  n=8;
		long  a=7;
		
		cout<<powerof2(218)<<endl;
		cout<<powerof2(218)<<endl;
}
