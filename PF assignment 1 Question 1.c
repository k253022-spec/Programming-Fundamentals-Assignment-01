#include<stdio.h>

int main(){

    int id1= 101, author1= 1, year1= 2015, status1= 1;
    int id2= 102, author2= 2, year2= 2018, status2= 0;
    int id3= 103, author3= 3, year3= 2020, status3= 1;
    int id4= 104, author4= 1, year4= 2012, status4= 1;
    int id5= 105, author5= 4, year5= 2019, status5= 0;

    int choice;

    printf("Search by:\n");
    printf("1. Book ID\n");
    printf("2. Author (1=Faisal 2=Nikhil 3=Usama 4=Kabeer)\n");
    printf("3. Publication Year Range\n");

    scanf("%d",&choice);

    
    if(choice == 1)
	{

        int searchID;
        printf("Enter Book ID");
        scanf("%d",&searchID);

        if(searchID == id1)
		{
            printf("Book ID%d\n",id1);
            if(status1 == 1) 
			printf("Available\n");
            else printf("Borrowed\n");
        }
        else if(searchID == id2)
		{
            printf("Book ID %d\n",id2);
            if(status2 == 1)
			printf("Available\n");
            else printf("Borrowed\n");
        }
        else if(searchID == id3)
		{
            printf("Book ID %d\n",id3);
            if(status3 == 1) 
			printf("Available\n");
            else printf("Borrowed\n");
        }
        else if(searchID == id4)
		{
            printf("Book ID %d\n", id4);
            if(status4 == 1) 
			printf("Available\n");
            else printf("Borrowed\n");
        }
        else if(searchID == id5)
		{
            printf("Book ID %d\n",id5);
            if(status5 == 1) 
			printf("Available\n");
            else printf("Borrowed\n");
        }
        else
		{
            printf("No books found\n");
        }
    }

    else if(choice == 2)
	{

        int searchAuthor;
        printf("Enter Author Code");
        scanf("%d",&searchAuthor);

        if(searchAuthor!= author1 &&
           searchAuthor!= author2 &&
           searchAuthor!= author3 &&
           searchAuthor!= author4 &&
           searchAuthor!= author5)
		   {

            printf("No books found\n");
        }
        else
		{

            if(searchAuthor == author1)
			{
                printf("Book ID %d\n",id1);
                if(status1 == 1) 
				printf("Available\n");
                else printf("Borrowed\n");
            }

            if(searchAuthor == author2)
			{
                printf("Book ID %d\n",id2);
                if(status2 == 1) 
				printf("Available\n");
                else printf("Borrowed\n");
            }

            if(searchAuthor == author3)
			{
                printf("Book ID %d\n",id3);
                if(status3 == 1)
				 printf("Available\n");
                else printf("Borrowed\n");
            }

            if(searchAuthor == author4)
			{
                printf("Book ID: %d\n",id4);
                if(status4 == 1) printf("Available\n");
                else printf("Borrowed\n");
            }

            if(searchAuthor == author5)
			{
                printf("Book ID %d\n",id5);
                if(status5 == 1) 
				printf("Available\n");
                else printf("Borrowed\n");
            }
        }
    }
    
    else if(choice == 3)
	{

        int start,end;
        printf("Enter Start Year");
        scanf("%d",&start);
        printf("Enter End Year");
        scanf("%d",&end);

        if(year1 < start && year2 < start && year3 < start &&
           year4 < start && year5 < start)
		   {

            printf("No books found\n");
        }
        else
		{

            if(year1 >= start && year1 <= end)
			{
                printf("Book ID %d\n", id1);
                if(status1 == 1) 
				printf("Available\n");
                else printf("Borrowed\n");
            }

            if(year2 >= start && year2 <= end)
			{
                printf("Book ID %d\n", id2);
                if(status2 == 1)
				printf("Available\n");
                else printf("Borrowed\n");
            }

            if(year3 >= start && year3 <= end)
			{
                printf("Book ID %d\n",id3);
                if(status3 == 1)
				 printf("Available\n");
                else printf("Borrowed\n");
            }

            if(year4 >= start && year4 <= end)
			{
                printf("Book ID %d\n", id4);
                if(status4 == 1) 
				printf("Available\n");
                else printf("Borrowed\n");
            }

            if(year5 >= start && year5 <= end) 
			{
                printf("Book ID %d\n", id5);
                if(status5 == 1)
				 printf("Available\n");
                else printf("Borrowed\n");
            }
        }
    }

    return 0;
}
