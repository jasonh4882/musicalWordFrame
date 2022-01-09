#define BPM         104
#define MS_PER_BEAT 577

#define R0C0  2
#define R0C1  3
#define R0C2  4
#define R0C3  5
#define R0C4  6
#define R0C5  7
#define R0C6  8
#define R0C7  9

#define R1C0  10
#define R1C1  11
#define R1C2  12
#define R1C3  13
#define R1C4  0
#define R1C5  0
#define R1C6  0
#define R1C7  0

#define R2C0  14
#define R2C1  15
#define R2C2  16
#define R2C3  17
#define R2C4  0
#define R2C5  0
#define R2C6  0
#define R2C7  0

#define R3C0  18
#define R3C1  19
#define R3C2  20
#define R3C3  21
#define R3C4  0
#define R3C5  0
#define R3C6  0
#define R3C7  0

#define R4C0  22
#define R4C1  23
#define R4C2  24
#define R4C3  25
#define R4C4  26
#define R4C5  27
#define R4C6  0
#define R4C7  0

#define R5C0  28
#define R5C1  29
#define R5C2  30
#define R5C3  31
#define R5C4  32
#define R5C5  0
#define R5C6  0
#define R5C7  0

#define R6C0  33
#define R6C1  34
#define R6C2  35
#define R6C3  36
#define R6C4  37
#define R6C5  38
#define R6C6  0
#define R6C7  0

#define R7C0  39
#define R7C1  40
#define R7C2  41
#define R7C3  42
#define R7C4  43
#define R7C5  44
#define R7C6  45
#define R7C7  0

#define R8C0  A0
#define R8C1  A1
#define R8C2  A2
#define R8C3  A3
#define R8C4  A4
#define R8C5  A5
#define R8C6  A6
#define R8C7  0

#define R9C0  A7
#define R9C1  A8
#define R9C2  A9
#define R9C3  A10
#define R9C4  A11
#define R9C5  A12
#define R9C6  A13
#define R9C7  0

const char WORDPLACEMENT[10][8][10] = {{     "I",     "I'D",       "ONE",     "AND",     "YOU", "YOU'RE", "YOUR", "ME"},
                                        {  "CAUSE",     "THE",      "WANT",     "HUH",        "",       "",     "",   ""},
                                        {"DARLING",    "KISS",     "PAPER",   "RINGS",        "",       "",     "",   ""},
                                        {  "RIGHT",  "THAT'S",     "THREE",     "TWO",        "",       "",     "",   ""},
                                        {     "UH",       "A", "ACCIDENTS", "ALRIGHT",      "BE",    "BUT",     "",   ""},
                                        {  "DIRTY",  "DREAMS",    "EXCEPT",    "FOUR",    "FROM",       "",     "",   ""},
                                        { "FRAMES", "FRIENDS",     "GONNA",     "HAD",    "HATE",   "IT'S",     "",   ""},
                                        {   "KNOW",    "LIFE",      "LIKE",    "LONG",   "MARRY",  "NIGHT",   "OH",   ""},
                                        {   "ONCE", "PICTURE",     "SHINY",  "THINGS",    "THIS",  "TIMES",   "TO",   ""},
                                        {  "TWICE",  "WAITED",        "WE",    "WENT",    "WHEN",  "WHOLE", "WITH",   ""}};
                                    
const uint8_t LEDPINS[10][8] = {{R0C0, R0C1, R0C2, R0C3, R0C4, R0C5, R0C6, R0C7},
                                {R1C0, R1C1, R1C2, R1C3, R1C4, R1C5, R1C6, R1C7},
                                {R2C0, R2C1, R2C2, R2C3, R2C4, R2C5, R2C6, R2C7},
                                {R3C0, R3C1, R3C2, R3C3, R3C4, R3C5, R3C6, R3C7},
                                {R4C0, R4C1, R4C2, R4C3, R4C4, R4C5, R4C6, R4C7},
                                {R5C0, R5C1, R5C2, R5C3, R5C4, R5C5, R5C6, R5C7},
                                {R6C0, R6C1, R6C2, R6C3, R6C4, R6C5, R6C6, R6C7},
                                {R7C0, R7C1, R7C2, R7C3, R7C4, R7C5, R7C6, R7C7},
                                {R8C0, R8C1, R8C2, R8C3, R8C4, R8C5, R8C6, R8C7},
                                {R9C0, R9C1, R9C2, R9C3, R9C4, R9C5, R9C6, R9C7},};

