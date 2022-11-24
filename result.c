#include<stdio.h>
#include<conio.h>
void main(){

float eng;
float sub2;
float sub3;
float sub4;
float sub5;
float Totalmarks;

printf("enter the marks of five subjects");
scanf("%f%f%f%f%f",&eng,&sub2,&sub3,&sub4,&sub5);
Totalmarks=eng+sub2+sub3+sub4+sub5;

float Percentage=(Totalmarks/500)*100;
 printf(" total marks=%f\n",Totalmarks);
 printf("Percentage scored=%f",Percentage);


if(eng>=35 && sub2>=35 && sub3>=35 && sub3>=35 && sub4>=35 && sub5>=35)
     {
          printf("\nResult=You are Passed");
          
     }
else
          printf("\nResult=You are failed");

if(Percentage>=75 )
  {
    printf("\nGrade=A");
  }
if(Percentage>=55 && Percentage<75)
{
    printf("\nGrade=B");
}
if(Percentage>=35 && Percentage<55)
{
    printf("\nGrade=C");
}
if(Percentage<35)
{
    printf("\nFail");
}

}
