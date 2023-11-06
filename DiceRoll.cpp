#include "DiceRoll.h"


// 親
std::string CalcDiceRoll() {

    std::random_device rd;
    std::mt19937 generator(rd());

    // 範囲指定のための分布オブジェクトを作成
    std::uniform_int_distribution<int> distribution(1, 6);

    // 乱数生成
    int randnum = distribution(generator);

    std::string ans;

    // 丁半を決める
    if (randnum % 2 == 0) {
        ans = "丁";
    }
    else {
        ans = "半";
    }

    return ans;
}

// プレイヤー
std::string DecideDiceRoll() {

    std::cout << "　親 : 丁か？半か？\n";

    std::string plaAns;

    std::cout << "お前 : ";
    std::getline(std::cin, plaAns);

    std::cout << "\n親 : よこざんすね\n\n";

    return plaAns;
}


void DisplayResult(std::string plaAns) {

    std::string oyaAns = CalcDiceRoll();

    std::cout << "　親 : " << oyaAns << "\n";
    std::cout << "お前 : " << plaAns << "\n";

    using namespace std::chrono_literals;
    std::this_thread::sleep_for(1s);

    if (oyaAns == plaAns) {
        std::cout << "\n勝ち\n";
        std::cout << "\nクソッ！お前の勝ちだよ。その金持ってさっさと出ていきな！！\n";
        std::cout << "---お前は懐が温まったが、その夜、勝ったところ目撃していたゴロツキに刺され、人生の幕を下ろした\n\n";
    }
    else {
        std::cout << "\n負け\n";
        std::cout << "\nはっ（笑）、お前の負けだよ。有り金全部置いていきな！\n";
        std::cout << "---そうして、全財産を失ったお前は、ゴミみたいな人生を送るのだった・・・\n\n\n\n";
    }
}