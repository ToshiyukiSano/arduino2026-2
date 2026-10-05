// dai2_4_signal_kansei（第2回：ミニ信号機の完成例）
// 緑 → 黄 → 赤 の順に、1個ずつつけます。
// 時間は授業用の設定です（実際の信号機の時間ではありません）。
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

  digitalWrite(9, HIGH);    // 黄をつける
  delay(1000);              // 1秒待つ
  digitalWrite(9, LOW);     // 黄を消す

  digitalWrite(8, HIGH);    // 赤をつける
  delay(3000);              // 3秒待つ
  digitalWrite(8, LOW);     // 赤を消す
}
