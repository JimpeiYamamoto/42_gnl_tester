# get_next_lineのテスター
### 42tokyoの課題で作成する`get_next_line`の挙動を確認するのに使用可能です。
## 使い方
```bash
git clone git@github.com:JimpeiYamamoto/get_next_line_tester.git
```
```bash
cd get_next_line_tester
```
- ファイル名でテストする場合
```bash
./compile.sh
```
- 標準入力でテストする場合
```bash
./compile_stdin.sh
```
すると`gnl_tester`または`gnl_tester_stdin`が作成される。  
あとは、
```bash
./gnl_tester [test_srcs内の任意のファイル名]
```
で挙動を確認できる
