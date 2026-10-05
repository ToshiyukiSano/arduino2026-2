// dai2_4_signal_hinagata（第2回：ミニ信号機のひな形）
// 緑のブロック（3行）はできています。
// 緑のブロックをコピーして貼り付け、黄（D9）と赤（D8）のブロックを作ります。
// 変えるところ：ピンの番号と、待つ時間。
// 赤 D8 / 黄 D9 / 緑 D10

void setup() {
  pinMode(8, OUTPUT);       // 赤LED（D8）
  pinMode(9, OUTPUT);       // 黄LED（D9）
  pinMode(10, OUTPUT);      // 緑LED（D10）
}

void loop() {
  digitalWrite(10, HIGH);   // 緑をつける
  delay(3000);              // 3秒待つ
  digitalWrite(10, LOW);    // 緑を消す

  // ↓ ここに黄（D9）のブロックを作る（1秒）

  // ↓ ここに赤（D8）のブロックを作る（3秒）

}
