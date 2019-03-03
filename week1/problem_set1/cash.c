#include <stdio.h>
#include <cs50.h>


void cent_fun(int c);

int main(void)
{
    do
    {
        float change = get_float("Your change: ");
        if (change >= 1)
        {
            //it is at least one dollar
            printf("Total Change: %.2f\n", change);


            int cents = change * 100;
            printf("Total in Cents: %i\n", cents);


            int cent = cents % 100;
            int dollar = (cents - cent) / 100;

            printf("Total Dollar Bills: %i\n", dollar);
            printf("Extra Cents: %i\n", cent);


            //calling the function:
            cent_fun(cent);

            break;
        }
        else if (change > 0 && change < 1)
        {
            //it's really some value of cents
            printf("change: %.2f\n\n", change);

            int cent = change * 100;

            //calling the function:
            cent_fun(cent);

            break;
        }
    }
    while (true);

}




void cent_fun(int c)
{
    if (c >= 25)
    {
        int quarters = c / 25;
        int r1 = c - (quarters * 25);       // remainder
        printf("Quarters: %i\n", quarters);
        //printf("R1: %i\n", r1);
        if (r1 >= 10)
        {
            int dice = r1 / 10;
            int r2 = r1 - (dice * 10);
            printf("Dice: %i\n", dice);
            //printf("R2: %i\n", r2);
            if (r2 >= 5)
            {
                int nickel = r2 / 5;
                int r3 = r2 - (nickel * 5);
                printf("Nickel: %i\n", nickel);
                //printf("R3: %i\n", r3);
                if (r3 >= 1)
                {
                    int penny = r3;
                    printf("Pennies: %i\n\n\n", penny);

                    // Totalling of coins:
                    printf("\n\nTotal Coins: %i Quarters + %i Dices + %i Nickels + %i Pennies!!\n", quarters, dice, nickel, penny);
                    int number = quarters + dice + nickel + penny;
                    printf("Number of Coins: %i\n\n", number);

                }
            }
            else if (r2 > 0 && r2 < 5)
            {
                int penny = r2;
                printf("Pennies: %i\n", penny);
                // Totalling of coins:
                printf("\n\nTotal Coins: %i Quarters + %i Dices + %i Pennies!!\n", quarters, dice, penny);
                int number = quarters + dice + penny;
                printf("Number of Coins: %i\n\n", number);
            }
        }
        else if (r1 > 0 && r1 < 10)
        {
            if (r1 >= 5)
            {
                int nickel = r1 / 5;
                int penny = r1 - (nickel * 5);
                printf("Nickel: %i\n", nickel);
                printf("Pennies: %i\n", penny);

                // Totalling of coins:
                printf("\n\nTotal Coins: %i Quarters + %i Nickels + %i Pennies!!\n", quarters, nickel, penny);
                int number = quarters + nickel + penny;
                printf("Number of Coins: %i\n\n", number);
            }
            else if (r1 < 5)
            {
                int penny = r1;
                printf("Pennies: %i\n", penny);

                // Totalling of coins:
                printf("\n\nTotal Coins: %i Quarters + %i Pennies!!\n", quarters, penny);
                int number = quarters + penny;
                printf("Number of Coins: %i\n\n", number);
            }
        }

    }
    else if (c < 25 && c > 0)
    {
        if (c >= 10)
        {
            // check:
            printf("So %i is less than 25!\n", c);
        }
        else if (c >= 5 && c < 10)
        {
            // check:
            printf("So %i is less than 10!\n", c);
        }
        else if (c < 5)
        {
            int penny = c;
            printf("Pennies: %i", penny);
        }
    }

}