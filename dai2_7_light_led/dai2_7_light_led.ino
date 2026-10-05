// dai2_7_light_led（第2回：暗くなると赤LEDがつく）
// 赤LED：D8（1時間目の配線）／光センサーの測定点：A0
// 400 は例です。自分で観察した「明るいとき」と「暗いとき」の数値の間に変えます。

void setup() {
  pinMode(8, OUTPUT);                   // 赤LED（D8）を出力にする
  Serial.begin(9600);                   // 数値をシリアルモニタで見る準備
}

void loop() {
  int lightValue = analogRead(A0);      // A0の数値を読む
  Serial.println(lightValue);           // 数値をPCに表示する

  if (lightValue < 400) {               // 400より小さい（暗い）とき
    digitalWrite(8, HIGH);              // 赤をつける
  } else {                              // そうでない（明るい）とき
    digitalWrite(8, LOW);               // 赤を消す
  }

  delay(200);                           // 0.2秒待つ
}
