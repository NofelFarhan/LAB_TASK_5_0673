/*
Question:2
A university grants scholarships based on marks, attendance, and family income. Each condition depends on the previous one a student who fails an early check should never reach later checks.
Tasks:
Accept marks (0–100), attendance percentage (0–100), and annual family income.
If marks < 50 → print Not eligible: marks too low and stop.
Else if attendance < 75 → print Not eligible: attendance too low and stop.
Else if income > 800000 → print Not eligible: income too high and stop.
Else:
If marks ≥ 90 and attendance ≥ 90 → Full scholarship
Else if marks ≥ 75 and attendance ≥ 85 → Half scholarship
Else → Quarter scholarship
Print the scholarship type only if the student passed all earlier gates.

*/
#include <stdio.h>

int main()
{
    int marks, attendance;
    float income;

    printf("Enter marks: ");
    scanf("%d", &marks);

    printf("Enter attendance percentage: ");
    scanf("%d", &attendance);

    printf("Enter annual family income: ");
    scanf("%f", &income);

    if (marks < 50)
    {
        printf("Not eligible: marks too low\n");
    }
    else
    {
        if (attendance < 75)
        {
            printf("Not eligible: attendance too low\n");
        }
        else
        {
            if (income > 800000)
            {
                printf("Not eligible: income too high\n");
            }
            else
            {
                if (marks >= 90 && attendance >= 90)
                {
                    printf("Full scholarship\n");
                }
                else if (marks >= 75 && attendance >= 85)
                {
                    printf("Half scholarship\n");
                }
                else
                {
                    printf("Quarter scholarship\n");
                }
            }
        }
    }

    return 0;
}