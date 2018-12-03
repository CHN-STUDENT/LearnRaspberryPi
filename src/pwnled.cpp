//嵌入式实验
//物联网1603 郭治洪 201616070320
#include <iostream>
#include <wiringPi.h>
#include <softPwm.h>
using namespace std;
const int led =0; //GPIO0
int main(int argc, char const *argv[])
{
    
    if(wiringPiSetup()==-1)
        return 0;
    softPwmCreate(led,0,100);
    while(1) 
    {
        int val;
        for(val=0;val<=100;val++)
        {
            softPwmWrite(led,val);
            delay(20);
        }
         for(val=100;val>0;val--)
        {
            softPwmWrite(led,val);
            delay(20);
        }
    }
    return 1;
}
