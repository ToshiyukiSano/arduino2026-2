// dai2_8_light_kaizo_kaitou（第2回：光センサーの改造ワーク 講師用の解答例）
// 解答例：暗いと赤、明るいと緑。
// 境目の 400 は例です。生徒が観察した数値に合わせて変えます。
//   少し暗くなっただけでつけたい → 境目を大きくする（明るいときの数値に近づける）
//   しっかり覆ったときだけつけたい → 境目を小さくする（暗いときの数値に近づける）

void setup() {
  pinMode(8, OUTPUT);                   // 赤LED（D8）
  pinMode(9, OUTPUT);                   // 黄LED（D9）
  pinMode(10, OUTPUT);                  // 緑LED（D10）
  Serial.begin(9600);
}

void loop() {
  int lightValue = analogRead(A0);
  Serial.println(lightValue);

  if (lightValue < 400) {               // 暗いとき
    digitalWrite(8, HIGH);              // 赤：つける
    digitalWrite(9, LOW);               // 黄：消す
    digitalWrite(10, LOW);              // 緑：消す
  } else {                              // 明るいとき
    digitalWrite(8, LOW);               // 赤：消す
    digitalWrite(9, LOW);               // 黄：消す
    digitalWrite(10, HIGH);             // 緑：つける
  }

  delay(200);
}
