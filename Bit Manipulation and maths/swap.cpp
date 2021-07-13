#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    //cout <<"Enter the value of a and b: ";
    cin >> a;
    cin >> b;
    a = a^b;
    b = b^a;
    a = a^b;
    //cout << "Value of a is: " << a << "\n";
    //cout << "Value of b is: " << b << "\n";
    cout << a << " " << b;
    return 0;
}

