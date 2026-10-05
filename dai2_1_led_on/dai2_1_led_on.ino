// dai2_1_led_on（第2回：外付けLEDを1個つける）
// 配線：D8 → 1kΩ抵抗 → 赤LEDのアノード（長い脚）→ カソード（短い脚）→ GND
// 「//」から右は人が読むための説明（コメント）です。実行されません。

void setup() {
  pinMode(8, OUTPUT);       // D8ピンを「出力」にする
  digitalWrite(8, HIGH);    // D8をHIGHにする → 赤LEDがつく
}

void loop() {
  // 何もしない（赤LEDはついたまま）
}
