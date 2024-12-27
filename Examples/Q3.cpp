 // برنامه ای بنویسید که زیر 10 عدد بین 0 و 32767 ایجاد میکند



#include <iostream>
#include <cstdlib> // برای rand() و srand()
#include <ctime>   // برای time()
using namespace std;

int main() {
    // مقداردهی اولیه به seed برای تولید اعداد تصادفی
    srand(static_cast<unsigned int>(time(0)));

    cout << "10 random numbers between 0 and 32767:" << endl;

    for (int i = 0; i < 10; ++i) {
        int randomNumber = rand() % 32768; // تولید عدد بین 0 تا 32767
        cout << randomNumber << endl;
    }

    return 0;
}
