
int takt = 200; 

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
  
  es(1);dcs(1);es(1);dcs(1);es(1);h(1);ds(1);cs(1);a(2);c(1);e(1);a(1);h(2);e(1);gc(1);h(1);
  cs(2);e(1);es(1);dcs(1);es(1);dcs(1);es(1);h(1);ds(1);cs(1);a(2);c(1);e(1);a(1);h(2);e(1);cs(1);h(1);
  a(2);h(1);cs(1);ds(1);es(2);g(1);fs(1);es(1);ds(2);f(1);es(1);ds(1);cs(2);e(1);ds(1);cs(1);
  h(2);e(1);es(1);dcs(1);es(1);dcs(1);es(1);h(1);ds(1);cs(1);a(2);c(1);e(1);a(1);h(2);e(1);gc(1);h(1);
  cs(2);e(1);es(1);dcs(1);es(1);dcs(1);es(1);h(1);ds(1);cs(1);a(2);c(1);e(1);a(1);h(2);e(1);cs(1);h(1);a(2);delay(2*takt);
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
