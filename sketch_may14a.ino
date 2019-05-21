#include <Wire.h>
#include <HMC5883L.h>
HMC5883L compass;

//==== sensor
int obstaclePin = 2;
int obstaclePin = 3;
int obstaclePin = 4;
int obstaclePin = 5;
int obstaclePin = 6;
//===== LED 
int ledPin1 = 7;
int ledPin2 = 8;
int ledPin3 = 9;
int ledPin4 = 10;
int ledpin5 = 11;

//========

#define sensorA  2
#define sensorB  3
#define sensorC  4
#define sensorD  5
#define sensorE  6
#define sensorF  7
#define sensorG 8



//kondisi==============================

boolean hasObstacle = false;
