#include <iostream>
#include <vector>
#include <algorithm>

/// <summary>
/// 한수는 지금(x, y)에 있다.직사각형은 각 변이 좌표축에 평행하고, 왼쪽 아래 꼭짓점은(0, 0), 오른쪽 위 꼭짓점은(w, h)에 있다.직사각형의 경계선까지 가는 거리의 최솟값을 구하는 프로그램을 작성하시오.
/// </summary>
 

int main() {
	int x, y, x1, y1, x2, y2;
	std::cin >> x >> y;  std::cin >> x1 >> y1; std::cin >> x2 >> y2; 

	std::cout << int(x ^ x1 ^ x2) << " " << int(y ^ y1 ^ y2) << std::endl;
}