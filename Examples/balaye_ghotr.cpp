// برنامه ایی بنویسید که یک ماتریس چهار در چهار را از ورودی گرفته و میانگین عناصر بالای قطر اصلی را نمایش دهد
#include <iostream.h>
#include <conio.h>
void main(){
  float a[4][4],sum=0;

  for (int i=0;i<4;i++)
    for (int j=0;j<4;j++)
       cin >> a[i][j];

  for (int i=0;i<4;i++)
    for (int j=i+1;j<4;j++)
       sum += a[i][j];

  cout << "Average=" << sum/6;
  getch();
}
