// برنامه ايي بنویسید که یک عدد را گرفته مجموع ارقام آن را نمایش دهد
#include <iostream.h>
#include <conio.h>

void main(){
  int n, sum=0;
  cin >> n;
  while (n>0){
    sum = sum + n%10;
    n /= 10;
  }
  cout << "sum= " << sum;
  getch();
}
