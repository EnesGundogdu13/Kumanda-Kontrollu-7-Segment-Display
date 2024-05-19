#include <IRremote.h>

int i;
void setup()
{
  for (i=2;i<=8;i++) pinMode(i, OUTPUT);
  Serial.begin(9600);
  IrReceiver.begin(9,ENABLE_LED_FEEDBACK);
}
void loop()
{
  if(IrReceiver.decode())
  {
      
    Serial.println(IrReceiver.decodedIRData.decodedRawData,HEX);
    if(IrReceiver.decodedIRData.decodedRawData==0xF30CBF00)
    {
      sifir();
    }    
    if(IrReceiver.decodedIRData.decodedRawData==0xEF10BF00)
    {
      bir();
    }
    if(IrReceiver.decodedIRData.decodedRawData==0xEE11BF00)
    {
      iki();
    }
    
    if(IrReceiver.decodedIRData.decodedRawData==0xED12BF00)
    {
      uc();
    }
    if(IrReceiver.decodedIRData.decodedRawData==0xEB14BF00)
    {
     dort();
    }
    if(IrReceiver.decodedIRData.decodedRawData==0xEA15BF00)
    {
      bes();
    }
    if(IrReceiver.decodedIRData.decodedRawData==0xE916BF00)
    {
      alti();
    }
    if(IrReceiver.decodedIRData.decodedRawData==0xE718BF00)
    {
      yedi();
    } 
    if(IrReceiver.decodedIRData.decodedRawData==0xE619BF00)
    {
      sekiz();
    } 
    if(IrReceiver.decodedIRData.decodedRawData==0xE51ABF00)
    {
      dokuz();
    }  
    IrReceiver.resume();
  } 
  
}
  
void sifir() 
{
  for(i=2; i<=7; i++) digitalWrite(i, 1);
}
void bir() 
{
  digitalWrite(2, 0);
  digitalWrite(3, 1);
  digitalWrite(4, 1);
  for(i =5; i<=8; i++) digitalWrite(i,0);
}
void iki() 
{
  digitalWrite(2, 1);
  digitalWrite(3, 1);
  digitalWrite(4, 0);
  digitalWrite(5, 1);
  digitalWrite(6, 1);
  digitalWrite(7, 0);
  digitalWrite(8, 1);
}
void uc() 
{
  for(int i =2;i<=5;i++) digitalWrite(i, 1);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 1);
}
void dort() 
{
  digitalWrite(2, 0);
  digitalWrite(3, 1);
  digitalWrite(4, 1);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 1);
  digitalWrite(8, 1);
}
void bes()
{
  digitalWrite(2, 1);
  digitalWrite(3, 0);
  digitalWrite(4, 1);
  digitalWrite(5, 1);
  digitalWrite(6, 0);
  digitalWrite(7, 1);
  digitalWrite(8, 1);
}
void alti()
{
  digitalWrite(2, 1);
  digitalWrite(3, 0);
  for(i=4; i<=8; i++) digitalWrite(i, 1);
}
void yedi()
{
  digitalWrite(2, 1);
  digitalWrite(3, 1);
  digitalWrite(4, 1);
  for(i =5; i<=8; i++) digitalWrite(i, 0);
}
void sekiz()
{
  for(i =2; i<=8; i++) digitalWrite(i, 1);
}
void dokuz()
{
  for(i =2;i<=5; i++) digitalWrite(i, 1);
  digitalWrite(6, 0);
  digitalWrite(7, 1);
  digitalWrite(8, 1);
}