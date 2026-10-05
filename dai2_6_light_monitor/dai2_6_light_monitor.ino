// dai2_6_light_monitor（第2回：光センサーの数値をPCで見る）
// 配線：5V → 光センサー → A0の測定点 → 10kΩ抵抗 → GND
// この配線では、明るいと数値が大きく、暗いと数値が小さくなります。
// 書き込んだあと、シリアルモニタを開き、通信速度を 9600 baud にします。

void setup() {
  Serial.begin(9600);                   // PCと通信する準備（9600 baud）
}

void loop() {
  int lightValue = analogRead(A0);      // A0の電圧に対応する数値を読む
  Serial.println(lightValue);           // 数値をPCへ送り、改行して表示する
  delay(200);                           // 0.2秒待つ
}
