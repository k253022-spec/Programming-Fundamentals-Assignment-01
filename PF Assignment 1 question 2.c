#include<stdio.h>

int main(){

    
    int id1, age1, triage1, time1;
    char name1;


    int id2, age2, triage2, time2;
    char name2;

    printf("Enter Patient 1 ID");
    scanf("%d", &id1);

    printf("Enter Patient 1 Name (single letter)");
    scanf(" %c", &name1);

    printf("Enter Patient 1 Age");
    scanf("%d", &age1);

    printf("Enter Patient 1 Triage Level (1-5)");
    scanf("%d", &triage1);

    printf("Enter Patient 1 Arrival Time");
    scanf("%d", &time1);


    printf("\nEnter Patient 2 ID");
    scanf("%d", &id2);

    printf("Enter Patient 2 Name (single letter)");
    scanf(" %c", &name2);

    printf("Enter Patient 2 Age");
    scanf("%d", &age2);

    printf("Enter Patient 2 Triage Level (1-5)");
    scanf("%d", &triage2);

    printf("Enter Patient 2 Arrival Time");
    scanf("%d", &time2);


    printf("\n--- Next Patient For Treatment\n");

    
    if(triage1 < triage2)
	{
        printf("Next Patient: %c (ID %d)\n", name1, id1);
    }
    else if(triage2 < triage1)
	{
        printf("Next Patient: %c (ID %d)\n", name2, id2);
    }
    else{

        if(time1 < time2){
            printf("Next Patient %c (ID %d)\n", name1, id1);
        }
        else if(time2 < time1){
            printf("Next Patient %c (ID %d)\n", name2, id2);
        }
        else{
        	
            if((age1 < 12 || age1 > 65) && !(age2 < 12 || age2 > 65)){
                printf("Next Patient %c (ID %d)\n", name1, id1);
            }
            else if((age2 < 12 || age2 > 65) && !(age1 < 12 || age1 > 65))
			{
                printf("Next Patient %c (ID %d)\n", name2, id2);
            }
            else {
                printf("Both patients have equal priority\n");
            }
        }
    }


    printf("\n Priority Statistics \n");

    if(triage1 <= 3)
        printf("Patient 1 is High Priority\n");
    else
        printf("Patient 1 is Low Priority\n");

    if(triage2 <= 3)
        printf("Patient 2 is High Priority\n");
    else
        printf("Patient 2 is Low Priority\n");


    printf("\n Removing Treated Patient \n");

    if(triage1 < triage2)
        printf("Patient %c removed from system\n", name1);
    else if(triage2 < triage1)
        printf("Patient %c removed from system\n", name2);
    else
        printf("No patient removed due to equal priority\n");

    return 0;
}
