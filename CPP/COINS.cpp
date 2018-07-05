#include <iostream>
#include <stdio.h>
#include <cmath>
#include <map>

using namespace std;

//long long int* memoize = new long long int[1000000];
map <long long int , long long int> memoize;
long long int temp;


long long int coins(long long int num)
{
	 if (num<=10)
		 return num;//
//   if (num < 1000000)
	   if (!memoize[num])
		  {  
		    // memoize[num] = coins(num/2) + coins(num/3) + coins(num/4);
				 temp = coins(num/2) + coins(num/3) + coins (num/4);

			  if (temp>num)
			   { memoize[num] = temp;}
			   else
				 {memoize[num]=num;}
			}
				 return memoize[num];


}
   		 

int main()
{
   long long int T;
   while(cin>>T)
     {
	 // long long int* thismap = new long long int[1000000] ;
	 // mynum = new long long int[T+1];
	// map <long long int, long long int> thismap;
//	  for (long long int i=0;i<1000000;i++)
//	 {
//		 memoize[i] = -1;
//	 }
/*	 thismap[0]=0;
	 thismap[1]=1;
	 thismap[5]=5;
	 thismap[2]=2;
	 thismap[3]=3;*/
	 temp =0;

	cout<<coins(T)<<endl;
	}
     return 0;
}