#include <stdio.h>
void stu_parent(){
	printf("1 Admission\n");
	printf("2 Admission Info\n");
	printf("3 Check Result\n");
	printf("4 Fee Management\n");
	printf("5 Meet the principal\n");
	printf("6 Teacher info\n");
	printf("7 complaint /help desk\n");
	printf("8 exit");
	return;
}

	
int main(){
	int a;
	printf("---------SCHOOL MANAGEMENT SYSTEM--------\nwhat kind of help do you want\n");  
	stu_parent();
	while(a!=8){
		printf("\nenter your choice");
		scanf("%d",&a);
		if(a==1){
			printf("------------------------------------------------------\n");
			printf("okh! you want take admission\n");            printf("------------------------------------------------------\n");
			printf("Document required\n 1Adhaar card no.\n 2 Previous class marksheet\n 3 Transfer certificate\n 4 passport size photo\n");
		}
		else if(a==2){
			printf(" ------------------------------------------------------\n");
			printf("okh! you want to know info related admission\n");
			printf("------------------------------------------------------\n");
			printf("what do you want\n 1 admission start date\n 2 admission close date\n 3 class begin\n 4 requied doct 5 admission fee\n");
		}
		else if(a==3){
			printf("------------------------------------------------------\n");
			printf("okh! you want to check result\n");
			printf("------------------------------------------------------\n");
			printf("1 admission number\n 2 Name\n 3 Class\n");
		}
		else if(a==4){
			printf("------------------------------------------------------\n");
			
			printf("1 Admission Number\n 2 Student Name\n 3 Class/section\n 4 Fee Receipt number\n 5 Payment method\n 6 Pending fee information\n");
		}
		else if(a==5){
			printf("------------------------------------------------------\n");
			printf("1 Student name\n 2 Class/section\n 3 Student ID/Admission Number\n 4 Parent/Guardian Name\n 5 Meeting Reason\n 6 Contact Number\n");
		}
		else if(a==6){
			printf("------------------------------------------------------\n");
			printf("1 Student name\n 2 Class/section\n 3 Subject/teacher ka naam\n 4 Student ID\n");
		}
		else if(a==7){
			printf("------------------------------------------------------\n");
			printf("1 Student name\n 2 Student ID/admission number\n 3 Class/section\n 4 Parent/guardian name\n 5 Contact number\n 6 Complaint/problem ka description\n 7 Related document/receipt\n");
		}
		else if(a==8){
			printf("------------------------------------------------------\n");
			printf("exit");
		}
		else{
			printf("---------------------------------------------------\n");
			printf("something wrong");
			printf("\n---------------------------------------------------");
		}
	}

	return 0;
}
