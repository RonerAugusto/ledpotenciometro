int PortOnze=11;
int PortDez=10;
int PortNove=9;
int cont=0;

void setup(){
  
  pinMode(PortOnze,OUTPUT);
  pinMode(PortDez,OUTPUT);
  pinMode(PortNove,OUTPUT);
    
  
  
  
  
}

void loop (){
  
 
  
  for(cont=0 ; cont<=255 ;cont++) {
    
    analogWrite(PortOnze, cont);
    analogWrite(PortDez, cont);
    analogWrite(PortNove, cont);
    delay(200);
    
    analogWrite(PortDez, cont);
    analogWrite(PortOnze, cont); 
    analogWrite(PortNove, cont);
    delay(200);
    
    
    
  }
  
  
  
  
  
}
