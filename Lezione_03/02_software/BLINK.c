void setup()
{
    // set operative mode of a pin
    pinMode(13, OUTPUT);
}

void loop()
{
    // write max voltage value
    digitalWrite(13, HIGH);
    
    // wait for a sec
    delay(1000);
    
    // write min voltage value
    digitalWrite(13, LOW);

    // wait for a sec
    delay(1000);
}