const char LYRICS[92][10] = {"KISS",      "ME",   "ONCE", "CAUSE",     "YOU",   "KNOW",     "I",    "HAD",         "A",    "LONG",
                              "NIGHT",      "OH",   "KISS",    "ME",   "TWICE",  "CAUSE",  "IT'S",  "GONNA",        "BE", "ALRIGHT", 
                              "THREE",   "TIMES",  "CAUSE",  "I'VE",  "WAITED",     "MY", "WHOLE",   "LIFE",       "ONE",     "TWO", 
                                "ONE",     "TWO",  "THREE",  "FOUR",       "I",  "LIKE", "SHINY", "THINGS",       "BUT",     "I'D", 
                              "MARRY",     "YOU",   "WITH", "PAPER",   "RINGS",     "UH",   "HUH", "THAT'S",     "RIGHT", "DARLING", 
                             "YOU'RE",     "THE",    "ONE",     "I",    "WANT",    "AND",     "I",   "HATE", "ACCIDENTS",  "EXCEPT", 
                               "WHEN",      "WE",   "WENT",  "FROM", "FRIENDS",     "TO",  "THIS",     "UH",       "HUH",  "THAT'S", 
                              "RIGHT", "DARLING", "YOU'RE",   "THE",     "ONE",      "I",  "WANT",    "AND",     "PAPER",   "RINGS", 
                                "AND", "PICTURE", "FRAMES",   "AND",   "DIRTY", "DREAMS",    "OH", "YOU'RE",       "THE",     "ONE", 
                                  "I",    "WANT"};

const uint16_t TIMING[92] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
                             1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
                             1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
                             1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
                             1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
                             1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
                             1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
                             1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
                             1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
                             1, 1};

const bool CLEAR[92] = {false,  true,  true,  true,  true,  true,  true,  true,  true,  true,
                         true, false,  true,  true,  true,  true,  true,  true,  true,  true,
                         true,  true,  true,  true,  true,  true,  true,  true,  true, false,
                         true, false, false, false,  true,  true,  true,  true,  true,  true,
                         true,  true,  true,  true, false,  true, false,  true, false,  true,
                         true,  true,  true,  true,  true,  true,  true,  true,  true,  true,
                         true,  true,  true,  true,  true,  true,  true,  true, false,  true,
                        false,  true,  true,  true,  true,  true,  true,  true,  true, false,
                         true,  true, false,  true,  true, false,  true,  true,  true,  true,
                         true,  true};

uint64_t timer;

//void lightControl(uint8_t index, uint8_t row, uint8_t col){
//  if(CLEAR[index]){
//    for(uint8_t j = 0; j < 10; j++){
//      for(uint8_t k = 0; k < 8; k++){
//        digitalWrite(LEDPINS[j][k] , LOW);
//      }
//    }
//  }
//  digitalWrite(LEDPINS[row][col] , HIGH);\
//}

void setup() {
  Serial.begin(9600);
  bool match = false;
  uint8_t r = 0;
  uint8_t c = 0;
  
  uint16_t delayTime = 0;
  
  for(uint8_t i = 0; i < 92; i++){
    for(uint8_t j = 0; j < 10; j++){
      for(uint8_t k = 0; k < 8; k++){
        for(uint8_t l = 0; l < 10; l++){
          if(LYRICS[i][l] == WORDPLACEMENT[j][k][l]){
            if(LYRICS[i][l+1] == "" || l == 9){
              match = true;
              r = j;
              c = k;
              break;
            }
          }else{
            break;
          }
        }
        if(match) break;
      }
      if(match) break;
    }
//    lightControl(i, r, c);
    Serial.print(LYRICS[i][0]);
    Serial.print(LYRICS[i][1]);
    Serial.println(LYRICS[i][2]);
    delayTime = (TIMING[i] * (MS_PER_BEAT/2)) + millis();
    while(millis() < delayTime);
    match = false;
  }
}

void loop() {
  // PUT YOUR MAIN CODE HERE, TO RUN REPEATEDLY:
}
