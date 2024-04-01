#include <stdio.h>
typedef struct{
    int roll;
    char f_name[15], l_name[15], address[20], mobile[20];
} student;
int main(){
    int N;
    printf("Enter how many students? ");
    scanf("%d", &N);
    student stu[N];
    for (int i = 0; i < N; i++){
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &stu[i].roll);
        printf("First Name: ");
        scanf("%s", stu[i].f_name);
        printf("Last Name: ");
        scanf("%s", stu[i].l_name);
        printf("Address: ");
        scanf("%s", stu[i].address);
        printf("Mobile Number: ");
        scanf("%s", stu[i].mobile);
    }
    printf("\nStudent Details:\n");
    printf("------------------------------------------------------------------------------------------------\n");
    printf("| %-5s | %-15s | %-15s | %-25s | %-20s |\n", "Roll", "First Name", "Last Name", "Address", "Mobile");
    printf("------------------------------------------------------------------------------------------------\n");
    for (int i = 0; i < N; i++){
        printf("| %-5d | %-15s | %-15s | %-25s | %-20s |\n", stu[i].roll, stu[i].f_name, stu[i].l_name, stu[i].address, stu[i].mobile);
    }
    printf("------------------------------------------------------------------------------------------------\n");
    return 0;
}
