#include <stdio.h>

int main() {
    char name[15] = "John Doe";
    int course_id = 2271;
    int student_id = 10234;
    int id_diff = student_id - course_id;

    printf("Name: %s\n", name);
    printf("Course ID: %d\n", course_id);
    printf("Student ID: %d\n", student_id);
    printf("Student ID - Course ID is: %d\n", id_diff);
    return 0;
}