//* * * * *
//* * * * *
//* * * * *
//* * * * *
//* * * * *

#include <stdio.h>
int main(){
	int n=5;
	int sum=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}



//*
//* *
//* * *
//* * * * 
//* * * * *

#include<stdio.h>
int main(){
	int k,l,m=5;
	for(k=1;k<=m;k++){
		for(l=1;l<=k;l++){
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}

//    *
//   **
//  ***
// ****
//*****

[Program finished]

#include <stdio.h>
int main(){
	int n=5;
	int sum=0;
	for(int i=1;i<=n;i++){
		for(int a=n-1;a>=i;a--){
			printf(" ");
		}
		for(int j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

		
