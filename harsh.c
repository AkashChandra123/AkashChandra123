#include<stdio.h>
struct date{
    int dd;
    int mm;
    int yy;
};
struct data{
    char employee_name[20];
    float salary;
    char type;
    struct date dob;
    char id_type;
    union identity{
        long int adhar;
        char dl[10];
    }id;
}s;
int main(){
    printf("Enter employee name : ");
    scanf("%s",s.employee_name);
    printf("Enter salary:");
    scanf("%f",&s.salary);
    printf("Enter type:");
    scanf("%c", &s.type);
    printf("enter dob");
    scanf("%d",&s.dob.dd,&s.dob.mm,&s.dob.yy);
    printf("Enter ID type:");
    scanf("%c",s.id_type);
    if(s.id_type==0){
        printf("enter adhar:");
        scanf("%ld",&s.id.adhar);
    }else{
        printf("enter dl:");
        scanf("%s"s.id.dl);
        }
        