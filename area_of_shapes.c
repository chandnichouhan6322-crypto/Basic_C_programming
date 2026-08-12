#include<stdio.h>
int area_square(int side){
	return side*side;
}
float area_circle(float radii){
	return 3.14*radii*radii;
}
int area_rectangle(int a,int b){
	return a*b;
}

int main(){
	int side=4;
	float radii;
	printf("enter a radii");
	scanf("%f",&radii);
	printf("\n");
	int a,b;
	printf("enter a ,b");
	scanf("%d %d",&a,&b);
	printf("area of square :%d\n",area_square(side));
	
	printf("area of circle:%f\n",area_circle(radii));
	printf("area of rectangle:%d",area_rectangle(a,b));
	return 0;
}