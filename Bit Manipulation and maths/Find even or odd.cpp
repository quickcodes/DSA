#include<stdio.h>
int main()
{
   int n;
   printf("Enter an integer\n");
   scanf("%d",&n);
   if ( n & 1 == 1 )
      printf("Odd\n");
   else
      printf("Even\n");
   return 0;
}


// ##########################################################################
// C++ program to check for even or odd
// using Bitwise AND operator
#include <iostream>
using namespace std;
// Returns true if n is even, else odd
bool isEven(int n)
{
    // n&1 is 1, then odd, else even
    return (!(n & 1));
}
// Returns true if n is even, else odd
bool isEven(int n)
{
    // n^1 is n+1, then even, else odd
    if (n ^ 1 == n + 1)
        return true;
    else
        return false;
}
// Driver code
int main()
{
    int n = 101;
    isEven(n) ? cout << "Even" : cout << "Odd";
    return 0;
}

// ##########################################################################
// Explanation -
// We need to check the last bit of number if its 0 then number is even
// and if its 1 then number is odd.
// So to find that we use & operator because in & operator
// 1 1 = 1
// 0 1 = 0
// 1 0 = 0
// 0 0 = 1
//
// 64 32 16 8 4 2 1
// num = 6
//   1 1 0  =   6
//  &0 0 1  = & 1
//  -------   ----
//   0 0 1  =   1
// Here our last digit is 1 so the number is even
