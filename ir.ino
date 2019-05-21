void ir(){
 hasObstacle = digitalRead(obstaclePin); //
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
