/**********************************************************************************
**                                                                               **
**                               Math Is Fun                                     **
**                                                                               **
**    adam el aloua moujahad                               17/02/23              **
**********************************************************************************/
//********** Includes *************************************************************
//********** Variables ************************************************************
long drive_gb = 100;
long drive_mb = 0;

//********** Setup ****************************************************************
void setup()            
{
  Serial.begin(9600);     // set up Serial library at 9600 bps
  Serial.print("Your HD is ");
  Serial.print(drive_gb);
  Serial.println(" GB large.");

  drive_mb = 1024 * drive_gb;

  Serial.print("It can store ");
  Serial.print(drive_mb);
  Serial.println(" Megabytes!");

}
//********** Loop *****************************************************************
void loop() 
{
}
//********** Funcions *************************************************************
