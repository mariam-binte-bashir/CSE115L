#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// strcuture to store student details
// name, department, roll number
struct stud_struct
{
   char name[30];
   char dept[30];
   int roll;
};

// function to print details of student department wise
void showDeptWise(char *deptName[], struct stud_struct allStudents[], int size)
{
   // counter variable
   int ctr;

   // printing student details of the entered department
   printf("\nStudent details of Department: %s \n", *deptName);
   for(ctr = 0; ctr < size; ctr++)
   {
       // comparing the departments
       if(strcmp(allStudents[ctr].dept,*deptName)==0)
       {
           printf("%s, %s, %d",allStudents[ctr].name,allStudents[ctr].dept,allStudents[ctr].roll);
       printf("\n");

       }

   }

}
