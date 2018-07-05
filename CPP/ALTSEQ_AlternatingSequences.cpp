#include <iostream>
#include <stdio.h>
#include <vector>
#include <cmath>
#include <stdlib.h>
#include<limits.h>

using namespace std;

long long int findmax(vector<long long int> arr)
{
	long long int i;
	long long int wid = arr.size();
	long long int max = INT_MIN;
	for (i=0;i<wid;i++)
	 {
		  if (arr[i]>max)
			 max = arr[i];
     }
	 return max;
}


int main()
{     long double N;
	  long long int T;
	  long long int i;
	  long long int j;
	  long long int k;
	  cin >> T;
	  vector<long double> seq;
	  vector<long long int> len;
	  k = T;
	  while(k)
	  {   cin>>N;
		 seq.push_back(N);
		 len.push_back(1);
		 k--;
	  }
	 for (i=1;i<T;i++)
	 {
		 for (j=0;j<i;j++)
		   {    bool check1,check2;
				  check1 = (abs(seq[i])>abs(seq[j]));
				  check2 = (seq[i]*seq[j] < 0);
				  if (check1&&check2)
					  len[i] = (len[j]+1)>len[i]?(len[j]+1):len[i];
           }
	 }

	  cout<< findmax(len);
	  return 0;

}