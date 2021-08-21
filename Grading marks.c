#include<stdio.h>
#include<conio.h>
int main()
{
int marks;
printf("Enter the marks of students:\n");
scanf("%d",&marks);
if(marks>=85 and marks<=100){
printf("Grade A",marks);}
else if(marks>=70 and marks<=84){
printf("Grade B",marks);}
else if(marks>=55 and marks<=69){
printf("Grade C",marks);}
else if(marks>=40 and marks<=54){
printf("Grade D",marks);}
else
printf("Grade F",marks);
return 0;
}
