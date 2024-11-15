// برنامه ایی بنویسید که اندازه سه زاویه را از ورودی گرفته و تشخیص دهد که آیا این سه زاویه تشکیل مثلث میدهند یا خیر
#include    <iostream.h>
#include    <conio.h>
#include    <math.h>
int main( )
{
  float  a, b, c;
  cout << "Enter three real numbers" << endl ;
  cin >> a >> b >> c; //
  if (a+b+c == 180)
      cout << "It is a triangle" ;
  else
      cout << "Not a triangle" ;
  getch();
  return 0 ;
}
