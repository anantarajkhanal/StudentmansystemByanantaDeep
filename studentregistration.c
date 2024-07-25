#include <stdio.h>

int main() {
    printf(".............Welcome to the student result management system.......\n");

    int admincode = 9898;
    int adminpass = 7676;
    int random , studentidcarrier;
    int attempts = 0;
    int enteredAdminCode;

int studentid[]={
    601 , 602 , 603 , 604 , 605 , 606 , 607 , 608
};

    while (attempts < 3) {
        printf("please enter your  admin code:\n");
        scanf("%d", &enteredAdminCode);
         printf("please enter your  admin password:\n");
        scanf("%d",&random);

        if (enteredAdminCode == admincode && adminpass == random ) {
            printf("Welcome admin\n");
            break;
        } else {
            printf("Incorrect admin code. Please try again.\n");
            attempts++;
        }
         printf("enter student id");
         scanf("%d" , &studentidcarrier);

         if(studentidcarrier == studentid){
            printf("works");
         }
    }

    if (attempts == 3) {
        printf("Too many incorrect attempts. Access denied.\n");
        return 0; 
    }

    attempts = 0;

   





    return 0;
}






    // int array[5] = {601, 602, 603, 604, 605};  
    // int studentid;

    // printf("Enter student ID:\n");
    // scanf("%d", &studentid);

 
    // while (attempts < 3) {
    //     int found = 0;  
    //     for (int i = 0; i < 5; i++) {
    //         if (studentid == array[i]) {
    //             found = 1;
    //             break;
    //         }
    //     }

    //     if (found) {
    //         printf("Welcome student with ID %d\n", studentid);
    //         break;
    //     } else {
    //         printf("Incorrect Student ID. Please re-enter your Student ID:\n");
    //         scanf("%d", &studentid);
    //         attempts++;
    //     }
    // }