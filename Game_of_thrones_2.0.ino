
int takt = 250; 

void setup() {
 pinMode(2, OUTPUT);
 pinMode(3, OUTPUT);
 pinMode(4, OUTPUT);
 pinMode(5, OUTPUT);
 pinMode(6, OUTPUT);
 pinMode(7, OUTPUT);
 pinMode(8, OUTPUT);
 pinMode(9, OUTPUT);

}

void loop() {
  
  a(1);d(1);f(1);g(1);a(1);d(1);f(1);g(1);a(1);d(1);f(1);g(1);a(1);d(1);f(1);g(1);
  a(1);d(1);fc(1);g(1);a(1);d(1);fc(1);g(1);a(1);d(1);fc(1);g(1);a(1);d(1);fc(1);g(1);
  a(2);d(2);f(1);g(1);a(2);d(2);f(1);g(1);e(4);delay(2*takt);g(2);c(2);f(1);e(1);g(2);c(2); 
  f(1);e(1);d(4);delay(2*takt);a(2);d(2);f(1);g(1);a(2);d(2);f(1);g(1);e(4);delay(2*takt);g(2);c(2);
  f(1);e(1);g(2);c(2);f(1);e(1);d(4);delay(2*takt);ass(2);ds(2);fs(1);gs(1);ass(2);ds(2);fs(1);gs(1);es(4);
}

void c(int t)
{
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  delay(t*takt);
  }

void d(int t)
{
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  delay(t*takt);
  }

void e(int t)
{
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  delay(t*takt);
  }

void f(int t)
{
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  delay(t*takt);
  }

void fc(int t)
{
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  delay(t*takt);
  }

void g(int t)
{
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  delay(t*takt);
  }

void gc(int t)
{
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  delay(t*takt);
  }

void a(int t)
{
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  delay(t*takt);
  }
  
void b(int t)
{
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  delay(t*takt);
  }
  
void h(int t)
{
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  delay(t*takt);
  }

void cs(int t)
{
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
  delay(t*takt);
  }

void csc(int t)
{
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
  delay(t*takt);
  }
  
void ds(int t)
{
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  delay(t*takt);
  }
void dcs(int t)
{
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  delay(t*takt);
  }
void es(int t)
{ 
  int x = 0;
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  do{
    delayMicroseconds(5000);
    digitalWrite(9,LOW);
    delayMicroseconds(1500);
    digitalWrite(9,HIGH);
    x = x+7;
  }while (x <= takt);
  }
void fs(int t)
{ 
  int x = 0;
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  do{
    delayMicroseconds(5500);
    digitalWrite(9,LOW);
    delayMicroseconds(1500);
    digitalWrite(9,HIGH);
    x = x+7;
  }while (x <= takt);
  }
void gs(int t)
{ 
  int x = 0;
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  do{
    delayMicroseconds(5500);
    digitalWrite(9,LOW);
    delayMicroseconds(1500);
    digitalWrite(9,HIGH);
    x = x+7;
  }while (x <= takt);
  }
void ass(int t)
{ 
  int x = 0;
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  do{
    delayMicroseconds(5500);
    digitalWrite(9,LOW);
    delayMicroseconds(1500);
    digitalWrite(9,HIGH);
    x = x+7;
  }while (x <= takt);
  }
void hs(int t)
{ 
  int x = 0;
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  do{
    delayMicroseconds(5500);
    digitalWrite(9,LOW);
    delayMicroseconds(1500);
    digitalWrite(9,HIGH);
    x = x+7;
  }while (x <= takt);
  }
void css(int t)
{ 
  int x = 0;
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  do{
    delayMicroseconds(5500);
    digitalWrite(9,LOW);
    delayMicroseconds(1500);
    digitalWrite(9,HIGH);
    x = x+7;
  }while (x <= takt);
  }
