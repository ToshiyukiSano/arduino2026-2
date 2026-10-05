// dai2_3_led_check（第2回：3色LEDを1個ずつ点灯して、配線を確認する）
// 赤 D8 → 黄 D9 → 緑 D10 の順に、1個ずつ1秒ずつつきます。
// 順番どおりにつかないときは、配線（ピン番号・LEDの向き）を確認します。

void setup() {
  pinMode(8, OUTPUT);       // 赤LED（D8）
  pinMode(9, OUTPUT);       // 黄LED（D9）
  pinMode(10, OUTPUT);      // 緑LED（D10）
}

void loop() {
  digitalWrite(8, HIGH);    // 赤をつける
  delay(1000);
  digitalWrite(8, LOW);     // 赤を消す

  digitalWrite(9, HIGH);    // 黄をつける
  delay(1000);
  digitalWrite(9, LOW);     // 黄を消す

  digitalWrite(10, HIGH);   // 緑をつける
  delay(1000);
  digitalWrite(10, LOW);    // 緑を消す
}
