#include<stdio.h>

int main(){

    int d1, d2, d3, d4, d5;
    float t1, t2, t3, t4, t5;
    float h1, h2, h3, h4, h5;
    float r1, r2, r3, r4, r5;

    printf("Enter Day1 date temp humidity rainfall:\n");
    scanf("%d %f %f %f", &d1, &t1, &h1, &r1);

    printf("Enter Day2 date temp humidity rainfall:\n");
    scanf("%d %f %f %f", &d2, &t2, &h2, &r2);

    printf("Enter Day3 date temp humidity rainfall:\n");
    scanf("%d %f %f %f", &d3, &t3, &h3, &r3);

    printf("Enter Day4 date temp humidity rainfall:\n");
    scanf("%d %f %f %f", &d4, &t4, &h4, &r4);

    printf("Enter Day5 date temp humidity rainfall:\n");
    scanf("%d %f %f %f", &d5, &t5, &h5, &r5);

    if(t1<-50 || t1>50 || h1<0 || h1>100 || r1<0)
	printf("Day1 invalid\n");
    if(t2<-50 || t2>50 || h2<0 || h2>100 || r2<0)
	printf("Day2 invalid\n");
    if(t3<-50 || t3>50 || h3<0 || h3>100 || r3<0)
	printf("Day3 invalid\n");
    if(t4<-50 || t4>50 || h4<0 || h4>100 || r4<0)
	printf("Day4 invalid\n");
    if(t5<-50 || t5>50 || h5<0 || h5>100 || r5<0) 
	printf("Day5 invalid\n");

    float avgTemp = (t1+t2+t3+t4+t5)/5;
    float avgHum = (h1+h2+h3+h4+h5)/5;

    printf("Average Temperature = %f\n", avgTemp);
    printf("Average Humidity = %f\n", avgHum);

    float max = t1;
    if(t2>max) max=t2;
    if(t3>max) max=t3;
    if(t4>max) max=t4;
    if(t5>max) max=t5;

    printf("Highest Temperature = %f\n", max);

    float totalRain = r1+r2+r3+r4+r5;
    printf("Total Rainfall = %f\n", totalRain);

    float predict = (t3+t4+t5)/3;
    printf("Predicted Next Day Temp = %f\n", predict);

    if(totalRain > 50)
        printf("Season:Rainy\n");
    else
        printf("Season:Dry\n");

    return 0;
}
