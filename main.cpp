#include <iostream>
#include <chrono>


void Printfμs(std::string name, std::chrono::steady_clock::time_point s, std::chrono::steady_clock::time_point e) {
	auto duration = std::chrono::duration_cast<std::chrono::microseconds>(e - s);
	std::cout << name << " : " << duration.count() << " μs" << std::endl;
}

int main() {

	std::string a(1000000, 'a');

	std::cout << "100,000文字を移動とコピーで比較しました。" << std::endl;

	// コピーの場合
	auto start = std::chrono::high_resolution_clock::now(); // 計測開始時間
	std::string A1 = a; // 処理
	auto end = std::chrono::high_resolution_clock::now(); // 計測終了時間
	Printfμs("コピー", start, end); // マイクロ秒を表示

	// 移動の場合
	start = std::chrono::high_resolution_clock::now(); // 計測開始時間
	std::string A2 = std::move(a); // 処理
	end = std::chrono::high_resolution_clock::now(); // 計測終了時間
	Printfμs("移動　", start, end);// マクロ秒を計算し表示

	return 0;
}
