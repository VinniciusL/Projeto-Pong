
// =============================================================================================================
// --- Declaração dos Caracteres Customizados ---


// =============================================================================================================
// -- Caracteres para a Parede --
byte wallA[8] = {
  0b00011,
  0b00011,
  0b00011,
  0b00011,
  0b00011,
  0b00011,
  0b00011,
  0b00011
};

byte wallB[8] = {
  0b00011,
  0b00011,
  0b00011,
  0b00011,
  0b00011,
  0b00011,
  0b00011,
  0b00011
};

// =============================================================================================================
// -- Caracteres para o Jogador --
byte paddle1[8] = {
  0b10000,
  0b10000,
  0b10000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000
};

byte paddle2[8] = {
  0b00000,
  0b10000,
  0b10000,
  0b10000,
  0b00000,
  0b00000,
  0b00000,
  0b00000
};

byte paddle3[8] = {
  0b00000,
  0b00000,
  0b10000,
  0b10000,
  0b10000,
  0b00000,
  0b00000,
  0b00000
};

byte paddle4[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b10000,
  0b10000,
  0b10000,
  0b00000,
  0b00000
};

byte paddle5[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b10000,
  0b10000,
  0b10000,
  0b00000
};

byte paddle6[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b10000,
  0b10000,
  0b10000
};

byte paddle7a[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b10000,
  0b10000
};

byte paddle7b[8] = {
  0b10000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000
};

byte paddle8a[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b10000
};

byte paddle8b[8] = {
  0b10000,
  0b10000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000
};

// =============================================================================================================
// -- Caracteres para a Bola --

// Linha 1, Cada coluna
byte ball00[8] = {
  0b10000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000  
};

byte ball01[8] = {
  0b01000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000  
};

byte ball02[8] = {
  0b00100,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000  
};

byte ball03[8] = {
  0b00010,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000  
};

byte ball04[8] = {
  0b00001,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000  
};

// Linha 2, Cada coluna
byte ball10[8] = {
  0b00000,
  0b10000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000  
};

byte ball11[8] = {
  0b00000,
  0b01000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000  
};

byte ball12[8] = {
  0b00000,
  0b00100,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000  
};

byte ball13[8] = {
  0b00000,
  0b00010,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000  
};

byte ball14[8] = {
  0b00000,
  0b00001,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000  
};

// Linha 3, Cada coluna
byte ball20[8] = {
  0b00000,
  0b00000,
  0b10000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000  
};

byte ball21[8] = {
  0b00000,
  0b00000,
  0b01000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000  
};

byte ball22[8] = {
  0b00000,
  0b00000,
  0b00100,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000  
};

byte ball23[8] = {
  0b00000,
  0b00000,
  0b00010,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000  
};

byte ball24[8] = {
  0b00000,
  0b00000,
  0b00001,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000  
};

// Linha 4, Cada coluna
byte ball30[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b10000,
  0b00000,
  0b00000,
  0b00000,
  0b00000  
};

byte ball31[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b01000,
  0b00000,
  0b00000,
  0b00000,
  0b00000  
};

byte ball32[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00100,
  0b00000,
  0b00000,
  0b00000,
  0b00000  
};

byte ball33[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00010,
  0b00000,
  0b00000,
  0b00000,
  0b00000  
};

byte ball34[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00001,
  0b00000,
  0b00000,
  0b00000,
  0b00000  
};

// Linha 5, Cada coluna
byte ball40[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b10000,
  0b00000,
  0b00000,
  0b00000  
};

byte ball41[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b01000,
  0b00000,
  0b00000,
  0b00000  
};

byte ball42[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00100,
  0b00000,
  0b00000,
  0b00000  
};

byte ball43[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00010,
  0b00000,
  0b00000,
  0b00000  
};

byte ball44[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00001,
  0b00000,
  0b00000,
  0b00000  
};

// Linha 6, Cada coluna
byte ball50[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b10000,
  0b00000,
  0b00000  
};

byte ball51[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b01000,
  0b00000,
  0b00000  
};

