= 非エンジニアの人から「アジャイルって早く作れるんでしょ？」って聞かれたときの私の一次回答

//flushright{
荒川健太郎@
//}

== 「アジャイルって早く作れるんでしょ？」



筆者はソフトウェアの開発に携わっていない社内の人とも幅広く関わっているのですが、先日いわゆる「非エンジニア」な仲間との雑談中にこんなことを聞かれました。


仲間「アジャイルって早く作れるんでしょ？」


筆者「う、うーん…（どう返答したらよいのだろう）」


しばらく言葉に詰まった筆者は、


筆者「ちょっと10分くらい時間もらって解説してよいですか？」


と前置きしてその人にも伝わるようにアジャイルについて解説しました。
その内容をまとめたものが今回の記事です。

=== 「早く作れる」とは何か？


「アジャイル」という言葉は本当に厄介（親しみを込めて）で、ちゃんと解説しようとするととても10分では解説できません。
もっというと筆者自身がすべてを理論立てて解説できるとは言い切れない部分もあります。


したがって今回の解説については「早く作れるんでしょ？」の問いに対する答えだけに注力しました。
（アジャイルとアジャイル開発はちがうだとか、アジャイルはプロセスじゃないとかそういったことはひとまず横に置いておきます）


まず筆者はその仲間に「早く作れる」の「早く」のイメージを確認しました。

 * @<strong>{とりあえず動く（バージョン0.1のような）状態のモノが早く完成するのか}
 * @<strong>{企画段階で盛り込んだ機能がすべて備わっている（いわゆるバージョン1.0相当な）状態のモノが早く完成するのか}



仲間の回答は「後者」とのことでした。
やっぱりそうかと思った筆者は、少し前の新人研修で使った資料を使いながら解説を開始しました。

=== どっちのプロセスが正しいか


「ウォーターフォールとアジャイルは対となる概念ではない」ということは踏まえたうえで、あえて今回はウォーターフォールと対比しています。

〓図4.1〓は、上下でちがうプロセスを踏んで同じプロダクトが完成させたことを表した図です。
両プロセスとも一番右のプレゼントアイコンが完成品（バージョン1.0）であると認識ください。
そして仮定の話として、この完成品はとてもよく出来ていて、ビジネス的に大成功（売上がとてもよい）といえるクオリティのモノであるとイメージしてください。


//image[1][ウォーターフォールな感じで成功した世界線][scale=0.9]





さて「アジャイルがよいぞ、アジャイルがよいぞ」といわれて久しい昨今、どちらのプロセスが正しいといえるでしょうか。


答えは、
@<strong>{どちらも正しい。お客さん喜んでるんだから。売れてるんだから。}


そうです。どちらも正しいんです。


よいモノが作れるならウォーターフォールだろうがアジャイルだろうが、ここで例示していないやり方だろうがなんだってよいんです。
顧客に喜んでもらって儲かることが、われわれ民間企業の目的なわけですから。


@<strong>{プロセスはあくまでもプロセスであって、大切なのは顧客に価値を届けることだと考えます。}

== アジャイルの誤解と定着しない理由

=== アジャイルはいつ完成するかわからない


一般的にアジャイルな動きには次のような利点があるといわれています。

 * @<strong>{外部の変化に俊敏に対応できる（不確実性に強い）}
 * @<strong>{早くから収益を見込める可能性がある}
 * @<strong>{別プロダクトの開発のとき、再現性の精度が高まる}



こういった利点に注目すると「やっぱりアジャイルいいね」「アジャイルだといいモノ作れそう」となりそうですが、話はそんな単純ではありません。


〓図4.1〓の下部、すなわちアジャイルなプロセスの図は便宜上5つの輪っか（イテレーション≒繰り返し）でバージョン1.0が完成していますが、現実的にはもっとたくさんのイテレーションが必要となるでしょう（この図を見せたときに非エンジニア仲間から「あ、そっか！」という反応をいただいたのは気持ちがよかった）。



//image[7][成果物完成までのスピード][scale=0.5]




アジャイルはフィードバックを得る機会をたくさん作らないといけないため、開発に直結しない業務（プランニング、ふりかえり、レビューなどの非コーディング作業）の回数は増加し、確実にリードタイムは大きくなります。
そして本当に顧客に満足してもらえるクオリティに持っていけるまでの期間（輪っかの数）は未知なのです。




この時点でいったん「アジャイルって早く（完成形を）作れるんでしょ？」という仲間の問いに対する答えを伝えることが出来ました。


答えは、@<strong>{「アジャイルはいつ完成するかわからない」}です。」


これで当初の目的は達成できたわけですが、興が乗った筆者はもう少し話を続けました。

=== アジャイルがなかなか定着しない理由


