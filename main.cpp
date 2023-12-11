#include <stdio.h>
#include <stdlib.h>
#include <list>
#include <iostream>
#include <vector>
#include <algorithm>


int main() {

	// 初期リスト
	std::list<const char*> lst = {
		"Tokyo","Kanda","Akihabara","Okachimachi","Ueno","Uguisudani","Nippori", "Tabata","Komagome",
		"Sugamo","Otsuka","Ikebukuro","Mejiro","Takadanobaba","Shin-Okubo","Shinjuku","Yoyogi","Harajuku","Shibuya",
		"Ebisu","Meguro","Gotanda","Osaki","Shinagawa", "Tamachi","Hamamatsucho","Shimbashi","Yurakucyo",
	};


	// 初期リストの出力
	std::cout << "1970開業" << std::endl;
	for (auto itr = lst.begin(); itr != lst.end(); ++itr) {

		std::cout << *itr << std::endl;
	}



	// リストに新たに追加
	for (auto itr = lst.begin(); itr != lst.end(); ++itr) {

		if (*itr == "Tabata") {

			itr = lst.insert(itr, "Nishi-Nipporo");

			++itr;
		}
	}

	// 追加後のリストの描画
	std::cout << "\n2019年(西日暮里駅追加)" << std::endl;
	for (auto itr = lst.begin(); itr != lst.end(); ++itr) {

		std::cout << *itr << std::endl;
	}



	// リストに新たに追加
	for (auto itr = lst.begin(); itr != lst.end(); ++itr) {

		if (*itr == "Tamachi") {

			itr = lst.insert(itr, "Takanawa GateWay");

			++itr;
		}
	}
	
	// 追加後のリストの描画
	std::cout << "\n2022年(高輪ゲートウェイ駅追加)" << std::endl;
	for (auto itr = lst.begin(); itr != lst.end(); ++itr) {

		std::cout << *itr << std::endl;
	}


	return 0;
}