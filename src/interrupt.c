#include <stdio.h>
#include <stdlib.h>
#include <wiringPi.h>

# define BUTTONPIN 0

int counter=0;

void myInterrupt() {
    counter++;
    printf("Counter=%d\n",counter);
}

int main(void)
{
    /* code */
    wiringPiSetup();
    pinMode(BUTTONPIN,INPUT);
    wiringPiISR(BUTTONPIN,INT_EDGE_RISING,&myInterrupt);
    //printf("Counter=%d\n",counter);
    while(1){}
    return 0;
}
