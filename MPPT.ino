
#include <Wire.h>
#include <MechaQMC5883.h>
#include <Servo.h> // libreria Servo para el control del ESC.
#include "MapFloat.h"


Servo esc; // creamos una clase Servo con nombre ESC. Define el servo como ESC.
Servo esc2;
int potpin = 0;  // analog pin used to connect the potentiometer


MechaQMC5883 qmc;

int x, y, z, rumboBrujula;
int rumbo = 231;
int error = 0;
int p = 2; // corrección del error.

float vIn = 0;
float cIn = 0;
float lastpMax = 0;

int val = 1650; // creamos una variable val, la cual permite almacenar la información

void setup() {

  Wire.begin();
  Serial.begin(115200);
  qmc.init();
  esc.attach(9);
  esc2.attach(5);

  // en observación
  esc.writeMicroseconds(1000);
  esc2.writeMicroseconds(1000);
  Serial.println ("pre");
  delay (7000);
  Serial.println ("post");

}

void loop() {

  rumboCalculate ();
  velocidadMotores ();
  mPPT ();

  delay(250);
}

void rumboCalculate() {
  qmc.read(&x, &y, &z, &rumboBrujula); //(Lee los valores de los 3 ejes  y el valor calculado del Acimut magnetico, los asigna a las variables de abajo)
  Serial.print("rumboBrujula:");
  Serial.println(rumboBrujula);
  Serial.print("error:");
  Serial.println(error);
  error = rumbo - rumboBrujula;
}

void   velocidadMotores () {


  // val = analogRead(A0); // leemos la entrada desde el pin A0 y lo almacena en val
  int valCW = val; // + (error * p); // Valor del potenciometro y el error se multipicla, así un motor ira mas rapido y el otro mas lento
  int valCCW = val; // - (error * p);
  esc.writeMicroseconds(map(valCW, 0,1023, 1350, 2000); // usamos val como la señal para ESC. Mapeo del potenciometro.
  esc2.write(map(valCCW, 0, 1023, 1350, 2000));
  Serial.println ("valCW: ");
  Serial.println (map(valCW, 0, 1023, 1350, 2000));
  Serial.println ("valCCW: ");
  Serial.println (map(valCCW, 0, 1023, 1350, 2000));
}

void mPPT () {
  vIn = (analogRead (A0));
  vIn = mapFloat (vIn, 0, 1023, 0, 5);
  Serial.println ("vIn: ");
  Serial.println (vIn);

cIn = (analogRead (A1)); 

  Serial.println ("cIn: ");
  Serial.println (cIn);

  
  float vMax = vIn * 25000 / 3920;
  Serial.println ("vMax: ");
  Serial.println (vMax);
  float cMax = mapFloat (cIn, 430, 595, 0, 3);
  Serial.println ("cMax: ");
  Serial.println (cMax);
  float pMax = vMax * cMax;
  Serial.println ("pMax: ");
  Serial.println (pMax);

    Serial.println ("val: ");
  Serial.println (val);
    Serial.println ("lastpMax: ");
  Serial.println (lastpMax);
  if (lastpMax < pMax) {
    val += 100;
    if (val >= 2000) {
      val = 2000;
    }
  } else {
    val -= 100;
    if (val <= 1350) {
      val = 1350;
    }
  }
  lastpMax = pMax;
}
