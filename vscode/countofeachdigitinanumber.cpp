#include<iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int count[10] = {0}; // Array to store count of each digit (0-9)

    if (num == 0) {
        count[0] = 1;  // Special case if the number is 0
    } else {
        if (num < 0) num = -num; // Handle negative numbers
        while (num > 0) {
            int digit = num % 10; 
            count[digit]++; 
            num /= 10; 
        }
    }

    for (int i = 0; i < 10; i++) {
        if (count[i] > 0)
            cout << "Digit " << i << " occurs " << count[i] << " times" << endl;
    }

    return 0;
}