byte ball52[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00100,
  0b00000,
  0b00000  
};

byte ball53[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00010,
  0b00000,
  0b00000  
};

byte ball54[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00001,
  0b00000,
  0b00000  
};

// Linha 7, Cada coluna
byte ball60[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b10000,
  0b00000  
};

byte ball61[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b01000,
  0b00000  
};

byte ball62[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00100,
  0b00000  
};

byte ball63[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00010,
  0b00000  
};

byte ball64[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00001,
  0b00000  
};

// Linha 8, Cada coluna
byte ball70[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b10000  
};

byte ball71[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b01000  
};

byte ball72[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00100  
};

byte ball73[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00010  
};

byte ball74[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00001  
};

// =============================================================================================================
// --- Bibliotecas Auxiliares ---

#include <Wire.h> //INCLUSÃO DE BIBLIOTECA
#include <LiquidCrystal_I2C.h> //INCLUSÃO DE BIBLIOTECA DO MODULOI2C

// =============================================================================================================
// --- Hardware do LCD ---

// --- Utilização do MODULOI2C para mostrar o jogo --- #1 Mudança
LiquidCrystal_I2C lcd(0x3F,2,1,0,4,5,6,7,3, POSITIVE);

// Pinos do Arduino
const int compPoint1 = 5;             // LED1
const int compPoint2 = 6;             // LED2
const int compPoint3 = 7;             // LED3
const int button = 9;                 // Botão

// Variáveis Globais
int upDownDir;                        // Cima/Baixo - Estado da bola.
int leftRightDir;                     // Esquerda/Direita - Estado da Bola. 
int angle;                            // Ângulo Horizontal - Eixo X que a bola viaja.
int pontuacao = 0x00;                 // Pontuação.
float azimuth;                        // Ângulo no sentido horário vertical - Eixo Y que a bola viaja.
boolean gameStarted;                  // Estado do jogo.
int paddlePos;                        // Posição que o jogador mexerá a raquete (14 posições possíveis).
int ballPos[2];                       // X, Y coordenadas da bola.
int points;                           // Controle de vidas que o usuário tem (Jogador possui somente 3).
float distance;                       // Distâncias das posições sucessivas da bola.
float totalDistance;                  // Distância total do último ponto da bola para calcular a trajetória da bola.

// Variáveis de controle do jogo
float speedIncreasePercent = 20;      // Aumentar a velocidade da bola em porcentagem(%) cada vez que tocar na raquete.
int gameAngleMin = 10;                // Trajetória mínima do ângulo da bola.
int gameAngleMax = 50;                // Trajetória máxima do ângulo da bola.
float initialDist = 1.0;              // Valor inicial da distância no início do jogo.

void setup() {
  gameStarted = false;
  // Número de linhas e colunas do LCD. 
  lcd.begin(16, 2);
  
  // LED's - Saídas e desligando eles.
  pinMode(compPoint1, OUTPUT);
  pinMode(compPoint2, OUTPUT);
  pinMode(compPoint3, OUTPUT);
  digitalWrite(compPoint1, LOW);
  digitalWrite(compPoint2, LOW);
  digitalWrite(compPoint3, LOW);

  // Definindo o botão.
  pinMode(button, INPUT_PULLUP);

  // Calculando a trajetória do ângulo inicial da bola.
  calcInitialDir();
  
  // Posição inicial da bola no centro da tela.
  ballPos[0] = 39;
  ballPos[1] = 7;
  
  // Variáveis de controle.
  distance = initialDist;
  totalDistance = distance;
  points = 0;
  
  // Mensagem inicial dizendo ao jogador para apertar o botão e iniciar o jogo.
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Aperte o botao  ");
  lcd.setCursor(0,1);
  lcd.print("para iniciar!!! ");
}

