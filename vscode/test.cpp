#include<iostream>
using namespace std;
int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age<18) {
        cout << "Age is less than 18" << endl;
    } else if (age>=18) {
        cout << "Age is greater than 18." << endl;
    }
    return 0;
}