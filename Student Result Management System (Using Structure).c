#include <stdio.h>

struct Student {
    int roll;
    char name[30];
    int m1, m2, m3;
    int total;
    float average;
    char grade;
};

int main() {
    struct Student s[100];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll No: ");
        scanf("%d", &s[i].roll);

        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Marks in 3 Subjects: ");
        scanf("%d%d%d", &s[i].m1, &s[i].m2, &s[i].m3);

        s[i].total = s[i].m1 + s[i].m2 + s[i].m3;
        s[i].average = s[i].total / 3.0;

        if(s[i].average >= 90)
            s[i].grade = 'A';
        else if(s[i].average >= 75)
            s[i].grade = 'B';
        else if(s[i].average >= 60)
            s[i].grade = 'C';
        else if(s[i].average >= 40)
            s[i].grade = 'D';
        else
            s[i].grade = 'F';
    }

    printf("\n================ Student Result ==================\n");
    printf("Roll\tName\tTotal\tAverage\tGrade\n");

    for(i = 0; i < n; i++) {
        printf("%d\t%s\t%d\t%.2f\t%c\n",
               s[i].roll,
               s[i].name,
               s[i].total,
               s[i].average,
               s[i].grade);
    }

    return 0;
}
