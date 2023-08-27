#include <stdio.h>
#include <stdlib.h>
#include "SDB.c"

void SDBAPP(){

    int32 k, r, l, d;
    student[0] = (std) {1, 3, "Physics", 80, "Math", 76, "English", 95};
    student[1] = (std) {1212091, 4, "Engines", 90, "Electronic Circuits", 93, "thermodynamics", 83};
    student[2] = (std) {9123211, 2, "PCB", 93, "Materials", 86, "Workshops", 86};
    printf("3 students have been added with their info for testing purpose\n");
    while(1){
            printf("\t Main menu\n");
    printf("To add entry, enter 1\n");
    printf("To get used size in database, enter 2\n");
    printf("To read student data, enter 3\n");
    printf("To get the list of all students IDs, enter 4\n");
    printf("To check if the ID exists, enter 5\n");
    printf("To delete student data, enter 6\n");
    printf("To check if the data base is full, enter 7\n");
    printf("To exit enter 0\n");
    scanf("%d", &k);

    if(k == 0)
        break;

    switch(k){

        case 1: SDB_AddEntry();
                    printf("\n");
                        break;

        case 2: SDB_GetUsedSize();
                    printf("\n");
                        break;

        case 3: printf("Enter student's ID: ");
        scanf(" %d", &r);
            printf("\n");
            SDB_ReadEntry(r);
                    printf("\n");
                        break;

        case 4: SDB_GetList();
                    printf("\n");
                        break;

        case 5: printf("Enter student's ID: ");
        scanf(" %d", &l);
            printf("\n");
            SDB_IsIdExist(l);
                    printf("\n");
                        break;

        case 6: printf("Enter student's ID: ");
        scanf(" %d", &d);
            printf("\n");
            SDB_DeleteEntry(d);
                    printf("\n");
                        break;

        case 7: SDB_isfull();
                    printf("\n");
                        break;

        default: if( k > 7 || k < 0 )
            printf("\nEnter a valid operation number\n");
                    continue;
    }


    }

}
