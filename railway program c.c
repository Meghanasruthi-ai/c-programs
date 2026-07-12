#include <stdio.h>

struct Passenger {
    int seatNo;
    char name[50];
    int age;
};

int main() {
    struct Passenger p[100];
    int seats[100] = {0};
    int choice, seat, age, n = 0;
    int i, found;

    do {
        printf("\n===== RAILWAY RESERVATION SYSTEM =====\n");
        printf("1. Display Available Seats\n");
        printf("2. Book Ticket\n");
        printf("3. Cancel Ticket\n");
        printf("4. Display Passengers\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

        case 1:
            printf("\nAvailable Seats:\n");
            for(i = 1; i <= 20; i++) {
                if(seats[i] == 0)
                    printf("%d ", i);
            }
            printf("\n");
            break;


        case 2:
            printf("\nEnter Seat Number (1-20): ");
            scanf("%d", &seat);

            if(seat < 1 || seat > 20) {
                printf("Invalid Seat Number\n");
            }
            else if(seats[seat] == 1) {
                printf("Seat Already Booked\n");
            }
            else {
                printf("Enter Passenger Name: ");
                scanf("%s", p[n].name);

                printf("Enter Age: ");
                scanf("%d", &age);

                p[n].seatNo = seat;
                p[n].age = age;

                seats[seat] = 1;
                n++;

                printf("Ticket Booked Successfully!\n");
            }
            break;


        case 3:
            printf("Enter Seat Number to Cancel: ");
            scanf("%d", &seat);

            found = 0;

            for(i = 0; i < n; i++) {
                if(p[i].seatNo == seat) {

                    seats[seat] = 0;

                    for(; i < n-1; i++)
                        p[i] = p[i+1];

                    n--;

                    found = 1;
                    printf("Ticket Cancelled Successfully!\n");
                    break;
                }
            }

            if(found == 0)
                printf("Ticket Not Found\n");

            break;


        case 4:
            printf("\nPassenger Details\n");
            printf("Seat\tName\tAge\n");

            for(i = 0; i < n; i++) {
                printf("%d\t%s\t%d\n",
                       p[i].seatNo,
                       p[i].name,
                       p[i].age);
            }
            break;


        case 5:
            printf("Thank You For Using Railway System\n");
            break;


        default:
            printf("Invalid Choice\n");
        }

    } while(choice != 5);


    return 0;
}
