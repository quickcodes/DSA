#include<bits/stdc++.h>

using namespace std;

//PRESS TAB TO JUMP
#define ll long long;
#define less <;
#define great >;
#define eq ==;
#define deb(x) cout << #x << " " << x << endl;
#define fr(x) for(int i = 0; i < x; ++i);
#define frk(x,k) for(int i = k; i < x; ++i);


namespace cool
{
	// SUM OF NUMBERS.............................
	template <typename... T>
	auto sum(T... values)
	{
		return ((values) + ...);
	}

	// SUBSTRACT NUMBERS..........................
	template <typename... T>
	auto sub(T... values)
	{
		return ((values) - ...);
	}

	// MULTIPLY OF NUMBERS........................
	template <typename... T>
	auto mul(T... values)
	{
		return ((values) * ...);
	}

	// DIVIDE OF NUMBERS........................
	template <typename... T>
	auto div(T... values)
	{
		return ((values) / ...);
	}

	// MULTIPLY OF NUMBERS........................
	template <typename... T>
	auto avg(T... values)
	{
		return ((values) + ...) / sizeof...(values);
	}

	// SWAP TWO NUMBERS...........................
	template <class t1,class t2>
	float swap(t1 a, t2 b)
	{
		return a ^= b ^= a ^= b;
	}

	// ALL........................................
	template <typename... T>
	bool all(T... values)
	{
		return ((values) && ...);
	}


	// ANY........................................
	template <typename... T>
	auto any(T... values)
	{
		return ((values) || ...);
	}
	
	// IS PRIME...................................
	bool isPrime(int size)
	{
		bool arr[size];
		for(int i: arr)
		{
		    arr[i] = true;
		}
		arr[0] = false;
		arr[1] = false;
		for(int i=2; i*i<=size; i++)
		{
			for(int j = i*2; i<=size; j+=i)
			{
				arr[j] = false;
			}
		}
	}

	// IS EVEN...................................
	bool isEven(int n)
	{
	    // n^1 is n+1, then even, else odd
	    if (n ^ 1 == n + 1)
	        return true;
	    else
	        return false;
	}

	// GCD/HCF...................................
	int gcd(int a, int b)
	{
		// Both code work same 
		return b == 0 ? a : gcd(b , a%b);		
		// if (b == 0) return a; 	
		// return gcd(b, a%b);   
	}

	// INPUT OF ANYTHING.........................
	template<typename... T>
	void read(T&... args) {
		((cin >> args), ...);
	}

	// PRINT ANYTHING............................
	template <typename... T>
	void show(T... values)
	{
		((cout << values << " "), ...);
		cout << endl;
	}
}

// %w custom input
// showarr foreach loop



// MAIN FUNCTION
//___________________________________________


int main(int argc, char const *argv[])
{
	int a,b;
	char str[5] = "four";
	
	cool::read(a,b);
	cool::show(a,b,"ka",str);
	
	
	return 0;
}

/*
			
.^.^.^.^.^.^.^.^.^.^.^.^.^.^.^.^.^.^.^.^.^.^.
.^.^.^.^.^.^.^.^.^.^.^.^.^.^.^.^.^.^.^.^.^.^.

sample input -
1 2


*/