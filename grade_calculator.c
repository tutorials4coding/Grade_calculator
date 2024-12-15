#include <stdio.h>

void calculateGrade(float average) {
    if (average >= 90) {
      printf ("Grade: A\n");
    } else if (average >= 70) {
      printf ("Grade: B\n");
    } else if (average >= 50) {
      printf ("Grade: C\n");
    } else if (average >= 40) {
      printf ("Grade: D\n");
    } else {
      printf ("Grade: F\n");
    }

}
int main() {
    int numSubjects;
    float marks[100], total = 0, average;

    printf ("Student Grade Calculator\n");

    printf ("Enter the number of subjects: ");
    scanf ("%d", &numSubjects);

    for (int i = 0; i < numSubjects; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%f", &marks[i]);

        if (marks[i] < 0 || marks[i] > 100) {
          printf("Invalid marks! Please enter values between 0 and 100.\n");
          i--;
          continue;
        }

        total += marks[i];
    }

    average = total / numSubjects;

    printf ("\nTotal Marks: %.2f\n", total);
    printf ("Average Marks: %.2f\n", average);
    calculateGrade(average);

    return 0;
}