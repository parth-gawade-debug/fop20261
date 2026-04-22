#include <stdio.h>
int main() {
    FILE *fptr; // declare a file pointer
    fptr=fopen("student.txt","w"); // open the file in write mode
    char name[100];
    int age;
    float cgpa;
    printf("Enter the name of the student: ");
    scanf("%s",name); // read the name of the student from the user
    printf("Enter the age of the student: ");
    scanf("%d",&age); // read the age of the student from the user
    printf("Enter the CGPA of the student: ");
    scanf("%f",&cgpa); // read the CGPA of the student from the user

    fprintf(fptr,"%s\t",name); // write the name of the student to the file
    fprintf(fptr,"%d\t",age); // write the age of the student to the file
    fprintf(fptr,"%f\n",cgpa); // write the CGPA of the student to the file
    fclose(fptr); // close the file
    return 0;
}