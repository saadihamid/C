// برنامه اانگلیسییی بنویسید که نعدل را از ورودی گرفته و آن را به صورت ای یا بی یا سی یا دی انگلیسی نمایش دهد
#include <iostream.h> 
#include <conio.h>
void main(){
  float avg;
  cout << "Please Enter the Average: ";
  cin >> avg;
  if ((avg>=0) && (avg<12))
     cout << "D";
  else if ((avg>=12) && (avg<14))
     cout << "C";
  else if ((avg>=14) && (avg<17))
     cout << "B";
  else if ((avg>=17) && (avg<=20))
     cout << "A";
  else
     cout << "Error";
  getch();
}
