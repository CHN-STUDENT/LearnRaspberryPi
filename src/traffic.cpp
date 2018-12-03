//嵌入式实验
//物联网1603 郭治洪 201616070320
#include <iostream>
#include <wiringPi.h>

using namespace std;

//12 GPIO 1 绿
//14 GPIO 4 黄
//16 GPIO 5 红
const int red=5; //GPIO 1 RED
const int yellow=4; //GPIO 4 YELLOW
const int green=1; //GPIO 5 GREEN

int main(int argc, char const *argv[])
{
    if(wiringPiSetup()==-1)
        return 0;
    pinMode(red,OUTPUT); //output
    pinMode(yellow,OUTPUT);
    pinMode(green,OUTPUT);
    while(1) 
    {
        //绿灯 5s
        digitalWrite(red,0);
        digitalWrite(yellow,0);
        digitalWrite(green,1);
        delay(5000);
        //黄灯 闪烁4次 间隔0.5s
        digitalWrite(green,0);
        for(int i=0;i<4;i++) {
            digitalWrite(yellow,1);
            delay(500);
            digitalWrite(yellow,0);
            delay(500);
        }
        //红灯 5s
        digitalWrite(red,1);
        digitalWrite(yellow,0);
        digitalWrite(green,0);
        delay(5000);
    }
    return 1;
}
