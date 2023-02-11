# mypkg
2022度のロボットシステム学の授業用リポジトリである。  
このリポジトリにはtalker.pyコマンドとlistener.pyコマンドがあります。  
また、このリポジトリはros2のパッケージです。
## talker.pyコマンドとlistener.pyコマンド
talker.pyがカウントした数字をlistener.pyが受け取り画面に表示させます。
## コマンドの使用方法
どちらか片方を作動させても出力はありません。両方を作動させたときlistener側に出力があります。  

1.端末を二つ用意します。  
2.片方の端末でtalker.pyを作動させます。  
`$ros2 run mypkg talker`  
3.もう片方の端末でlistener.pyを作動させます。  
`$ros2 run mypkg listener`  

### 出力
　
listener側  
`[INFO] [listener]: Listen: 1  
[INFO] [listener]: Listen: 2`


 
