// برنامه ایی بنویسید که ده عدد را گرفته آنها را به روش حبابی مرتب کرده و نمایش دهد
#include  <iostream.h>
#include  <conio.h>
int main ( )
{
float  x[10] , temp;
int   i,j ;
for(i=0; i<10; ++i) cin >> x[i ];
clrscr(  );
for(i=0; i<9; i++)
    for(j=i+1 ; j<10; j++)
        if(x[ j ] < x[i ]){
            temp = x[ j ] ;
            x[ j ] = x[ i ];
            x[ i ] = temp ;
         }
for(i=0; i<=9; i++)
     cout << x[ i ] << endl;
getch();
return 0 ;
}
