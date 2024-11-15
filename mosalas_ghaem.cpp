// برنامه ایی بنویسید که طول سه پاره خط را از ورودی گرفته و تشخیص دهد که آیا این سه پاره خط تشکیل مثلث قائم الزاویه میدهند یا خیر
#include    <iostream.h>
#include    <conio.h>
#include    <math.h>
int main( )
{
  float  a, b, c;
  cout << "Enter three real numbers" << endl ;
  cin >> a >> b >> c;
  if ((a*a+b*b == c*c) ||
      (a*a+c*c == b*b) ||
      (b*b+c*c == a*a))
    cout << "It is a triangle" ;
  else
    cout << "Not a triangle" ;
  getch();
  return 0 ;
}