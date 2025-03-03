#include <stdio.h>
char calculateGrade(float score) {
    if (score >= 70.0) return 'A';
    else if (score >= 60.0) return 'B';
    else if (score >= 50.0) return 'C';
    else if (score >= 40.0) return 'D';
    else return 'F';
}
int main() {
    char name[100];
    char admissionNum[20];
    int num_subjects, total = 0;
    float average;
    printf("Enter student name: ");
    scanf(" %[^\n]%*c", name);
    printf("Enter admission number: ");
    scanf("%s", admissionNum);
    printf("\nEnter number of subjects: ");
    scanf("%d", &num_subjects);
    getchar(); 
    char subjects[num_subjects][50];
    char grades[num_subjects];
    for (int i = 0; i < num_subjects; i++) {
        printf("\nEnter subject %d name: ", i + 1);
        scanf(" %[^\n]", subjects[i]);
        
        int marks;
        printf("Enter marks for %s: ", subjects[i]);
        scanf("%d", &marks);
        getchar(); 
        total += marks;
        grades[i] = calculateGrade(marks);
    }

    average = (float)total / num_subjects;

    
    printf("=============== REPORT CARD ===============\n");
    printf("Student Name: %s\n", name);
    printf("Admission Number: %s\n", admissionNum);
    printf("\nSubject-wise Grades:\n");
    for (int i = 0; i < num_subjects; i++) {
        printf("%-20s: %c\n", subjects[i], grades[i]);
    }
    printf("\nTotal Marks: %d\n", total);
    printf("Average Marks: %.2f\n", average);
    printf("Overall Grade: %c\n", calculateGrade(average));
    printf("=============================\n");
    return 0;
}
