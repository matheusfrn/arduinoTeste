void setup()
{
pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}

//link do drive com o vídeo e o print da IDE: https://drive.google.com/drive/folders/159ZU0oqwzxzQUYjvUzzc25k7Fi_tSa5D?usp=sharing