const int LED_ALERTE = 2;
const int CAPT_CONTACT = 3;
const int nbTours = 10;
int val;


void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
pinMode (LED_ALERTE, OUTPUT);
pinMode(CAPT_CONTACT, INPUT_PULLUP);


}

void loop() {
capt_contact();


}

void alert() {
  digitalWrite(LED_ALERTE, HIGH);
  delay(100);
  digitalWrite(LED_ALERTE, LOW);
  delay(100);
  digitalWrite(LED_ALERTE, HIGH);
  delay(100);
  digitalWrite(LED_ALERTE, LOW);

  }
 
   
   

bool capt_contact(){

boolean  etatContact = digitalRead(CAPT_CONTACT);
  if(!etatContact){
    Serial.println("Contact");
    alert();
  }
  else {
    Serial.println("Pas de contact");
  }
}
