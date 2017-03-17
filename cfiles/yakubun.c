#include<stdio.h>
#include<stdlib.h>

int main(int argc, char**  argv){
	if(argc<3){
		printf("Enter numerater denominater\n");
		exit(1);
	}
	int N = atoi(argv[1]);
	if (N<2){
		printf("Enter the number larger than 1\n");
		exit(1);
	}
	int M = atoi(argv[2]);
	if (M<2){
		printf("Enter the number larger than 1\n");
		exit(1);
	}
	int i=2;
	int j=1;
	printf("%d/%d = ",N,M);
	while(i*i <= N){
			if(N%i == 0){
				if(M%i == 0){	
					N = N/i;
					M = M/i;
					j *= i;
				}else{
					i += 1;
				}
			}else{
				i += 1;
			}
		}
	printf("%d/%d devided by %d \n",N,M,j);
}