void loop() {
  
  // Status do jogo.
  if (gameStarted == true)    // Jogo começou.
  {
    ballUpdate();                // Atualizar a posição da bola.
    
    // Verificando as três(3) vidas.
    if (gameStarted == true) {
      playerPaddleUpdate();        // Atualizando a posição da raquete do jogador.
      
      // Verificação do botão para reiniciar o jogo.
      if (digitalRead(button) == LOW) {
        delay(250);
        setup();
      }
    }
    delay(100);
  }
  else                        // Jogo não foi iniciado.
  { 
    // Verificar se o botão foi apertado.
    if (digitalRead(button) == LOW)
    {
      // Iniciando o jogo.
      gameStarted = true;
      drawInitial();
    }
  }

  
}

// Função do estado inicial da tela do jogo (Visual do jogo no LCD).
void drawInitial() {
  lcd.clear();
      
  // Desenho do muro do jogo.
  lcd.createChar(0, wallA); 
  lcd.setCursor(0,0);
  lcd.write((byte)0);
  lcd.createChar(1, wallB);
  lcd.setCursor(0,1);
  lcd.write(1);

  // Desenho da bola na posição inicial pré-definida.
  lcd.createChar(2, ball04);
  lcd.setCursor(7,1);
  lcd.write(2); 
  delay(250);
}

// Função para a tragetória da bola.
void calcInitialDir() {
 // Randomicamente 1 ou -1 para as direção da bola (cima/baixo e esquerda/direita) e ângulo de deslocamento no eixo X.  
  upDownDir = 0;
  leftRightDir = 0;
  while (upDownDir == 0) {
    upDownDir = random(-1,2);
  }
  while (leftRightDir == 0) {
    leftRightDir = random(-1,2);
  }
  // Utilizando um ângulo aleatório entre os valores mínimo e máximo.
  randomSeed(analogRead(1));
  angle = random(gameAngleMin,gameAngleMax + 1);

}

// Função para atualizar a posição da raquete do jogador com base no valor do potenciômetro.
void playerPaddleUpdate() {
    // Lendo A0 para posição da raquete.
    int potReading = analogRead(A0);
    // Mapear e restringir o valor das 14 posições possíveis da raquete.
    paddlePos = constrain(map(potReading, 0, 950, 1, 14), 1, 14);
    
    // Limpar a raquete.
    lcd.setCursor(15,0);
    lcd.print(" ");
    lcd.setCursor(15,1);
    lcd.print(" ");
   
    //Desenho da nova posição da raquete no LCD.
    if (paddlePos == 1)
    {
      lcd.createChar(6, paddle6);
      lcd.setCursor(15,1);
      lcd.write(6);
    }
    else if (paddlePos == 2)
    {
      lcd.createChar(7, paddle5);
      lcd.setCursor(15,1);
      lcd.write(7);
    }
    else if (paddlePos == 3)
    {
      lcd.createChar(6, paddle4);
      lcd.setCursor(15,1);
      lcd.write(6);
    }
    else if (paddlePos == 4)
    {
      lcd.createChar(7, paddle3);
      lcd.setCursor(15,1);
      lcd.write(7);
    }
    else if (paddlePos == 5)
    {
      lcd.createChar(6, paddle2);
      lcd.setCursor(15,1);
      lcd.write(6);
    }
    else if (paddlePos == 6)
    {
      lcd.createChar(7, paddle1);
      lcd.setCursor(15,1);
      lcd.write(7);
    }
    else if (paddlePos == 7)
    {
      lcd.createChar(6, paddle8a);
      lcd.setCursor(15,0);
      lcd.write(6);
      lcd.createChar(7, paddle8b);
      lcd.setCursor(15,1);
      lcd.write(7);
    }
    else if (paddlePos == 8)
    {
      lcd.createChar(6, paddle7a);
      lcd.setCursor(15,0);
      lcd.write(6);
      lcd.createChar(7, paddle7b);
      lcd.setCursor(15,1);
      lcd.write(7);
    }
    else if (paddlePos == 9)
    {
      lcd.createChar(6, paddle6);
      lcd.setCursor(15,0);
      lcd.write(6);
    }
    else if (paddlePos == 10)
    {
      lcd.createChar(7, paddle5);
      lcd.setCursor(15,0);
      lcd.write(7);
    }
    else if (paddlePos == 11)
    {
      lcd.createChar(6, paddle4);
      lcd.setCursor(15,0);
      lcd.write(6);
    }
    else if (paddlePos == 12)
    {
      lcd.createChar(7, paddle3);
      lcd.setCursor(15,0);
      lcd.write(7);
    }
    else if (paddlePos == 13)
    {
      lcd.createChar(6, paddle2);
      lcd.setCursor(15,0);
      lcd.write(6);
    }
    else if (paddlePos == 14)
    {
      lcd.createChar(7, paddle1);
      lcd.setCursor(15,0);
      lcd.write(7);
    }
}

