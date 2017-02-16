#include<stdio.h>
#include<stdlib.h>

int main(int argc, char**  argv){
	if(argc<2){
		printf("Enter the number\n");
		exit(1);
	}
	int N = atoi(argv[1]);
	if (N<1){
		printf("Enter the number larger than 1\n");
		exit(1);
	}
	if (N>2147482000){
		printf("Enter the number less than 2147482000\n");
		exit(1);
	}
	int i=2;
	printf("(");
	while(i*i <= N){
		if(N%i == 0){
			N = N/i;
			printf("%d ",i);
		}else{
			i = i+1;
		}
	}
	printf("%d)\n",N);
}
