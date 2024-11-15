// برنامه ایی بنویسید که سه ضریب یک معادله درجه دو را از ورودی گرفته و جوابهای معادله را نمایش دهد اگر معادله جواب حقیقی نداشت به کاربر اطلاع دهد
#include    <iostream.h>
#include    <conio.h>
#include    <math.h>
int main( )
{
  float  a, b, c, delta;
  cout << "Enter three real numbers" << endl ;
  cin >> a >> b >> c;
  delta = b*b - 4*a*c;
  if (delta >= 0){
      cout << "X1= " << (-b + sqrt(delta)) / (2*a) ;
      cout << "X2= " << (-b - sqrt(delta)) / (2*a) ;
  }else
      cout << "Javabe Haghighi Nadarad" ;
  getch();
  return 0 ;
}
