int LightPin=13;
int LDRPin=9;
void setup (){
  pinMode (LightPin ,OUTPUT);
  pinMode (LDRPin ,INPUT);
}
void loop (){
  int LDRStatus=digitalRead (LDRPin);
  if (LDRStatus==1){
   digitalWrite (LightPin, HIGH); 
  }  else;
 digitalWrite (LightPin, LOW);
  }
    
  
