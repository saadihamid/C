// برنامه ایی بنویسید که یه ماتریس چهار ردر چهار را از ورودی گرفته و تشخیص دهد ماتریس پایین مثلثی است یا خیر
#include <iostream.h>
#include <conio.h>
void main(){
  float a[4][4];

  for (int i=0;i<4;i++)
    for (int j=0;j<4;j++)
       cin >> a[i][j];

  for (int i=0;i<4;i++)
    for (int j=i+1;j<4;j++)
      if (a[i][j] != 0){
        cout << "Pain Mosalasi Nist";
        getch();
        return;
      }

  cout << "Pain Mosalasi Ast";
  getch();
}
