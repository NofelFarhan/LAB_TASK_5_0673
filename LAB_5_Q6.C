/*
Question:6
A chatbot routes user messages to different handlers based on message category and sentiment. Each category has sub-categories.
Tasks:
Ask the user to choose a category: 1 = Greeting, 2 = Query, 3 = Complaint, 4 = Feedback.
Then ask for a sub-type within that category:
Greeting → 1 = Morning, 2 = Evening
Query → 1 = Product, 2 = Billing, 3 = Technical
Complaint → 1 = Delivery, 2 = Quality
Feedback → 1 = Positive, 2 = Negative
Based on category + sub-type, print the correct bot reply.
For Complaint → Delivery, further ask if the order is delayed (1/0) and print a different apology.
Invalid category or sub-type should print Invalid selection.

*/
#include <stdio.h>

int main()
{
    int category, subtype;
    int delayed;

    printf("Select Category:\n");
    printf("1. Greeting\n");
    printf("2. Query\n");
    printf("3. Complaint\n");
    printf("4. Feedback\n");
    printf("Enter choice: ");
    scanf("%d", &category);

    if (category == 1)
    {
        printf("1. Morning\n");
        printf("2. Evening\n");
        printf("Enter subtype: ");
        scanf("%d", &subtype);

        if (subtype == 1)
        {
            printf("Good morning! How can I help you?\n");
        }
        else if (subtype == 2)
        {
            printf("Good evening! How can I help you?\n");
        }
        else
        {
            printf("Invalid selection.\n");
        }
    }
    else if (category == 2)
    {
        printf("1. Product\n");
        printf("2. Billing\n");
        printf("3. Technical\n");
        printf("Enter subtype: ");
        scanf("%d", &subtype);

        if (subtype == 1)
        {
            printf("Sure, I can help you with product information.\n");
        }
        else if (subtype == 2)
        {
            printf("I can help you with your billing query.\n");
        }
        else if (subtype == 3)
        {
            printf("I can help you with your technical issue.\n");
        }
        else
        {
            printf("Invalid selection.\n");
        }
    }
    else if (category == 3)
    {
        printf("1. Delivery\n");
        printf("2. Quality\n");
        printf("Enter subtype: ");
        scanf("%d", &subtype);

        if (subtype == 1)
        {
            printf("Is your order delayed? (1 = Yes, 0 = No): ");
            scanf("%d", &delayed);

            if (delayed == 1)
            {
                printf("We are very sorry for the delay in your order.\n");
            }
            else
            {
                printf("We are sorry for the delivery issue.\n");
            }
        }
        else if (subtype == 2)
        {
            printf("We are sorry about the quality issue. We will help you.\n");
        }
        else
        {
            printf("Invalid selection.\n");
        }
    }
    else if (category == 4)
    {
        printf("1. Positive\n");
        printf("2. Negative\n");
        printf("Enter subtype: ");
        scanf("%d", &subtype);

        if (subtype == 1)
        {
            printf("Thank you for your positive feedback!\n");
        }
        else if (subtype == 2)
        {
            printf("Thank you for your feedback. We will work to improve.\n");
        }
        else
        {
            printf("Invalid selection.\n");
        }
    }
    else
    {
        printf("Invalid selection.\n");
    }

    return 0;
}