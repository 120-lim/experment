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
	int j=0;
	printf("%d = ",N);
	while(i*i <= N){
		if(N%i == 0){
			N = N/i;
			j += 1;
			if(N == i){
				printf("%d^%d\n",i,j+1);
				exit(1);
			}
			if(N < i*i){
				if(j > 1){
					printf("%d^%d * ",i,j);
				}
				if(j == 1){
					printf("%d * ",i);
				}
			}
		}else{
			if(j > 1){
				printf("%d^%d * ",i,j);
			}
			if(j == 1){
				printf("%d * ",i);
			}
			i = i + 1;
			j = 0;
		}
	}
	printf("%d\n",N);
}
