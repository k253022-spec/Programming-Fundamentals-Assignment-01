#include<stdio.h>

int main(){

    int id1, quantity1, reorder1, days1;
    float price1;

    int id2, quantity2, reorder2, days2;
    float price2;

    int id3, quantity3, reorder3, days3;
    float price3;

    printf("Enter Product 1 ID, Price, Quantity, Reorder Level, Days Unsold:\n");
    scanf("%d %f %d %d %d", &id1, &price1, &quantity1, &reorder1, &days1);

    printf("Enter Product 2 ID, Price, Quantity, Reorder Level, Days Unsold:\n");
    scanf("%d %f %d %d %d", &id2, &price2, &quantity2, &reorder2, &days2);

    printf("Enter Product 3 ID, Price, Quantity, Reorder Level, Days Unsold:\n");
    scanf("%d %f %d %d %d", &id3, &price3, &quantity3, &reorder3, &days3);

    printf("Processing Sale\n");

    if(quantity1 > 0)
	{
        quantity1 = quantity1 - 1;
        printf("Product 1 sold\n");
    } else
	{
        printf("Product 1 cannot be sold\n");
    }

    if(quantity2 > 0)
	{
        quantity2 = quantity2 - 1;
        printf("Product 2 sold\n");
    } else
	{
        printf("Product 2 cannot be sold\n");
    }

    if(quantity3 > 0)
	{
        quantity3 = quantity3 - 1;
        printf("Product 3 sold\n");
    } else
	{
        printf("Product 3 cannot be sold\n");
    }

    quantity1 = quantity1 + 5;
    quantity2 = quantity2 + 5;
    quantity3 = quantity3 + 5;

    printf("Low Stock Check\n");

    if(quantity1 <= reorder1)
        printf("Product 1 is low stock\n");

    if(quantity2 <= reorder2)
        printf("Product 2 is low stock\n");

    if(quantity3 <= reorder3)
        printf("Product 3 is low stock\n");

    float total;
    total = (quantity1 * price1) + (quantity2 * price2) + (quantity3 * price3);

    printf("Total Inventory Value = %.2f\n", total);

    printf("Most Expensive Product:\n");

    if(price1 > price2 && price1 > price3)
        printf("Product 1\n");
    else if(price2 > price1 && price2 > price3)
        printf("Product 2\n");
    else
        printf("Product 3\n");

    printf("Least Expensive Product:\n");

    if(price1 < price2 && price1 < price3)
        printf("Product 1\n");
    else if(price2 < price1 && price2 < price3)
        printf("Product 2\n");
    else
        printf("Product 3\n");

    printf("Checking Discount\n");

    if(days1 > 60)
	{
        price1 = price1 * 0.9;
        printf("Discount given to Product 1\n");
    }

    if(days2 > 60)
	{
        price2 = price2 * 0.9;
        printf("Discount given to Product 2\n");
    }

    if(days3 > 60)
	{
        price3 = price3 * 0.9;
        printf("Discount given to Product 3\n");
    }

    return 0;
}
