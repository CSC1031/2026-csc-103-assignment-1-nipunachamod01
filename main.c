#include <stdio.h>
/*AS20250665*/

int main() {
    float maths, science, english;
    float total, average;
    char grade;
    int isPass = 1;


    printf("Enter marks for Mathematics (out of 100): ");
    scanf("%f", &maths);

    printf("Enter marks for Science (out of 100): ");
    scanf("%f", &science);

    printf("Enter marks for English (out of 100): ");
    scanf("%f", &english);


    total = maths + science + english;
    average = total / 3.0;


    if (maths < 40 , science < 40 , english < 40) {
        isPass = 0;
    }

    if (average >= 80 && average <= 100) {
        grade = 'A';
    } else if (average >= 70 && average < 80) {
        grade = 'B';
    } else if (average >= 60 && average < 70) {
        grade = 'C';
    } else if (average >= 50 && average < 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    float highest = maths;
    if (science > highest) highest = science;
    if (english > highest) highest = english;

    int hasDistinction = 0;
    if (average >= 85 && maths >= 80 && science >= 80 && english >= 80) {
        hasDistinction = 1;
    }

    printf("\n---------------------------\n");
    printf("Total: %.2f\n", total);
    printf("Average: %.2f\n", average);
    printf("Grade: %c\n", grade);

    if (isPass == 1) {
        printf("Result: PASS\n");
    } else {
        printf("Result: FAIL\n");
    }

    printf("Highest Mark: %.2f\n", highest);
    if (hasDistinction == 1) {
        printf("Remarks: PASS WITH DISTINCTION \n");
    }
    printf("---------------------------\n");

    return 0;
}
