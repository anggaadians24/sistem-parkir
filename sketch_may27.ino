#include <Adafruit_Sensor.h>

#include <mysql.h>

#include <GSM3ShieldV1ServerProvider.h>
#include <GSM.h>
#include <GSM3ShieldV1SMSProvider.h>
#include <GSM3IO.h>
#include <GSM3ShieldV1VoiceProvider.h>
#include <GSM3ShieldV1DataNetworkProvider.h>
#include <GSM3ShieldV1ModemVerification.h>
#include <GSM3MobileServerProvider.h>
#include <GSM3MobileSMSProvider.h>
#include <GSM3ShieldV1ModemCore.h>
#include <GSM3MobileDataNetworkProvider.h>
#include <GSM3MobileVoiceProvider.h>
#include <GSM3MobileNetworkRegistry.h>
#include <GSM3ShieldV1MultiClientProvider.h>
#include <GSM3ShieldV1ClientProvider.h>
#include <GSM3ShieldV1.h>
#include <GSM3MobileCellManagement.h>
#include <GSM3MobileServerService.h>
#include <GSM3MobileClientService.h>
#include <GSM3ShieldV1AccessProvider.h>
#include <GSM3ShieldV1DirectModemProvider.h>
#include <GSM3ShieldV1BaseProvider.h>
#include <GSM3ShieldV1ScanNetworks.h>
#include <GSM3MobileAccessProvider.h>
#include <GSM3MobileMockupProvider.h>
#include <GSM3MobileClientProvider.h>
#include <GSM3ShieldV1MultiServerProvider.h>
#include <GSM3VoiceCallService.h>
#include <GSM3ShieldV1BandManagement.h>
#include <GSM3ShieldV1CellManagement.h>
#include <GSM3CircularBuffer.h>
#include <GSM3ShieldV1PinManagement.h>
#include <GSM3SMSService.h>
#include <GSM3SoftSerial.h>
#include <GSM3MobileNetworkProvider.h>

#include <GSM3ShieldV1ServerProvider.h>
#include <GSM.h>
#include <GSM3ShieldV1SMSProvider.h>
#include <GSM3IO.h>
#include <GSM3ShieldV1VoiceProvider.h>
#include <GSM3ShieldV1DataNetworkProvider.h>
#include <GSM3ShieldV1ModemVerification.h>
#include <GSM3MobileServerProvider.h>
#include <GSM3MobileSMSProvider.h>
#include <GSM3ShieldV1ModemCore.h>
#include <GSM3MobileDataNetworkProvider.h>
#include <GSM3MobileVoiceProvider.h>
#include <GSM3MobileNetworkRegistry.h>
#include <GSM3ShieldV1MultiClientProvider.h>
#include <GSM3ShieldV1ClientProvider.h>
#include <GSM3ShieldV1.h>
#include <GSM3MobileCellManagement.h>
#include <GSM3MobileServerService.h>
#include <GSM3MobileClientService.h>
#include <GSM3ShieldV1AccessProvider.h>
#include <GSM3ShieldV1DirectModemProvider.h>
#include <GSM3ShieldV1BaseProvider.h>
#include <GSM3ShieldV1ScanNetworks.h>
#include <GSM3MobileAccessProvider.h>
#include <GSM3MobileMockupProvider.h>
#include <GSM3MobileClientProvider.h>
#include <GSM3ShieldV1MultiServerProvider.h>
#include <GSM3VoiceCallService.h>
#include <GSM3ShieldV1BandManagement.h>
#include <GSM3ShieldV1CellManagement.h>
#include <GSM3CircularBuffer.h>
#include <GSM3ShieldV1PinManagement.h>
#include <GSM3SMSService.h>
#include <GSM3SoftSerial.h>
#include <GSM3MobileNetworkProvider.h>




//==== sensor
int obstaclePin1 = 2;
int obstaclePin2 = 3;
int obstaclePin3 = 4;
int obstaclePin4 = 5;
int obstaclePin5 = 6;
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
