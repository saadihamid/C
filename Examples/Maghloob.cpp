// برنامه ایی بنویسید که یک عدد را گرفته مقلوب آن را نمایش دهد
#include <iostream.h>
#include <conio.h>

void main(){
  int n, sum=0;
  cin >> n;
  while (n>0){
    sum = sum*10 + n%10;
    n /= 10;
  }
  cout << "sum= " << sum;
  getch();
}
