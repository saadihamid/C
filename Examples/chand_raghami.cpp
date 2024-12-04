// برنامه ایی بتویسید که یک عدد صحیح را گرفته و مشخص کند عدد چند رقمی است
#include <iostream.h>
#include <conio.h>

void main(){
  unsigned int x;
  cout << "Please Enter a Positive Number: ";
  cin >> x;
  if (x<10)
    cout << "Adad 1 raghami ast" << endl;
  else if (x<100)
    cout << "Adad 2 raghami ast" << endl;
  else if (x<1000)
    cout << "Adad 3 raghami ast" << endl;
  else if (x<10000)
    cout << "Adad 4 raghami ast" << endl;
  else if (x<100000)
    cout << "Adad 5 raghami ast" << endl;
  getch();
}
