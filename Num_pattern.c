//12345
//12345
//12345
//12345
//12345


#include<stdio.h>
int main(){
	int a=5;
	for(int i=1;i<=a;i++){
		for(int j=1;j<=a;j++){
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
//1
//12
//123
//1234
//12345

#include<stdio.h>
int main(){
	int a=5;
	for (int i=1;i<=a;i++){
		for(int j=1;j<=i;j++){
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}


//      1
//     21
//    321
//   4321

#include<stdio.h>
int main(){
	int a=4;
	
	for(int i=1;i<=a;i++){
		for (int j=a-1;j>=1;j--){
			printf(" ");
			
		}
		for(int o=i;o>=1;o--){
			printf("%d",o);
		}
		printf("\n");
	}
	return 0;
}
