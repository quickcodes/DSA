#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int arr[] = {2,3,4,5,9,2,3,4,5};
	int res = 0;

	for(int i: arr){
		res = res ^ i;
	}

	printf("%d\n", res);
	
	return 0;
}






// Que ->
// 	Find the only non-repetating element in an array where every 
// 	element in an array repeats twice.
// Solution ->
// 	Given that - int arr[] = {2,3,4,5,9,2,3,4,5};
// 	(Inside Loop)
// 	0^2
// 	0^2^3
// 	0^2^3^4
// 	0^2^3^4^5
// 	0^2^3^4^5^9
// 	0^2^3^4^5^9^2      = 2^2 = 0
// 	0^3^4^5^9^3        = 3^3 = 0
// 	0^4^5^9^4          = 4^4 = 0
// 	0^5^9^5            = 5^5 = 0
// 	0^9                = 0^9 = 9

// (property of xor - if both bits are same then answer is 0)
// for example - 2^2
// 	 1 0 
// 	^1 0
// ans- 0 0 