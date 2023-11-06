#pragma once
#include <stdio.h>


class Enemy {
public:

	void Initialize();

	void Update();

	void Approach();

	void Attack();

	void Leave();

private:

	// 行動フェーズ
	enum class Phease {
		Approach, // 接近
		Attack,	  // 射撃
		Leave,	  // 離脱
	};
	Phease phease_ = Phease();

	// フェーズのメンバ変数
	static void (Enemy::* pPheaseTable[])();

};
