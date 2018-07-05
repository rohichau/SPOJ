#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	 int T;
	 int i,j,N,K;
	 cin>>T;
	 while(T)
	  {
	 // cout<<"Enter number of friends: "<<endl;
	  cin>>N;
	 // cout<<"\n Enter total kilograms: "<<endl;
	  cin>>K;
	//  cout<<endl;
	  int prices[K+1];
	  int optimal[K+1];
	  prices[0]=-1;
	  optimal[0]=1000000000;
 	  int a,b;
	  for (i=1;i<=K;i++)
	  {
		  cin>>prices[i];
		  if (prices[i]==-1)
			   prices[i]=1000000000;
		  optimal[i] = 1000000000;
	  }
	  int sumval;
	  optimal[1] = prices[1];
	  optimal[0] = 0;
	  for (i=2;i<=K;i++)
	  {     int min = 1000000000;
		   for (j=1;j<=i;j++)
		   {
				 a = optimal[i-j];
				 b = prices[j];
				 sumval = a+b;
				  if (sumval>0)
					  min = sumval<=min?sumval:min;
			//	cout<<"min here is: "<<min<<endl;
		   }
		   optimal[i] = min;
	  }
	  if (optimal[K]==1000000000)
		  optimal[K] = -1;
	  cout<<optimal[K]<<endl;
	  T--;
	  }
   return 0;

}