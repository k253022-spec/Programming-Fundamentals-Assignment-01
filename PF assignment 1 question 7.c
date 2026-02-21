#include<stdio.h>

int main(){

    float s1,s2,s3,s4,s5,s6;

    printf("Enter marks of 6 subjects:\n");
    scanf("%f %f %f %f %f %f",&s1,&s2,&s3,&s4,&s5,&s6);

    float total = s1+s2+s3+s4+s5+s6;
    float avg = total/6;

    float gpa;

    if(avg>=85) gpa=4.0;
    else if(avg>=75) gpa=3.5;
    else if(avg>=65) gpa=3.0;
    else if(avg>=55) gpa=2.5;
    else if(avg>=50) gpa=2.0;
    else gpa=0;

    printf("GPA = %f\n",gpa);

    if(gpa>=3.5)
        printf("Honor Student\n");

    if(gpa<2.0)
        printf("At Risk Student\n");

    float mid = avg*0.60;
    float assign = avg*0.30;
    float part = avg*0.10;

    float final = mid+assign+part;

    printf("Final Marks = %f\n",final);

    if(final>=89.5 && final<90)
        final=90;

    if(final>=90)
        printf("Grade A\n");
    else if(final>=80)
        printf("Grade B\n");
    else if(final>=70)
        printf("Grade C\n");
    else if(final>=60)
        printf("Grade D\n");
    else
        printf("Grade F\n");

    return 0;
}
