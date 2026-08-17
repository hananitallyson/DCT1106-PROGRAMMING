#include <stdio.h>

#define MAX_GRADE 10.0

float getGradeAverage(float firstGrade, float secondGrade, float thirdGrade);

int main(void) {
    float grade1, grade2, grade3;
    int is_approved;

    printf("\nEnter first grade: ");
    scanf("%f", &grade1);

    printf("Enter second grade: ");
    scanf("%f", &grade2);

    printf("Enter third grade: ");
    scanf("%f", &grade3);

    float average = getGradeAverage(grade1, grade2, grade3);

    if (average >= 6.0) {
        is_approved = 1;
    } else {
        is_approved = 0;
    }

    printf("\nFinal grade: %.2f\nStatus: %d\n", average, is_approved);
}

float getGradeAverage(float firstGrade, float secondGrade, float thirdGrade) {
    return (firstGrade + secondGrade + thirdGrade) / 3;
}
