#include<stdio.h>
struct date{
    int dd;
    int mm;
    int yy;
};
struct student{
    int roll;
    struct date dob;
    struct date age;
};
void get_age(struct student *s){
    s->age.dd = 31 - s->dob.dd;
    s->age.mm = 12 - s->dob.mm;
    s->age.yy = 2023 - s->dob.yy;
};
int main(){
    struct student s;
    s.roll = 22051659;
    s.dob.dd = 23;
    s.dob.mm = 3;
    s.dob.yy = 2000;
    get_age(&s);
    printf("the age of student is %d/ %d/ %d",s.age.dd,s.age.mm,s.age.yy); 
}