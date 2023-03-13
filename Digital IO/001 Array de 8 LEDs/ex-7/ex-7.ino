/**********************************************************************************
**                                                                               **
**                               Math Is Fun                                     **
**                                                                               **
**    adam el aloua moujahad                               13/02/23              **
**********************************************************************************/
//********** Includes *************************************************************
//********** Variables ************************************************************
const byte led0 = 13;          // donar nom al pin 13 de l’Arduino

//********** Setup ****************************************************************
void setup()
{
  pinMode(led0, OUTPUT);     // definir el pin 13 com una sortida
  for(int i=0; i<30;i++)
  {
    digitalWrite(led0, HIGH);    // posar a 5V el pin 13
    delay(100);                  // es queden leds 500ms encesos
    digitalWrite(led0, LOW);     // posar a 0V el pin 13
    delay(100);                  // es queden leds 500ms apagats
  }
}

//********** Loop *****************************************************************
void loop()
{

}

//********** Funcions *************************************************************