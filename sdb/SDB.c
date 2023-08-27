#include <stdio.h>
#include <stdlib.h>
#include "SDB.h"


    bool SDB_ReadEntry(uint32 ID){ //A function that take student ID to print his details
        int32 i;
        for( i = 0 ; i <= 9 ; i++ ){
            if(student[i].student_ID == ID){
                    printf("Student ID: %d\n", student[i].student_ID);
                    printf("Student year: %d\n", student[i].Student_year);
                    printf("Course 1 ID: %s\n", student[i].Course1_ID);
                    printf("Course 1 grade: %d\n", student[i].Course1_grade);
                    printf("Course 2 ID: %s\n", student[i].Course2_ID);
                    printf("Course 2 grade: %d\n", student[i].course2_grade);
                    printf("Course 3 ID: %s\n", student[i].course3_ID);
                    printf("Course 3 grade: %d\n", student[i].course3_grade);
                break;
            }
        }
            if (student[i].student_ID != ID)
                printf("ID is not in your database\n");
    }







    void SDB_isfull(){ // A function to check if the database is full or not and if not prints how many empty space
                    // it still got left

    int32 i, empty = 0, used = 0;
    for( i = 0 ; i <= 9 ; i++ ){
        if(student[i].student_ID != 0)
            used++;
        if(student[i].student_ID == 0 )
            empty++;
    }
    if(used == 10)
        printf("DataBase is full\n");
    else if(empty != 0)
        printf("There is %d empty spaces in the data base\n", empty);

}




    void SDB_GetUsedSize(){ // A function checks how many students in the data base
        int32 i, count = 0;
        for( i = 0 ; i <= 9 ; i++ ){
            if(student[i].student_ID != 0 ){
                count++;
            }
    }
    printf("You got %d students in your database \n", count);
}


    bool SDB_IsIdExist(int a){ //A function to check if the given ID Exists
        int32 i, count = 0;
        for( i = 0 ; i <= 9 ; i++ ){
            if(student[i].student_ID == a)
            count++;
        }
    count == 1 ? printf("The ID Exists\n") : printf("ID doesn't Exist\n");
}



    void SDB_AddEntry(){ // A function to add students to database
        int32 i;
        for( i = 0 ; i <= 9 ; i++ ){
            if(student[i].student_ID == 0){

                printf("Enter student ID number\n");
                scanf(" %d", &student[i].student_ID);

                printf("Enter Student Year\n");
                scanf(" %d", &student[i].Student_year);

                printf("Enter first course's name\n");
                scanf(" %[^\n]c", &student[i].Course1_ID);

                printf("Enter first course's grade\n");
                scanf(" %d", &student[i].Course1_grade);

                printf("Enter second course's name\n");
                scanf(" %[^\n]c", &student[i].Course2_ID);

                printf("Enter second course's grade\n");
                scanf(" %d", &student[i].course2_grade);

                printf("Enter third course's name\n");
                scanf(" %[^\n]c", &student[i].course3_ID);

                printf("Enter third course's grade\n");
                scanf(" %d", &student[i].course3_grade);

                printf("Student Added !\n");

                break;
            }

        }

    }


    void SDB_DeleteEntry(int n){ // A function to delete student data "set it to 0"
        int32 i, j, f = 0;
        for( i = 0 ; i <= 9 ; i++ ){
            if(student[i].student_ID == n){
                student[i].student_ID = 0 ;
                student[i].Student_year = 0 ;
                student[i].Course1_grade = 0 ;
                student[i].course2_grade = 0 ;
                student[i].course3_grade = 0 ;
                    for( j = 0 ; j <= 20 ; j++ ){
                        student[i].Course1_ID[j] = 0;
                        student[i].Course2_ID[j] = 0;
                        student[i].course3_ID[j] = 0;
                    }
                printf("Student data deleted! \n");
                f = 1;
                break;
            }
        }
        if(f == 0)
            printf("Student't ID isn't in the database\n");
    }



    void SDB_GetList(){     // A function to get all student's IDs in the data base
        int32 i , x = 0;
        for( i = 0 ; i <= 9 ; i++ ){
            if(student[i].student_ID != 0){
                printf(" %d.", student[i].student_ID);
                x++;
            }
        }
        if(x == 0)
            printf("No IDs found\n");
    }





