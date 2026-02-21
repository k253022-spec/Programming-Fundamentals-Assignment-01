#include<stdio.h>

int main(){


    float power1, hours1, energy1;
    int id1, active1;

    
    float power2, hours2, energy2;
    int id2, active2;

    
    float power3, hours3, energy3;
    int id3, active3;


    printf("Enter Appliance 1 ID:");
    scanf("%d", &id1);
    printf("Power rating (kW):");
    scanf("%f", &power1);
    printf("Usage hours:");
    scanf("%f", &hours1);
    printf("Is Active (1/0):");
    scanf("%d", &active1);

    printf("\nEnter Appliance 2 ID:");
    scanf("%d", &id2);
    printf("Power rating (kW):");
    scanf("%f", &power2);
    printf("Usage hours:");
    scanf("%f", &hours2);
    printf("Is Active (1/0):");
    scanf("%d", &active2);

    printf("Enter Appliance 3 ID:");
    scanf("%d", &id3);
    printf("Power rating (kW):");
    scanf("%f", &power3);
    printf("Usage hours:");
    scanf("%f", &hours3);
    printf("Is Active (1/0):");
    scanf("%d", &active3);


    if(active1==1)
        energy1 = power1 * hours1;
    else
        energy1 = 0;

    if(active2==1)
        energy2 = power2 * hours2;
    else
        energy2 = 0;

    if(active3==1)
        energy3 = power3 * hours3;
    else
        energy3 = 0;

    float total = energy1 + energy2 + energy3;

    printf("Total Energy Consumption %f kWh\n", total);

    
    float cost;

    if(total <= 10)
        cost = total * 0.15;
    else if(total <= 30)
        cost = (10 * 0.15) + ((total - 10) * 0.20);
    else
        cost = (10 * 0.15) + (20 * 0.20) + ((total - 30) * 0.25);

    printf("Total Cost:$% f\n", cost);

    if(energy1 > 5)
        printf("Appliance 1 exceeds 5 kWh\n");
    if(energy2 > 5)
        printf("Appliance 2 exceeds 5 kWh\n");
    if(energy3 > 5)
        printf("Appliance 3 exceeds 5 kWh\n");

    
    float reduced = total * 0.80;
    printf("If high usage appliances reduced by 20%, new usage:%f kWh\n", reduced);

    return 0;
}
