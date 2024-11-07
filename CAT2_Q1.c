 #include <stdio.h>
#include <string.h>
struct employee{
char name[25], department[20], email[50];
int id;
float salary;
};
int main(){
struct employee empl;
strcpy(empl.name, "john Doe");
empl.salary=55000.5;
empl.id=12345;
strcpy(empl.department,"human resources");
strcpy(empl.email, "john.doe@company.com");
printf("name:%s\nID:%d\ndepartment:%s\nsalary:%.2f\nemail:%s", empl.name,empl.id,empl.department,empl.salary,empl.email);
return 0;
}