#include <iostream>

#include <wiringPi.h>

#include <mcp3004.h>



using namespace std ;



# define BASE 200

# define SPI_CHAN 0



const int channel = 0 ;

const int red = 1:



int main(void) 
{
   
  cout<<"Light Sensing"<<endl;
   
  if ( wiringPiSetup() == -1 )
    
    return 0 ;


  
  mcp3004Setup( BASE, SPI_CHAN ) ;
  
  pinMode(red,OUTPUT);

  
  
  while( 1 ) {
    
    int x = analogRead( BASE + channel ) ;

    
    cout<<"Analog Value=" << x << endl ;

    
      delay( 500 ) ;


	
    if(X>800)
		
     digitalWrite(red,1);
	
    else
		
     digitalWrite(red,0);
	
  
 } //while
  
  return 1;
  

} 
