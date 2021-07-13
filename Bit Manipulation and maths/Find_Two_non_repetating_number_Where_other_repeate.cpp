// Que ->
// 	Find 2 non-repetating element in an array where other 
// 	elements in an array repeats twice.

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[] = {945,5,5,3,3,7,7,9,9,341};
	int res = 0;
                                            // find ^ xor of single elements
	for(int i: arr)
	{
		res = res ^ i;
	}
                        	                // cout<<"xor is done." endl;
                        	                // cout << res ;
                        	                // divide array
                        	                // 1st contain elements ends with 1 bits
                        	                // 2st contain elements ends with 0 bits
	int s = sizeof(arr)/sizeof(*arr);
	                                        // find right most bit 
	int temp = res & ~(res-1);
// 	cout << "value of  temp = " << temp;
	int x=0;
	int y=0;
	                                        // start a loop for array then & with 
	                                        // right most bit number and if its 
	                                        // true then store it in x other 
	                                        // wise store it in y. Here we are 
	                                        // using & orepator so if both bits are 
	                                        // 1 only then condition will true
	for(int i=0; i<s; i++)
	{
		if(arr[i]&temp){
			x = x ^ arr[i];
		}
		else{
			y = y ^ arr[i];
		}
	}
	
	cout << "Answer is: ";
	cout << x << " " << y;

	return 0;
}

sample input -
int arr[] = {945,5,5,3,3,7,7,9,9,341};

sample output - 
945 341 