// Divisibility Problem 1328A CF.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    long long int t, a, b;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> a >> b;
        if (a % b == 0 ) {
            cout << 0 << endl;
            continue;
        }
        
        cout << (b * ((a / b) + 1)) - a<<endl;
    }
    
}

