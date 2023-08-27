#ifndef SDB_H_INCLUDED
#define SDB_H_INCLUDED

#include "STD.h"
    typedef struct SimpleDb{
        uint32 student_ID ;
        uint32 Student_year ;
        uint8 Course1_ID[20] ;
        uint32 Course1_grade ;
        uint8 Course2_ID[20] ;
        uint32 course2_grade ;
        uint8 course3_ID[20] ;
        uint32 course3_grade ;
    }std;
    std student[9];



#endif // SDB_H_INCLUDED
