// برنامه ای بنویسید که از کاربر یک عدد 0 تا 6 بگیرد و متناظر آن را نمایش دهد اگر عدد وارد شده خارج از بازه باشد پیام خطا نمایش داده شود




#include <iostream>
using namespace std;

enum Days {
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

int main() {
    int input;
    cout << "Enter a number (0-6) to get the corresponding day of the week: ";
    cin >> input;

    if (input < 0 || input > 6) {
        cout << "Error: Invalid number. Please enter a number between 0 and 6." << endl;
    } else {
        Days day = static_cast<Days>(input); // تبدیل عدد به نوع enum
        switch (day) {
            case Sunday:    cout << "The day is Sunday." << endl; break;
            case Monday:    cout << "The day is Monday." << endl; break;
            case Tuesday:   cout << "The day is Tuesday." << endl; break;
            case Wednesday: cout << "The day is Wednesday." << endl; break;
            case Thursday:  cout << "The day is Thursday." << endl; break;
            case Friday:    cout << "The day is Friday." << endl; break;
            case Saturday:  cout << "The day is Saturday." << endl; break;
        }
    }

    return 0;
}
