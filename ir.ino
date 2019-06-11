void ir(){
 hasObstacle = digitalRead(obstaclePin1); //
 if (hasObstacle == LOW) //nyala
  {
 hasObstacle = true;
Serial.println("kendaraan di tempat");


}
  else
  {
   hasObstacle = false;
  Serial.println("kendaraan belum ditempat"); 
  } 


{
 hasObstacle = digitalRead(obstaclePin2); //
 if (hasObstacle == LOW) //nyala
  {
 hasObstacle = true;
Serial.println("kendaraan di tempat");


}
  else
  {
   hasObstacle = false;
  Serial.println("kendaraan belum ditempat"); 
  } 
  {
 hasObstacle = digitalRead(obstaclePin3); //
 if (hasObstacle == LOW) //nyala
  {
 hasObstacle = true;
Serial.println("kendaraan di tempat");


}
  else
  {
   hasObstacle = false;
  Serial.println("kendaraan belum ditempat"); 
  } 

{
 hasObstacle = digitalRead(obstaclePin2); //
 if (hasObstacle == LOW) //nyala
  {
 hasObstacle = true;
Serial.println("kendaraan di tempat");


}
  else
  {
   hasObstacle = false;
  Serial.println("kendaraan belum ditempat"); 
  } 

}
