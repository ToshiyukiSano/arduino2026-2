// dai2_8_light_kaizo_hinagata（第2回：光センサーの改造ワーク用ひな形）
// ① 400（点灯するかどうかの境目）を、自分で観察した数値をもとに変える。
// ② 暗いとき・明るいときの HIGH（つける）／LOW（消す）を書きかえる。
// どちらの場合も、3つのLEDすべてを書いておくと、前の光が残りません。
// 赤 D8 / 黄 D9 / 緑 D10 / 光センサーの測定点 A0

void setup() {
  pinMode(8, OUTPUT);                   // 赤LED（D8）
  pinMode(9, OUTPUT);                   // 黄LED（D9）
  pinMode(10, OUTPUT);                  // 緑LED（D10）
  Serial.begin(9600);                   // 数値をシリアルモニタで見る準備
}

void loop() {
  int lightValue = analogRead(A0);      // A0の数値を読む
  Serial.println(lightValue);           // 数値をPCに表示する

  if (lightValue < 400) {               // 境目より小さい（暗い）とき
    digitalWrite(8, HIGH);              // 赤
    digitalWrite(9, LOW);               // 黄
    digitalWrite(10, LOW);              // 緑
  } else {                              // 境目以上（明るい）とき
    digitalWrite(8, LOW);               // 赤
    digitalWrite(9, LOW);               // 黄
    digitalWrite(10, LOW);              // 緑
  }

  delay(200);                           // 0.2秒待つ
}
