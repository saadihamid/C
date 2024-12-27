 // دو عدد اعشاری از کاربر گرفته  و مجموع و حاصل ضرب آنها را محاسبه و نمایش دهید






#include <iostream>
using namespace std;

int main() {
    float num1, num2, product;

    // گرفتن دو عدد اعشاری از کاربر
    cout << "Enter the first decimal number: ";
    cin >> num1;

    cout << "Enter the second decimal number: ";
    cin >> num2;

    // محاسبه حاصل ضرب
    product = num1 * num2;

    // نمایش حاصل ضرب
    cout << "The product of " << num1 << " and " << num2 << " is: " << product << endl;

    return 0;
}
