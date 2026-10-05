// dai2_5_button_led（第2回：ボタンを押している間だけ赤LEDをつける）
// ボタン：D2 と GND の間（INPUT_PULLUP を使う）
// 離している → HIGH ／ 押している → LOW

void setup() {
  pinMode(8, OUTPUT);           // 赤LED（D8）を出力にする
  pinMode(2, INPUT_PULLUP);     // ボタン（D2）を入力にする（内部の抵抗でHIGHに保つ）
}

void loop() {
  int buttonState = digitalRead(2);   // D2の状態を読んで、buttonState に入れる

  if (buttonState == LOW) {     // 押しているとき（LOW）
    digitalWrite(8, HIGH);      // 赤をつける
  } else {                      // そうでないとき（離しているとき）
    digitalWrite(8, LOW);       // 赤を消す
  }
}