前項をまとめると、アジャイルは「よいモノを作れる確率を上げられるかもしれなくて」「早期から収益が見込めるかもしれない」けれども「開発業務以外の仕事が多くて」「開発スピードは上がらないであろう」シロモノであるということです。


筆者は日本の組織でアジャイルがいまいち定着しない理由は、プロセスの方法論ばかり注目されて、それ以前のアジャイルマインドの醸成の重要性が軽視されているからだと考えています。

 * 自分の業務以外のタスクが多くて忙しくてなんかジレンマ
 * あまり開発に集中できない
 * 結果、開発スピードが上がらない



このように、アジャイルに悩む声を筆者はたくさん聞いてきましたし、筆者自身非常に共感しています。

== アジャイルになるには

=== 面倒だけどやるという覚悟


ここまで解説したように、
「よいものが作れるかもしれない VS. 面倒くさい」


というなかで、後者のリスクを考慮してアジャイルを選択できない組織が多い中、それでも前者を重んじアジャイルを採用したい場合どうすればよいのでしょう。


まずは関係者全員が@<b>{「アジャイルマニフェスト」}に書かれていてる内容を理解し、自分たちが作ろうとしているプロダクトにはアジャイルが必要だと納得している状態になる必要があると思います。


繰り返しになりますが、アジャイルは「短いイテレーションで少しづつ作る」「決められた行事（プランニング、ふりかえり、レビュー）をこまめにやる」といった@<strong>{「方法」}ではありません。
アジャイルな開発を目指すには「アジャイルマニフェスト」とそこで謳われている価値や主義にもとづいた12の原則を関係者全員が理解し実践する@<strong>{「状態」}になることを目指すという組織としての覚悟が必要となってきます。


こういったことからアジャイル界隈では有名な、
@<b>{「Don’t just do “Agile”, be “Agile”.」}
（アジャイルするな。アジャイルになれ）
という言葉があるんですね。
関係者全員が心技体でいう「心」の部分を理解しなければ、アジャイルは成り立たないのです。


ですから、「それアジャイルで作る必要あるの？」といった自身への問いかけもとても重要だと筆者は考えます。
作るモノ（完成形）は明らか、外部環境からの影響もない、それほどフィードバックも必要ない。
そのようなモノは当初の企画どおりに集中して作ってしまったほうが、スピード、コスト、品質面でも成功の確度は高く、アジャイルが出る幕はありません。

== まとめ


まとめます。

 * 「Don’t just do “Agile”, be “Agile”.」を関係者全員が理解する
 * 「アジャイルは早く作れないし面倒くさいけどよいモノを作りたいからやる」という覚悟を関係者全員が持つ
 * そのプロダクトの開発はアジャイルに進めたほうが効果がある（ビジネスで勝てる）ことを関係者全員が納得している



この条件を満たして初めて組織はアジャイルなプロセスへの一歩を踏み出せるんだと思います。


== 「アジャイルって早く作れるんでしょ？」への回答


仲間「なるほどですねー。全然思ってたのとちがった。すごくよくわかった。」

ここまで話をして、最初の質問への回答と反応に戻ります。
仲間からの反応が嬉しかったです。


もっとも、この話はかなりデフォルメされていて多角的な視点にも欠けており、まだまだアジャイルの入り口にすぎないのですが……
より詳細にはまた別の機会にお話しできればと思います。

=== がんばって作ったものは売れてほしいわけです


最後に筆者の立ち位置としては、


@<strong>{「よいモノが作れるならね…最初は面倒かもしれないけどね…それぞれのプラクティスにはちゃんと理由はあるわけだから……見方とかマインドとか変化させて…みんなアジャイルになろうよ！」}


って感じです。


だって、


@<strong>{「よいものが作れるかもしれない ＜ 面倒くさい」だからアジャイル嫌だ}


こんなのもったいないじゃないですか。
日々がんばって作ったのに「お客さん喜ばない＆売れない」っていう事態は避けたいですよね。


@<strong>{「よいものが作れるかもしれない ＞ 面倒くさい」だからアジャイルになってみよっかな！}


こうあるべきだと思います。
みんなのがんばりは報われるべきです、絶対。


　

//embed{
    \begin{minipage}{.1\linewidth}
        \centering
        \includegraphics[width=.75\linewidth]{images/chap-arakawa-ke/arakawake.png}
    \end{minipage}
    \begin{minipage}{.89\linewidth}
        荒川健太郎 @\\
        
        \end{minipage}
    \hspace{1ex}
//}

ウイングアーク１ｓｔ株式会社でプロセス改善とソフトウェアテストの自動化に取り組んでます

/ Certified ScrumMasterR /Certified ScrumDeveloperR / JBA公認E級審判 / 全日本スノーダイビング協会会長
