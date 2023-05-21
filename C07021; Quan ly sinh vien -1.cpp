#include<stdio.h>
#include<string.h>
#include<ctype.h>

typedef struct sinhvien{
     int msv;
    char ten[25];
    float diemA, diemB, diemC;

}student;

void themsinhvien( student sv[], int *stt){
    sv[*stt].msv = *stt + 1;

}