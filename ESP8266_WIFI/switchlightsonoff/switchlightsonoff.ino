#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>

const char* ssid     = "<ssid>";
const char* password = "<wifipass>";


void setup() {
  Serial.begin(9600);
  delay(50);

  // We start by connecting to a WiFi network
  Serial.print("Connecting to ");
  Serial.println(ssid);
  
  
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("WiFi connected");  
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
  Serial.println("");
}

int value = 0;

void loop() {
  
if (WiFi.status() == WL_CONNECTED) { //Check WiFi connection status
    HTTPClient http;  //Declare an object of class HTTPClient

    http.begin("http://192.168.178.47/leave.php");  //Specify request destination
    int httpCode = http.GET();             //Send the request
    if (httpCode > 0) { //Check the returning code
      String payload = http.getString();   //Get the request response payload
      Serial.println(payload);                     //Print the response payload
    }
    http.end();
    
    delay(1000); 
    http.begin("http://192.168.178.47/comehome.php");
    httpCode = http.GET();
    if (httpCode > 0) {
      String payload = http.getString();
      Serial.println(payload);                     //Print the response payload
    }
    http.end();   //Close connection
 
  }
 
  delay(10000);    //Send a request every 30 seconds
}
