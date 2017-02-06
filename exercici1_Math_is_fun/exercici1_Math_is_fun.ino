/*********************************************************************
 **                                                                 **       
 **                          TÏTOL: Math is fun                     ** 
 **                                                                 **
 **                                                                 ** 
 **  Nom: Salva Ramírez                          Data: 06/02/2017   **
 ********************************************************************/
 
//************************ INCLUDE ***********************************


//*********************** VARIABLES **********************************

int a = 5;  // guarda valor a=5
int b = 10; // guarda valor b=10
int c = 20;  // guarda valor c=20

//************************* SETUP ************************************

void setup()              // executar un cop al començar
{
  Serial.begin(9600);     // configurar la biblioteca de sèrie a 9600 bps
  
  Serial.println("Here is some math: "); // una mica de matemàtiques

  Serial.print("a = ");           // escriu a=
  Serial.println(a);              // escriu a l'altra línia a
  Serial.print("b = ");           // escriu b=
  Serial.println(b);              // escriu a l'altra línia b
  Serial.print("c = ");           // escriu c=
  Serial.println(c);              // escriu a l'altra linia c

  Serial.print("a + b = ");       // suma
  Serial.println(a + b);

  Serial.print("a * c = ");       // multiplica
  Serial.println(a * c);
  
  Serial.print("c / b = ");       // divideix
  Serial.println(c / b);

  Serial.print("c % b = ");       // mòdul
  Serial.println(c % b);
  
  Serial.print("b - c = ");       // resta
  Serial.println(b - c);
}


//************************** LOOP ************************************

void loop()  // repeteix
{
}



//************************ FUNCIONS **********************************
