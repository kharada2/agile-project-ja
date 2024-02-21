# アジャイル開発グループプロジェクト

## 使い方

### ビルド
```
g++ -std=c++17 main.cpp math_operations.cpp -o math_operations
```

### 実行
```
./math_operations
```
### 概要説明
加算、減算、乗算、除算、平方根演算、指数演算、前回の演算結果をもとにさらに前述の演算を行うプログラム。
- 加算、減算、乗算、除算、指数演算を行う場合は２つの数字と演算子を”数値１（空白）演算子（空白）数値２”の順に入力する<br>（例：1 + 2）
- 各演算子は以下の通り
  - 加算：+
  - 減算：-
  - 乗算：*
  - 除算：/
  - 平方根演算：r
  - 指数演算：^
- 平方根演算時は数値２は無視され数値１の平方根を演算する（数値２は無視される）
- 演算が完了ごとに演算を継続するか選択でき、”c”を入力すれば継続、”e”を入力すれば演算を継続する
- 演算継続時は１つの数字と演算子を”演算子（空白）数値”の順に入力する（例：+ 2）

<br>

## テスト

### ビルド
```
g++ -std=c++17 test.cpp math_operations.cpp -o test
```

### 実行
```
./test
```
