int R = 3;
int G = 5;
int B = 6;



void setup()
{
    pinMode(3, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);

    pinMode(A0, INPUT);
    pinMode(A1, INPUT);
    pinMode(A2, INPUT);
}

void loop()
{   
    int r = analogRead(A0);
    int g = analogRead(A1);
    int b = analogRead(A2);



    analogWrite(R, r/4);
    analogWrite(G, g/4);
    analogWrite(B, b/4);


}