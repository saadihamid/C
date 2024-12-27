سؤال نمونه در مورد عملگرها (Operators)
1-  کدی بنویسید که دو عدد را از ورودی بگیرد و عملیات زیر را روی آن‌ها انجام دهد

(مجموع)
(تفریق)
(ضرب)
(تقسیم)
(باقی‌مانده تقسیم) 


پاسخ : 


#include <iostream>
using namespace std;

int main() {
    int a, b;

    // گرفتن ورودی از کاربر
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // انجام عملیات مختلف
    cout << "Sum = " << a + b << endl;         // مجموع
    cout << "Difference = " << a - b << endl;  // تفریق
    cout << "Product = " << a * b << endl;     // ضرب
    cout << "Quotient = " << a / b << endl;    // تقسیم
    cout << "Remainder = " << a % b << endl;   // باقی‌مانده تقسیم

    return 0;
}

-----------------------------------------