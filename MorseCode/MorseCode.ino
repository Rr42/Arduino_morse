#define MX_LENGTH 100
#define DASH_TIME 500 //ms
#define DOT_TIME 200 //ms
#define OFF_TIME 300 //ms
#define SPACE_TIME 1000 //ms
#define LED_PIN 13

#define A 10
#define B 11
#define C 12
#define D 13
#define E 14
#define F 15
#define G 16
#define H 17
#define I 18
#define J 19
#define K 20
#define L 21
#define M 22
#define N 23
#define O 24
#define P 25
#define Q 26
#define R 27
#define S 28
#define T 29
#define U 30
#define V 31
#define W 32
#define X 33
#define Y 34
#define Z 35

/// Global variables
const char PAYLOAD[MX_LENGTH] = "123";

const char NUM_TABLE[36][5] = {"-----", // 0
                               ".----", // 1
                               "..---", // 2
                               "...--", // 3
                               "....-", // 4
                               ".....", // 5
                               "-....", // 6
                               "--...", // 7
                               "---..", // 8
                               "----.", // 9
                               ".-   ", // a
                               "-... ", // b
                               "-.-. ", // c
                               "-..  ", // d
                               ".    ", // e
                               "..-. ", // f
                               "--.  ", // g
                               ".... ", // h
                               "..   ", // i
                               ".--- ", // j
                               "-.-  ", // k
                               ".-.. ", // l
                               "--   ", // m
                               "-.   ", // n
                               "---  ", // o
                               ".--. ", // p
                               "--.- ", // q
                               ".-.  ", // r
                               "...  ", // s
                               "-    ", // t
                               "..-  ", // u
                               "...- ", // v
                               ".--  ", // w
                               "-..- ", // x
                               "-.-- ", // y
                               "--.. "};// z
                               

/// Functions
void morce_me(char ch);

void setup() 
{
  pinMode(LED_PIN, OUTPUT);

}

void loop() 
{
  for (int i = 0; PAYLOAD[i]!='\0'; ++i)
    morce_me(PAYLOAD[i]);

  delay(SPACE_TIME);
}

void morce_me(char ch)
{
  int num;
  switch (ch) {
    case 'a':
    case 'A':
      num = A;
      break;
    case 'b':
    case 'B':
      num = B;
      break;
    case 'c':
    case 'C':
      num = C;
      break;
    case 'd':
    case 'D':
      num = D;
      break;
    case 'e':
    case 'E':
      num = E;
      break;
    case 'f':
    case 'F':
      num = F;
      break;
    case 'g':
    case 'G':
      num = G;
      break;
    case 'h':
    case 'H':
      num = H;
      break;
    case 'i':
    case 'I':
      num = I;
      break;
    case 'j':
    case 'J':
      num = J;
      break;
    case 'k':
    case 'K':
      num = K;
      break;
    case 'l':
    case 'L':
      num = L;
      break;
    case 'm':
    case 'M':
      num = M;
      break;
    case 'n':
    case 'N':
      num = N;
      break;
    case 'o':
    case 'O':
      num = O;
      break;
    case 'p':
    case 'P':
      num = P;
      break;
    case 'q':
    case 'Q':
      num = Q;
      break;
    case 'r':
    case 'R':
      num = R;
      break;
    case 's':
    case 'S':
      num = S;
      break;
    case 't':
    case 'T':
      num = T;
      break;
    case 'u':
    case 'U':
      num = U;
      break;
    case 'v':
    case 'V':
      num = V;
      break;
    case 'w':
    case 'W':
      num = W;
      break;
    case 'x':
    case 'X':
      num = X;
      break;
    case 'y':
    case 'Y':
      num = Y;
      break;
    case 'z':
    case 'Z':
      num = Z;
      break;
    case ' ':
      break;
    default:
      num = ch-'0';
  }
  
  for (int i = 0; i<5; ++i)
  {
    if (NUM_TABLE[num][i] != ' ')
    {
      digitalWrite(LED_PIN, HIGH);
      delay((NUM_TABLE[num][i]=='.')?DOT_TIME:DASH_TIME);
      digitalWrite(LED_PIN, LOW);
      delay(OFF_TIME);
    }
  }
}
