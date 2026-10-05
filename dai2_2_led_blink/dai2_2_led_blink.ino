// dai2_2_led_blink（第2回：外付けLEDを点滅させる）
// 配線：D8 → 1kΩ抵抗 → 赤LED → GND

void setup() {
  pinMode(8, OUTPUT);       // D8ピンを「出力」にする
}

void loop() {
  digitalWrite(8, HIGH);    // 赤LEDをつける
  delay(1000);              // 1000ミリ秒（1秒）待つ ← 点灯の時間
  digitalWrite(8, LOW);     // 赤LEDを消す
  delay(1000);              // 1000ミリ秒（1秒）待つ ← 消灯の時間
}
