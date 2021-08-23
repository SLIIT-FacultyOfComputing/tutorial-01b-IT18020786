#include <stdio.h>
int minimum(int a,int b);
int maximum(int a,int b);
int multiply(int a,int b);

int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}
int minimum(int a,int b)
{
  if(a>b){
    return b;
  }
  else{
    return a;
  }
}
int maximum(int a,int b)
{
  if(a>b){
    return a;
  }
  else{
    return b;
  }
}
int multiply(int a,int b)
{
  int ans;
  ans=a*b;
  return ans;
}
