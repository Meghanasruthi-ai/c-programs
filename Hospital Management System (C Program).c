#include <stdio.h>

struct Patient {
    int id;
    char name[50];
    int age;
    char disease[50];
};

int main() {
    struct Patient p[100];
    int n = 0, choice, i, searchId, found;

    do {
        printf("\n===== HOSPITAL MANAGEMENT SYSTEM =====\n");
        printf("1. Add Patient\n");
        printf("2. Display Patients\n");
        printf("3. Search Patient\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

        case 1:
            printf("\nEnter Patient ID: ");
            scanf("%d", &p[n].id);

            printf("Enter Patient Name: ");
            scanf("%s", p[n].name);

            printf("Enter Age: ");
            scanf("%d", &p[n].age);

            printf("Enter Disease: ");
            scanf("%s", p[n].disease);

            n++;
            printf("Patient Added Successfully!\n");
            break;

        case 2:
            if(n == 0) {
                printf("No Patient Records Found.\n");
            } else {
                printf("\n--- Patient Records ---\n");
                printf("ID\tName\tAge\tDisease\n");

                for(i = 0; i < n; i++) {
                    printf("%d\t%s\t%d\t%s\n",
                           p[i].id,
                           p[i].name,
                           p[i].age,
                           p[i].disease);
                }
            }
            break;

        case 3:
            printf("Enter Patient ID to Search: ");
            scanf("%d", &searchId);

            found = 0;

            for(i = 0; i < n; i++) {
                if(p[i].id == searchId) {
                    printf("\nPatient Found\n");
                    printf("ID      : %d\n", p[i].id);
                    printf("Name    : %s\n", p[i].name);
                    printf("Age     : %d\n", p[i].age);
                    printf("Disease : %s\n", p[i].disease);
                    found = 1;
                    break;
                }
            }

            if(found == 0)
                printf("Patient Not Found.\n");

            break;

        case 4:
            printf("Thank You!\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}
