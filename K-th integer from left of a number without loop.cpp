// K-th integer from left of a number without loop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include<math.h>

int main()
{
    int numb, k_pos, k_digit;
    cout << "Enter number:  "; cin >> numb;//input of number
    cout << "\nEnter position of digit from left:  "; cin >> k_pos;//input of position
    int digit = (int)(log(numb) / log(10)); digit++;//number of digits
    k_digit = (numb / (int)pow(10, digit - k_pos)) % 10;
    cout <<"\n"<< k_pos << " digit from left of number " << numb << " is: " << k_digit;
}

