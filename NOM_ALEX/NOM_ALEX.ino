/**********************************************************************************
**                                                                               **
**                              nom display                               **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************

const int ledA = 5;          
const int ledB = 6;          
const int ledC = 7;          
const int ledD = 8;         
const int ledE = 9;         
const int ledF = 10;
const int ledG = 11;
const int led = 12;         
unsigned long a;
//********** Setup ****************************************************************
void setup()
{
  pinMode(ledA, OUTPUT);     
  pinMode(ledB, OUTPUT);     
  pinMode(ledC, OUTPUT);     
  pinMode(ledD, OUTPUT);    
  pinMode(ledE, OUTPUT);     
  pinMode(ledF, OUTPUT);
  pinMode(ledG, OUTPUT);
  pinMode(led , OUTPUT);  

  a= 500;
}

//********** Loop *****************************************************************
void loop()
{
  digitalWrite (ledA, HIGH);   // A
  digitalWrite(ledB, HIGH);     
  digitalWrite(ledC, HIGH);     
  digitalWrite(ledD, LOW);     
  digitalWrite(ledE, HIGH); 
  digitalWrite(ledF, HIGH);    
  digitalWrite(ledG, HIGH);   

  delay(a);

  digitalWrite (ledA, LOW);   // L
  digitalWrite(ledB, LOW);     
  digitalWrite(ledC, LOW);     
  digitalWrite(ledD, HIGH);     
  digitalWrite(ledE, HIGH); 
  digitalWrite(ledF, HIGH);    
  digitalWrite(ledG, LOW); 

  delay(a);
  
  digitalWrite (ledA, HIGH);   // E
  digitalWrite(ledB, LOW);     
  digitalWrite(ledC, LOW);     
  digitalWrite(ledD, HIGH);     
  digitalWrite(ledE, HIGH); 
  digitalWrite(ledF, HIGH);    
  digitalWrite(ledG, HIGH);   

  delay(a);
  
  digitalWrite (ledA, LOW);   // X
  digitalWrite(ledB, HIGH);     
  digitalWrite(ledC, HIGH);     
  digitalWrite(ledD, LOW);     
  digitalWrite(ledE, HIGH); 
  digitalWrite(ledF, HIGH);    
  digitalWrite(ledG, HIGH);
  
  delay(a);
  
  
    
}
