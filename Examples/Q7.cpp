 // برنامه ای بنویسید که اعداد صحیح متوالی بین 1 تا ان را محاصبه نموده و نمایش دهد 






#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter a positive integer n: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1; // پایان برنامه در صورت ورودی نامعتبر
    }

    // محاسبه مجموع اعداد از 1 تا n
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    cout << "The sum of integers from 1 to " << n << " is: " << sum << endl;

    return 0;
}
