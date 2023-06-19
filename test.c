#include <stdio.h>
int main(){ 
int n;
int arr[13];
printf("type of number:");
scanf("%d",&n);

for(int i = 1; i < 13;i++){
  arr[i] = n * i;
}
for(int i = 1;i < 13;i++){
  printf("%d x %d = %d\n",n,i,arr[i]);
}

}