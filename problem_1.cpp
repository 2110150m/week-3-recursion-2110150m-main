#include <bits/stdc++.h>

using namespace std;

int SumOfDigits(int n) {
    int sum = 0;
    int digit;
    int temp = n;

    while (temp != 0) {
        digit = temp % 10;  
        sum += digit;      
        temp /= 10;        
    }

    return sum;
}

  

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin >> n;
    cout <<"The sum of digits is: "<< SumOfDigits(n);
    
}
