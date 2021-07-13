#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
	// Both code work same 
	return b == 0 ? a : gcd(b , a%b);		// 1 liner code.

	// if (b == 0) return a; 				// Multiline code.
	// return gcd(b, a%b);       			// If a%b is 0 then return a 
											// in another recursion.
}
/*



given- a=24 b=60
1.
	if(60==0) return a;          			// Condition false.
	return gcd(60, 24%60)        			//  24 % 60 == 24 

given- a=60 b=24
2.	if(24==0) return a;          			// Condition false.
	return gcd(24, 60%24)	     			//  60 % 24 == 12

given- a=24 b=12
3.	if(12==0) return a;          			// Condition false.
	return gcd(12, 24%12)	     			//  24 % 12 == 0

given- a=24 b=0
4.	if(0==0) return a;          			// Condition true.



*/
int main(int argc, char const *argv[])		// Main function.
{
	cout << gcd(24,60);  					// Printing gcd/hcf.
	return 0;
}
