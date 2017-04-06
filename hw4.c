#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>

#define MAX_SLEEP_TIME  3
#define NUM_OF_STUDENT  4
#define NUM_OF_HELPS  2
#define NUM_OF_SEATS  2

pthread_mutex_t mutex_lock; // mutex declaration
sem_t student_sem;  //ta wait for student
sem_t ta_sem;   //student wait for ta

pthread_t TA;
pthread_t student[NUM_OF_STUDENTS];
int waiting_student;  //number of waiting student
int student_tag;
int seatQ[NUM_OF_SEATS]; //queue for studen in line
int studArray[NUM_OF_STUDENTS];


int main ( int argc, const char *argv[] ){
  printf("CS149 SleepingTA from Payam Khosravi\n");
  waiting_student = 0;
  





}
