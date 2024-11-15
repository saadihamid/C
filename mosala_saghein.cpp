// برنامه ایی بنویسید که طول سه پاره خط را از ورودی گرفته و تشخیص دهد که آیا این سه پاره خط تشکیل مثلث متساوی الساقین مدیدهند یا خیر
#include    <iostream.h>
#include    <conio.h>
#include    <math.h>
int main( )
{
  float  a, b, c;
  cout << "Enter three real numbers" << endl ;
  cin >> a >> b >> c;
  if ((a+b>c) && (b+c>a) && (a+c>b))       
     if ((a==b)||(b==c)||(a==c))
        cout << "It is a triangle" ;
     else
        cout << "Not a triangle" ;
  getch();
  return 0 ;
}