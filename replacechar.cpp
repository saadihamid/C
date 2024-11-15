// برنامه ایی بنویسید که دو کاراکتر و یک سطر متن را از ورودی گرفته سپس در متن تمام کاراکترهای معادل کاراکتر اول را با کاراکتر دوم جایگزین کند
#include <iostream.h>
#include <conio.h>
int main( )
{
  char  x,ch1,ch2;
  ch1 = cin.get();
  ch2 = cin.get();
  while((x = cin.get( )) !=EOF)
    if (x == ch1)
      cout << ch2 ;
    else
	  cout << x;	
  getch();
  return 0 ;
}
