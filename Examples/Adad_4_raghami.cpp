// برنامه ایی بنویسید که تمام اعداد چهار رقمی که ارقام آنها بین 5 تا 9 است را نمایش دهد
#include    <iostream.h>
#include    <conio.h>
int main( )
{
  int  i,j,k,m,n;
  for(i=5; i<=9; ++i)
    for(j=5; j<=9; ++j)
      for(k=5; k<=9; ++k)
        for(m=5; m<=9; ++m)
        {
          n=i*1000 + j*100+k*10+m;
          cout << n << '\n' ;
        }
  getch();
  return 0 ;
}
