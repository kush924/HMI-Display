String value;
long int t;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  t = millis();
  if (t%10000==0)
  {
    hmi_page(value);
    
if (value=="0")
value="1";
else
value="0";
  }
}
void hmi_page(String a){
  Serial.print("page page");
    //Serial.print("\"");
    Serial.print(value);
    //Serial.print("\"");
    Serial.write(0xff);
    Serial.write(0xff);
    Serial.write(0xff);
    delay(50);
}
