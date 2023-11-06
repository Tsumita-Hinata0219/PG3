#include "Enemy.h"
#include <iostream>


// フェーズの関数テーブル
void (Enemy::* Enemy::pPheaseTable[])() = {
	&Enemy::Approach,
	&Enemy::Attack,
	&Enemy::Leave,
};

// 初期化処理
void Enemy::Initialize() {
	phease_ = Phease::Approach;
}

// 更新処理
void Enemy::Update() {

	// メンバ関数を呼び出す
	for (int i = 0; i < 3; i++) {
		(this->*pPheaseTable[static_cast<size_t>(phease_)])();
	}
}

// 接近フェーズ
void Enemy::Approach() {

	std::cout << "接近フェーズ\n";
	std::cout << "ぐえっへっへっへ！\n";
	std::cout << "勇者の乗ったセレスティアルスプリンターを見つけたぞ！！！\n\n";
	phease_ = Phease::Attack;
}

// 攻撃フェーズ
void Enemy::Attack() {

	std::cout << "射撃フェーズ\n";
	std::cout << "総員！敵船左舷に一転照準！！！\n";
	std::cout << "撃て！！！\n\n";
	phease_ = Phease::Leave;
}

// 離脱フェーズ
void Enemy::Leave() {

	std::cout << "離脱フェーズ\n";
	std::cout << "ドーーン！\n";
	std::cout << "何だ！どうした\n";
	std::cout << "サイバーデーモン様！被弾しました！！\n";
	std::cout << "ッ！クソ。全軍離脱しろ！！！\n\n";
}


