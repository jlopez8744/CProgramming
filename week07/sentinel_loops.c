#include <stdio.h>

double avgStudentGradesSentinel(void);

int main(void) {
    printf("%.2lfn", avgStudentGradesSentinel());

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