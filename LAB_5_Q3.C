/*
Question: 3
An AI triage system assigns priority based on age, oxygen level, and heart rate. The most critical condition must be checked first, and later checks only run if earlier ones are false.
Tasks:
Accept age, oxygen level (SpO₂ %), and heart rate (bpm).
If oxygen < 90 → Critical: immediate attention
Else if heart rate > 130 or heart rate < 40 → Critical: cardiac alert
Else if age ≥ 65 and oxygen < 95 → High priority
Else if age ≤ 5 and heart rate > 110 → High priority
Else if oxygen < 97 → Medium priority
Else → Low priority
Only one message should print. Later checks must not run if an earlier one matched.
*/
#include <stdio.h>

int main()
{
    int age, heartRate;
    float oxygen;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter oxygen level (SpO2 %%): ");
    scanf("%f", &oxygen);

    printf("Enter heart rate (bpm): ");
    scanf("%d", &heartRate);

    if (oxygen < 90)
    {
        printf("Critical: immediate attention\n");
    }
    else if (heartRate > 130 || heartRate < 40)
    {
        printf("Critical: cardiac alert\n");
    }
    else if (age >= 65 && oxygen < 95)
    {
        printf("High priority\n");
    }
    else if (age <= 5 && heartRate > 110)
    {
        printf("High priority\n");
    }
    else if (oxygen < 97)
    {
        printf("Medium priority\n");
    }
    else
    {
        printf("Low priority\n");
    }

    return 0;
}