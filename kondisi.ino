readwebcam();
if(obstaclePin1 == false){
  Serial.println("no parking");
  noparking();  
}else{
  if(obstaclePin2 == true){
    if(obstaclePin3 == true){
      if(obstaclePin4 == true){
        }else{
          Serial.println("parkir on");
          nyala_LED();
        }  
 
}
