/* This simple code is to test if hardware was setup correctly. 
 * The code is for Linkit One board + Gemtek LoRA module. The LoRA service is available in Taipei,Taiwan. It will not work if your location is not covered by Gemtek LoRA service.  
 * 
 *  author: howard  howard.weng@gmail.com
 *  http://frrut.com 
 *  
 * You should use MQTT Client software to receive message, and you can expect to receive data as following from MQTT broker. The sample code is as following. 
 
  {
  "id" : "5a3c2bc3-0afe-4b22-9655-b8c84962ed1b",
  "macAddr" : "04000xxx",
  "data" : "1234567890abcdef",ajklsdalksdf
  "buff" : "2016-11-07T13:23:28.462Z",
  "recv" : "2016-11-07T13:23:27.000Z",
  "extra" : {
    "gwip" : "192.168.0.89",
    "gwid" : "00001c497b48dc91",
    "repeater" : "00000000ffffffff",
    "systype" : 4,
    "rssi" : -70,
    "snr" : 128
  }
}
 * 
 * 
 */


void setup() { 
  
Serial1.begin(9600); 

} 


void loop() { 

Serial1.println("AT+DTX=16,1234567890abcdef"); 
delay(62*1000); 

} 

