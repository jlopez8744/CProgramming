#include <stdio.h>

double avgStudentGradesSentinel(void);
void multiplesOf5(void);

int main(void) {
    multiplesOf5();

    return 0;
}

double avgStudentGradesSentinel(void) {
    double grade = 0;
    double total_grade = 0;

    double entries = 0;

    while (grade != -1) {
        // Get the grade
        printf("Enter the grade: ");
        scanf("%lf", &grade);

        if (grade != -1) {
            entries += 1;
            total_grade += grade;
        }
    }

    return total_grade == 0 ? 0 : total_grade / entries;
}

void multiplesOf5(void) {
    for (int i = 15; i <= 45; i += 5) {
        printf("%d\n", i);
    }
}