書籍「プログラミングコンテスト攻略のためのアルゴリズムとデータ構造」（通称?　螺旋本）の写経・他言語での実装チャレンジ

# Usage

## inputファイルを指定する場合

### Python3

``` console
# chap12-2 など chap => 章, 12-2 => 12.2
$ cd chapX-X

$ cat input/1.txt | ./answer.py
```

### Rust

``` console
$ cd chapX-X

$ cat input/1.txt | cargo run
```

## checkerスクリプトを使って OK / NG を判定

### Python3

``` console
$ ./checker chapX-X/answer.py
```

### Rust

``` console
$ cd chapX-X

# debug mode
$ cargo build

# release mode
$ cargo build --release
```

``` console
cd practice/algorithms_and_data_structures_for_programming_contest
$ ./checker chap10-4/target/debug/chap10-4 chap10-4/

# release mode
$ ./checker chap10-4/target/release/chap10-4 chap10-4/
```
