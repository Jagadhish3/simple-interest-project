#include <iostream>
using namespace std;

int main() {
    float principal, rate, time, simpleInterest;

    cout << "=== Simple Interest Calculator ===" << endl;

    // Input values
    cout << "Enter Principal Amount: ";
    cin >> principal;

    cout << "Enter Rate of Interest (in %): ";
    cin >> rate;

    cout << "Enter Time (in years): ";
    cin >> time;

    // Calculate Simple Interest
    simpleInterest = (principal * rate * time) / 100;

    // Output result
    cout << "\nSimple Interest = " << simpleInterest << endl;
    cout << "Total Amount (Principal + Interest) = " << principal + simpleInterest << endl;

    return 0;
}
