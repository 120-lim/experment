#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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
/*take data from command line*/
   int number;
   char a[20000];
   char *tp;
   printf("Enter the number of poles: ");
   fgets(a, sizeof(a), stdin);/*scanfの後にfgetsが入るのは好ましくない*/
   number = atoi(a);
   int b[number];
   int num;
   printf("Enter the hight of poles: ");
   fgets(a,sizeof(a),stdin);
   tp = strtok(a," ");
   num = 1;
   b[0] = atoi(tp);
   while(tp != NULL){
      tp = strtok(NULL," ");
      if(tp != NULL){
         b[num] = atoi(tp);
         num += 1;
      }
   }

   if(num != number){
      printf("error:number of poles and the number you entered is not same \n");
      exit(1);
   }

/*main calculation*/
   int volume = 0;
   int i,j;
   for(i=0;i<number-1;++i){
      for(j=i+1;j<number;++j){
         volume = max((min(b[i],b[j])*(j-i)),volume);
      }
   }
   printf("maximam volume is %d \n",volume);
}
