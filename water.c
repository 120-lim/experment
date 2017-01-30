#include<stdio.h>

int max(int x,int y){
   if(x>y){
      return x;
   }
   else{
      return y;
   }
}

int min(int x,int y){
   if(x>y){
      return y;
   }
   else{
      return x;
   }
}  

int main(){
   int number;
   int *a;
   printf("Enter the number of poles \n");
   scanf("%d",&number);
   printf("Enter the hight of poles \n");
   scanf("%d", a);
   int volume = 0;
   int i,j;
   for(i=0;i<number-1;++i){
      for(j=i+1;j<number;++j){
         volume = max((min(a[i],a[j])*(j-i)),volume);
      }
   }
   printf("maximam volume is %d \n",volume);
}
