#include <stdio.h>

void stu_parent(){ 
    printf("1 Admission\n"); 
    printf("2 Admission Info\n"); 
    printf("3 Check Result\n"); 
    printf("4 Fee Management\n"); 
    printf("5 Meet the principal\n"); 
    printf("6 Teacher info\n"); 
    printf("7 complaint /help desk\n"); 
    printf("8 exit\n"); 
}

void adm(){ 
    printf("------------------------------------------------------\n"); 
    printf("okh! you want take admission\n"); 
    printf("------------------------------------------------------\n"); 
    printf("Document required\n1 Adhaar card no.\n2 Previous class marksheet\n3 Transfer certificate\n4 passport size photo\n"); 
    
    int adhar_no; 
    float marks; 
    printf("enter adhaar no.: "); 
    scanf("%d", &adhar_no); 
    printf("enter previous class marks: "); 
    scanf("%f", &marks); 
    printf("give transfer certificate\n"); 
    printf("student passport size photo\n"); 
}

void adm_info(){ 
    char stdate[] = "23.03.2026"; 
    char adm_close_date[] = "12.04.2026"; 
    char class_st[] = "20.04.2026"; 
    float adm_fee = 20000; 
    int option = 0; 
    
    while(option != 5){
        printf("\n------------------------------------------------------\n"); 
        printf("okh! you want to know info related admission\n"); 
        printf("------------------------------------------------------\n"); 
        printf("what do you want to know\n"); 
        printf("1 adm start date\n"); 
        printf("2 adm close date\n"); 
        printf("3 class start date\n"); 
        printf("4 adm fee\n"); 
        printf("5 back\n");
        printf("enter choice: ");
        scanf("%d", &option);
        
        if(option == 1){ 
            printf("admission starting date is %s\n", stdate); 
        } 
        else if(option == 2){ 
            printf("admission close date is %s\n", adm_close_date); 
        } 
        else if(option == 3){ 
            printf("class begin from %s\n", class_st); 
        } 
        else if(option == 4){ 
            printf("admission fee is %.2f\n", adm_fee); 
        } 
        else if(option == 5){ 
            printf("thankyou\n"); 
        }
        else{
            printf("wrong choice\n");
        }
    }
}

void check_result(){
    int adm_no;
    char name[50];
    int class_name;
    
    printf("------------------------------------------------------\n"); 
    printf("okh! you want to check result\n"); 
    printf("------------------------------------------------------\n"); 
    
    printf("enter admission number: ");
    scanf("%d", &adm_no);
    printf("enter Name: ");
    scanf("%s", name);
    printf("enter Class: ");
    scanf("%d", &class_name);
    
    printf("\nResult processing... details received successfully!\n");
}

void fee_management(){
    int adm_no;
    char name[50];
    int class_name;
    int receipt_no;
    char pay_method[20];
    
    printf("------------------------------------------------------\n"); 
    printf("okh! you want to manage fee\n");
    printf("------------------------------------------------------\n"); 
    
    printf("enter Admission Number: ");
    scanf("%d", &adm_no);
    printf("enter Student Name: ");
    scanf("%s", name);
    printf("enter Class/section: ");
    scanf("%d", &class_name);
    printf("enter Fee Receipt number: ");
    scanf("%d", &receipt_no);
    printf("enter Payment method (online/cash): ");
    scanf("%s", pay_method);
    
    printf("\nChecking Pending fee information... records updated!\n");
}

void meet_principal(){
    char name[50];
    int class_name;
    int adm_no;
    char parent_name[50];
    char reason[100];
    char contact[15];
    
    printf("------------------------------------------------------\n"); 
    printf("okh! you want to book meeting with principal\n");
    printf("------------------------------------------------------\n"); 
    
    printf("enter Student name: ");
    scanf("%s", name);
    printf("enter Class/section: ");
    scanf("%d", &class_name);
    printf("enter Student ID/Admission Number: ");
    scanf("%d", &adm_no);
    printf("enter Parent/Guardian Name: ");
    scanf("%s", parent_name);
    printf("enter Meeting Reason: ");
    scanf("%s", reason);
    printf("enter Contact Number: ");
    scanf("%s", contact);
    
    printf("\nMeeting request submitted successfully!\n");
}

void teacher_info(){
    char name[50];
    int class_name;
    char teacher_name[50];
    int student_id;
    
    printf("------------------------------------------------------\n"); 
    printf("okh! you want teacher info\n");
    printf("------------------------------------------------------\n"); 
    
    printf("enter Student name: ");
    scanf("%s", name);
    printf("enter Class/section: ");
    scanf("%d", &class_name);
    printf("enter Subject/teacher ka naam: ");
    scanf("%s", teacher_name);
    printf("enter Student ID: ");
    scanf("%d", &student_id);
    
    printf("\nSearching teacher records...\n");
}

void complaint_desk(){
    char name[50];
    int adm_no;
    int class_name;
    char parent_name[50];
    char contact[15];
    char desc[100];
    
    printf("------------------------------------------------------\n"); 
    printf("okh! you want to register complaint\n");
    printf("------------------------------------------------------\n"); 
    
    printf("enter Student name: ");
    scanf("%s", name);
    printf("enter Student ID/admission number: ");
    scanf("%d", &adm_no);
    printf("enter Class/section: ");
    scanf("%d", &class_name);
    printf("enter Parent/guardian name: ");
    scanf("%s", parent_name);
    printf("enter Contact number: ");
    scanf("%s", contact);
    printf("enter Complaint/problem ka description: ");
    scanf("%s", desc);
    
    printf("\nComplaint filed. Please submit related document/receipt at desk.\n");
}

int main(){ 
    int a = 0; 
    printf("---------SCHOOL MANAGEMENT SYSTEM--------\nwhat kind of help do you want\n"); 
    
    while(a != 8){ 
        printf("\n");
        stu_parent(); 
        printf("\nenter your choice: "); 
        scanf("%d", &a); 
        
        if(a == 1){ 
            adm(); 
        } 
        else if(a == 2){ 
            adm_info(); 
        } 
        else if(a == 3){ 
            check_result();
        } 
        else if(a == 4){ 
            fee_management();
        } 
        else if(a == 5){ 
            meet_principal();
        } 
        else if(a == 6){ 
            teacher_info();
        } 
        else if(a == 7){ 
            complaint_desk();
        } 
        else if(a == 8){ 
            printf("------------------------------------------------------\n"); 
            printf("exit\n"); 
        } 
        else{ 
            printf("---------------------------------------------------\n"); 
            printf("something wrong"); 
            printf("\n---------------------------------------------------\n"); 
        } 
    } 
    return 0; 
}