// Função para atualização da posição da bola no LCD.
void ballUpdate() {

  // Calculo do ângulo no sentido horário vertical da bola.
  if (upDownDir == 1 && leftRightDir == -1)
  {
    azimuth = 90 - angle;
  }
  else if (upDownDir == -1 && leftRightDir == -1)
  {
    azimuth = 90 + angle;
  }
  else if (upDownDir == -1 && leftRightDir == 1)
  {
    azimuth = 270 - angle;
  }
  else
  {
    azimuth = 270 + angle;
  }
  // Conversão graus → radianos.
  azimuth = azimuth * PI / 180.0;
  
  // Solução da nova posição da bola.
  int newX = sin(azimuth) * totalDistance + (float)ballPos[0];
  int newY = cos(azimuth) * totalDistance + (float)ballPos[1]; 

  // Restrição da bola no quadro do LED.
  newX = constrain(newX, 5, 75);
  newY = constrain(newY, 0, 15);
  
  // Atualização da distância total da bola até seu último ponto no jogo. 
  totalDistance = totalDistance + distance;  
  
  // Checando se a bola atingiu os limites superior/inferior. Caso sim, atualiza o valor da sua posição.  
  if (newY == 0)      // Atingindo a parte de baixo.
  {
    upDownDir = 1; 
    totalDistance = distance;
    ballPos[0] = newX;
    ballPos[1] = newY + 1;
  }
  else if (newY == 15)  // Atingindo a parte de cima.
  {
    upDownDir = -1;
    totalDistance = distance;
    ballPos[0] = newX;
    ballPos[1] = newY - 1;
  } 
  
  // Checando se a bola atingiu os limites esquerda/direita. Caso sim, atualiza o valor da sua posição.
  if (newX == 5)      // Atingindo o muro.
  { 
    pontuacao++;
    
    leftRightDir = -1;
    totalDistance = distance;
    ballPos[0] = newX + 1;
    ballPos[1] = newY;
  }
  else if (newX == 75)  // Atingindo os limites da quadra.
  {
    // Toda vez que a bola tocar a raquete a mesma receberá aumento de velocidade.
    distance = (1.0 + speedIncreasePercent / 100.0) * distance;
    
    // Verificação se a raquete está na posição correta para rebater a bola.
    if (newY == 0 && (paddlePos == 1 || paddlePos == 2)) {
      hitPaddleUpdate(newX, newY);
    }
    else if (newY == 1 && (paddlePos == 1 || paddlePos == 2 || paddlePos == 3)) {
      hitPaddleUpdate(newX, newY);
    }
    else if (newY == 2 && (paddlePos == 1 || paddlePos == 2 || paddlePos == 3 || paddlePos == 4)) {
      hitPaddleUpdate(newX, newY);
    }
    else if (newY == 3 && (paddlePos == 1 || paddlePos == 2 || paddlePos == 3 || paddlePos == 4 || paddlePos == 5)) {
      hitPaddleUpdate(newX, newY);
    }
    else if (newY == 4 && (paddlePos == 2 || paddlePos == 3 || paddlePos == 4 || paddlePos == 5 || paddlePos == 6)) {
      hitPaddleUpdate(newX, newY);
    }
    else if (newY == 5 && (paddlePos == 3 || paddlePos == 4 || paddlePos == 5 || paddlePos == 6 || paddlePos == 7)) {
      hitPaddleUpdate(newX, newY);
    }
    else if (newY == 6 && (paddlePos == 4 || paddlePos == 5 || paddlePos == 6 || paddlePos == 7 || paddlePos == 8)) {
      hitPaddleUpdate(newX, newY);
    }
    else if (newY == 7 && (paddlePos == 5 || paddlePos == 6 || paddlePos == 7 || paddlePos == 8 || paddlePos == 9)) {
      hitPaddleUpdate(newX, newY);
    }
    else if (newY == 8 && (paddlePos == 6 || paddlePos == 7 || paddlePos == 8 || paddlePos == 9 || paddlePos == 10)) {
      hitPaddleUpdate(newX, newY);
    }
    else if (newY == 9 && (paddlePos == 7 || paddlePos == 8 || paddlePos == 9 || paddlePos == 10 || paddlePos == 11)) {
      hitPaddleUpdate(newX, newY);
    }
    else if (newY == 10 && (paddlePos == 8 || paddlePos == 9 || paddlePos == 10 || paddlePos == 11 || paddlePos == 12)) {
      hitPaddleUpdate(newX, newY);
    }
    else if (newY == 11 && (paddlePos == 9 || paddlePos == 10 || paddlePos == 11 || paddlePos == 12 || paddlePos == 13)) {
      hitPaddleUpdate(newX, newY);
    }
    else if (newY == 12 && (paddlePos == 10 || paddlePos == 11 || paddlePos == 12 || paddlePos == 13 || paddlePos == 14)) {
      hitPaddleUpdate(newX, newY);
    }
    else if (newY == 13 && (paddlePos == 11 || paddlePos == 12 || paddlePos == 13 || paddlePos == 14)) {
      hitPaddleUpdate(newX, newY);
    }
    else if (newY == 14 && (paddlePos == 12 || paddlePos == 13 || paddlePos == 14)) {
      hitPaddleUpdate(newX, newY);
    }
    else if (newY == 15 && (paddlePos == 13 || paddlePos == 14)) {
      hitPaddleUpdate(newX, newY);
    }
    // A bola passou dos limites da quadra.
    else {    
      // Redefinição da posição da bola e o controle das variáveis para o próximo ponto.
      ballPos[0] = 39;
      ballPos[1] = 7;
      totalDistance = distance;
      drawInitial();
      // Determinando um novo ângulo de jogo para o ponto.
      calcInitialDir();
      points++;
      
      // Ponto marcado pelo computador. LED pisca.
      if (points == 1) {
        for (int i = 0; i < 5; i++) {
          digitalWrite(compPoint1, HIGH);
          delay(250);
          digitalWrite(compPoint1, LOW);
          delay(250);
        }
        digitalWrite(compPoint1, HIGH);
      }
      else if (points == 2) {
        for (int i = 0; i < 5; i++) {
          digitalWrite(compPoint2, HIGH);
          delay(250);
          digitalWrite(compPoint2, LOW);
          delay(250);
        }
        digitalWrite(compPoint2, HIGH);
      }
      // Fim do jogo. Jogador perdeu as três(3) vidas ( No caso são os pontos marcados pelo computador).
      else if (points == 3) {
        gameStarted = false;
        
        // Mostrando o "Game Over" após perder as três(3) vidas.
        lcd.clear();
        lcd.setCursor(0,0);
        lcd.print("      GAME      ");
        lcd.setCursor(0,1);
        lcd.print("      OVER      ");

        delay(2000);
        lcd.clear();
        delay(50);

        // Mostrando o "Número de pontos" após perder as três(3) vidas no LED.
        lcd.setCursor(0,0);
        lcd.print("Numero de pontos");
        // Mostrando a pontuação feita.
        lcd.setCursor(4,1);
        lcd.print(pontuacao);
        
        for (int i = 0; i < 5; i++) {
          digitalWrite(compPoint1, HIGH);
          digitalWrite(compPoint2, HIGH);
          digitalWrite(compPoint3, HIGH);
          delay(250);
          digitalWrite(compPoint1, LOW);
          digitalWrite(compPoint2, LOW);
          digitalWrite(compPoint3, LOW);
          delay(250);
        }
        digitalWrite(compPoint1, HIGH);
        digitalWrite(compPoint2, HIGH);
        digitalWrite(compPoint3, HIGH);
        pontuacao = 0x00;
        delay(250);
        
        // Jogo é reiniciado para o estado inicial, caso o usuário queira jogar novamente.
        setup();
      }
    }
  }
  
  // Verificando se o jogo foi iniciado e atualizando o caractere da bola no LCD.
  if (gameStarted == true) {
  drawChars(newX, newY);
  }
}

