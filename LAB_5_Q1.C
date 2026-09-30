/* 
 Question:1 
A smart parking lot charges based on vehicle type, duration, and membership status. 
The system must decide the final fee step by step   some checks only happen if earlier ones pass.
Tasks:
Accept vehicle type (1 = bike, 2 = car, 3 = truck), hours parked, and membership status 
(1 = member, 0 = non-member).
If the vehicle type is invalid, print Invalid vehicle.
Otherwise, if hours ≤ 0, print Invalid duration.
Otherwise, if the vehicle is a bike, fee = 20 × hours.
If the vehicle is a car: if hours ≤ 2, fee = 50; else fee = 50 + 30 × (hours − 2).
If the vehicle is a truck: if hours ≤ 3, fee = 100; else fee = 100 + 50 × (hours − 3).
After the base fee is decided, if the person is a member and fee > 200, apply a 15% discount.
Print the final fee with a clear label.
*/

#include <stdio.h>

int main()
{
    int vehicle, hours, member;
    float fee;

    printf("Enter vehicle type (1 = Bike, 2 = Car, 3 = Truck): ");
    scanf("%d", &vehicle);

    printf("Enter hours parked: ");
    scanf("%d", &hours);

    printf("Enter membership status (1 = Member, 0 = Non-member): ");
    scanf("%d", &member);

    if (vehicle < 1 || vehicle > 3)
    {
        printf("Invalid vehicle.\n");
    }
    else
    {
        if (hours <= 0)
        {
            printf("Invalid duration.\n");
        }
        else
        {
            if (vehicle == 1)
            {
                fee = 20 * hours;
            }
            else if (vehicle == 2)
            {
                if (hours <= 2)
                {
                    fee = 50;
                }
                else
                {
                    fee = 50 + 30 * (hours - 2);
                }
            }
            else
            {
                if (hours <= 3)
                {
                    fee = 100;
                }
                else
                {
                    fee = 100 + 50 * (hours - 3);
                }
            }

            if (member == 1 && fee > 200)
            {
                fee = fee - (fee * 0.15);
            }

            printf("Final Fee: %.2f\n", fee);
        }
    }

    return 0;
}