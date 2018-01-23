#include<stdio.h>
 
int main(void) {
  int i,n,a;
  int min=1000000,max=-min;
  unsigned long long sum=0;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&a);
    if(min>a)  min=a;
    if(max<a)  max=a;
    sum+=a;
  }
  printf("%d %d %ld\n",min,max,sum);
  return(0);
}