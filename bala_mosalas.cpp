// برنامه ايي بنويسيد که یک ماتریس 4 در 4 را گرفته و تشخیص دهد ماتریس بالا مثلثی است یا خیر
#include <iostream.h>
#include <conio.h>
void main(){
  float a[4][4];

  for (int i=0;i<4;i++)
    for (int j=0;j<4;j++)
       cin >> a[i][j];

  for (int i=0;i<4;i++)
    for (int j=0;j<i;j++)
      if (a[i][j] != 0){
        cout << "Bala Mosalasi Nist";
        getch();
        return;
      }

  cout << "Bala Mosalasi Ast";
  getch();
}
