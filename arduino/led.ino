const int ledPin = 11;
int interwal = 255;




int increase(int a)
{
    return a + 1;
}
int decrease(int b)
{
    return b-1;
}
int (*p)(int);

void changedirection(int interwal)
{
    if(interwal == 255)
    {
        p = decrease;
    }
    else
    {
        p = increase;
    }
    
}

void setup()
{
    pinMode(ledPin, OUTPUT);
}

void loop()
{
    analogWrite(ledPin, interwal);
    delay(5);
    analogWrite(ledPin, LOW);
    delay(5);
    if(interwal == 255 || interwal == 0)
    {
        changedirection(interwal);
    }
    interwal = (*p)(interwal);


}