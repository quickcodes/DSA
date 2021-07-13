// #include<bits/stdc++.h>
// using namespace std;

// bool isPrime(int size)
// {
// 	bool arr[size];
	
// 	for(int i: arr)
// 	{
// 	    arr[i] = true;
// 	}
	
// 	arr[0] = false;
// 	arr[1] = false;

// 	for(int i=2; i*i<=size; i++)
// 	{
// 		for(int j = i*2; i<=size; j+=i)
// 		{
// 			arr[j] = false;
// 		}
// 	}
// }


// int main(int argc, char const *argv[])
// {
// 	bool arr[20] = isPrime(20);
// 	for(int i=1; i<=20; i++){
// 		cout << i << arr[i] << "\n";
// 	}
// 	return 0;
// }
////////////////////////////////////////////////////////////////////////////////////////////




#include<bits/stdc++.h>
using namespace std;
void isPrime(int size)
{
	bool arr[size+1];
	
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
	
	for(int i=1; i<=size; i++)
	{
	    cout << i << " " << arr[i] << endl;
	}
}
int main(int argc, char const *argv[])
{
// 	bool arr[20] = isPrime(20);
// 	for(int i=1; i<=20; i++){
// 		cout << i << arr[i] << "\n";
// 	}
    isPrime(20);
	return 0;
}