// Função de atualização após a bola bater na raquete do jogador.
void hitPaddleUpdate(int X, int Y) {
  leftRightDir = 1;
  totalDistance = distance;
  ballPos[0] = X - 1;
  ballPos[1] = Y;
}

// Função para determinar qual caracter personalizado do LCD deve ser desenhado, e onde, no LCD.
void drawChars(int X, int Y) {
  int LCDrow;
  int LCDcol;
  
  // Determinando em qual linha do LCD a bola está.
  if (Y <= 7) {
    LCDrow = 1;
  }
  else {
    LCDrow = 0;
  }
  
  // Determinando em qual coluna do LCD a bola está.
  if (X <= 4) {
    LCDcol = 0;
  }
  else if (X <= 9) {
    LCDcol = 1;
  }
  else if (X <= 14) {
    LCDcol = 2;
  }
  else if (X <= 19) {
    LCDcol = 3;
  }
  else if (X <= 24) {
    LCDcol = 4;
  }
  else if (X <= 29) {
    LCDcol = 5;
  }
  else if (X <= 34) {
    LCDcol = 6;
  }
  else if (X <= 39) {
    LCDcol = 7;
  }
  else if (X <= 44) {
    LCDcol = 8;
  }
  else if (X <= 49) {
    LCDcol = 9;
  }
  else if (X <= 54) {
    LCDcol = 10;
  }
  else if (X <= 59) {
    LCDcol = 11;
  }
  else if (X <= 64) {
    LCDcol = 12;
  }
  else if (X <= 69) {
    LCDcol = 13;
  }
  else if (X <= 74) {
    LCDcol = 14;
  }
  else {
    LCDcol = 15;
  }
  
  // Limpando o LCD da bola anterior. Raquete e parede não tem alteração aqui.
  lcd.setCursor(1,0);
  lcd.print("              ");
  lcd.setCursor(1,1);
  lcd.print("              ");
  
  // Determinando a posição da bola em um único pixel do LCD.
  int dx = X - 5 * LCDcol;    // Column position within the LCD character
  int dy;
  
  // Posição do caractere na linha do LCD.
  if (Y == 0 || Y == 8) {
    dy = 0;
  }
  else if (Y == 1 || Y == 9) {
    dy = 1;
  }
  else if (Y == 2 || Y == 10) {
    dy = 2;
  }
  else if (Y == 3 || Y == 11) {
    dy = 3;
  }
  else if (Y == 4 || Y == 12) {
    dy = 4;
  }
  else if (Y == 5 || Y == 13) {
    dy = 5;
  }
  else if (Y == 6 || Y == 14) {
    dy = 6;
  }
  else if (Y == 7 || Y == 15) {
    dy = 7;
  }

  // Seleção do caractere personalizado correto e depois exibindo.
  // Designação alternativa dos caracteres personalizados para os bytes do LCD 1,2,3,4 e 5.
  if (dx == 0 && dy == 0) {
   lcd.createChar(2, ball70);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(2);
  }
  else if (dx == 1 && dy == 0) {
   lcd.createChar(2, ball71);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(2);
  }
  else if (dx == 2 && dy == 0) {
   lcd.createChar(2, ball72);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(2);
  }
  else if (dx == 3 && dy == 0) {
   lcd.createChar(2, ball73);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(2);
  }
  else if (dx == 4 && dy == 0) {
   lcd.createChar(2, ball74);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(2);
  }
  
  else if (dx == 0 && dy == 1) {
   lcd.createChar(3, ball60);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(3);
  }
  else if (dx == 1 && dy == 1) {
   lcd.createChar(3, ball61);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(3);
  }
  else if (dx == 2 && dy == 1) {
   lcd.createChar(3, ball62);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(3);
  }
  else if (dx == 3 && dy == 1) {
   lcd.createChar(3, ball63);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(3);
  }
  else if (dx == 4 && dy == 1) {
   lcd.createChar(3, ball64);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(3);
  }
  
  else if (dx == 0 && dy == 2) {
   lcd.createChar(4, ball50);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(4);
  }
  else if (dx == 1 && dy == 2) {
   lcd.createChar(4, ball51);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(4);
  }
  else if (dx == 2 && dy == 2) {
   lcd.createChar(4, ball52);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(4);
  }
  else if (dx == 3 && dy == 2) {
   lcd.createChar(4, ball53);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(4);
  }
  else if (dx == 4 && dy == 2) {
   lcd.createChar(4, ball54);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(4);
  }
  
  else if (dx == 0 && dy == 3) {
   lcd.createChar(5, ball40);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(5);
  }
  else if (dx == 1 && dy == 3) {
   lcd.createChar(5, ball41);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(5);
  }
  else if (dx == 2 && dy == 3) {
   lcd.createChar(5, ball42);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(5);
  }
  else if (dx == 3 && dy == 3) {
   lcd.createChar(5, ball43);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(5);
  }
  else if (dx == 4 && dy == 3) {
   lcd.createChar(5, ball44);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(5);
  }
  
  else if (dx == 0 && dy == 4) {
   lcd.createChar(2, ball30);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(2);
  }
  else if (dx == 1 && dy == 4) {
   lcd.createChar(2, ball31);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(2);
  }
  else if (dx == 2 && dy == 4) {
   lcd.createChar(2, ball32);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(2);
  }
  else if (dx == 3 && dy == 4) {
   lcd.createChar(2, ball33);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(2);
  }
  else if (dx == 4 && dy == 4) {
   lcd.createChar(2, ball34);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(2);
  }
  
  else if (dx == 0 && dy == 5) {
   lcd.createChar(3, ball20);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(3);
  }
  else if (dx == 1 && dy == 5) {
   lcd.createChar(3, ball21);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(3);
  }
  else if (dx == 2 && dy == 5) {
   lcd.createChar(3, ball22);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(3);
  }
  else if (dx == 3 && dy == 5) {
   lcd.createChar(3, ball23);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(3);
  }
  else if (dx == 4 && dy == 5) {
   lcd.createChar(3, ball24);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(3);
  }
  
  else if (dx == 0 && dy == 6) {
   lcd.createChar(4, ball10);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(4);
  }
  else if (dx == 1 && dy == 6) {
   lcd.createChar(4, ball11);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(4);
  }
  else if (dx == 2 && dy == 6) {
   lcd.createChar(4, ball12);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(4);
  }
  else if (dx == 3 && dy == 6) {
   lcd.createChar(4, ball13);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(4);
  }
  else if (dx == 4 && dy == 6) {
   lcd.createChar(4, ball14);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(4);
  }
  
  else if (dx == 0 && dy == 7) {
   lcd.createChar(5, ball00);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(5);
  }
  else if (dx == 1 && dy == 7) {
   lcd.createChar(5, ball01);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(5);
  }
  else if (dx == 2 && dy == 7) {
   lcd.createChar(5, ball02);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(5);
  }
  else if (dx == 3 && dy == 7) {
   lcd.createChar(5, ball03);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(5);
  }
  else if (dx == 4 && dy == 7) {
   lcd.createChar(5, ball04);
   lcd.setCursor(LCDcol, LCDrow);
   lcd.write(5);
  }
}
