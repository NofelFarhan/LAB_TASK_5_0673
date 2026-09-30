/*
Question:10
A production AI system must decide whether a model can be deployed. It checks accuracy, confidence, dataset size, user role, and model status flags. The final decision combines arithmetic, relational, logical, and bitwise checks.
Tasks:
Accept:
Accuracy (0–100)
Confidence score (0–100)
Dataset size (number of samples)
User role (1 = Intern, 2 = Engineer, 3 = Admin)
Status flags (bitwise: 1 = TRAINED, 2 = VALIDATED, 4 = APPROVED, 8 = DEPRECATED)
Compute a model score = (accuracy × 0.5) + (confidence × 0.3) + (min(dataset size / 1000, 10) × 2).
Print the model score rounded to 2 decimal places.
Check:
If the DEPRECATED bit is set → Rejected: model deprecated
Else if TRAINED bit is not set → Rejected: not trained
Else if VALIDATED bit is not set → Rejected: not validated
Else if APPROVED bit is not set → Pending: awaiting approval
Else if accuracy < 70 or confidence < 60 → Rejected: performance too low
Else if dataset size < 5000 → Rejected: dataset too small
Else if role = 1 → Denied: interns cannot deploy
Else if role = 2 and model score < 80 → Denied: engineer needs higher score
Else → Approved for deployment
Also print the sizeof the variables used and whether the model score is above the average of accuracy and confidence.
*/
#include <stdio.h>

int main()
{
    float accuracy, confidence;
    int datasetSize;
    int role, status;
    float modelScore;
    float average;

    printf("Enter accuracy (0-100): ");
    scanf("%f", &accuracy);

    printf("Enter confidence score (0-100): ");
    scanf("%f", &confidence);

    printf("Enter dataset size: ");
    scanf("%d", &datasetSize);

    printf("Enter user role (1 = Intern, 2 = Engineer, 3 = Admin): ");
    scanf("%d", &role);

    printf("Enter status flags: ");
    scanf("%d", &status);

    /* Calculate model score */
    if (datasetSize / 1000.0 < 10)
    {
        modelScore = (accuracy * 0.5) +
                     (confidence * 0.3) +
                     ((datasetSize / 1000.0) * 2);
    }
    else
    {
        modelScore = (accuracy * 0.5) +
                     (confidence * 0.3) +
                     (10 * 2);
    }

    printf("\nModel Score: %.2f\n", modelScore);

    /* Deployment decision */
    if (status & 8)
    {
        printf("Rejected: model deprecated\n");
    }
    else
    {
        if (!(status & 1))
        {
            printf("Rejected: not trained\n");
        }
        else
        {
            if (!(status & 2))
            {
                printf("Rejected: not validated\n");
            }
            else
            {
                if (!(status & 4))
                {
                    printf("Pending: awaiting approval\n");
                }
                else
                {
                    if (accuracy < 70 || confidence < 60)
                    {
                        printf("Rejected: performance too low\n");
                    }
                    else
                    {
                        if (datasetSize < 5000)
                        {
                            printf("Rejected: dataset too small\n");
                        }
                        else
                        {
                            if (role == 1)
                            {
                                printf("Denied: interns cannot deploy\n");
                            }
                            else
                            {
                                if (role == 2 && modelScore < 80)
                                {
                                    printf("Denied: engineer needs higher score\n");
                                }
                                else
                                {
                                    printf("Approved for deployment\n");
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    /* Average of accuracy and confidence */
    average = (accuracy + confidence) / 2;

    printf("\nSize of variables:\n");
    printf("Size of accuracy: %zu bytes\n", sizeof(accuracy));
    printf("Size of confidence: %zu bytes\n", sizeof(confidence));
    printf("Size of datasetSize: %zu bytes\n", sizeof(datasetSize));
    printf("Size of role: %zu bytes\n", sizeof(role));
    printf("Size of status: %zu bytes\n", sizeof(status));
    printf("Size of modelScore: %zu bytes\n", sizeof(modelScore));
    printf("Size of average: %zu bytes\n", sizeof(average));

    printf("\nAverage of accuracy and confidence: %.2f\n", average);

    if (modelScore > average)
    {
        printf("Model score is above the average of accuracy and confidence.\n");
    }
    else
    {
        printf("Model score is not above the average of accuracy and confidence.\n");
    }

    return 0;
}