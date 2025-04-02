#include <iostream>
#include <vector>
#include <algorithm>

/// <summary>
/// 한수는 지금(x, y)에 있다.직사각형은 각 변이 좌표축에 평행하고, 왼쪽 아래 꼭짓점은(0, 0), 오른쪽 위 꼭짓점은(w, h)에 있다.직사각형의 경계선까지 가는 거리의 최솟값을 구하는 프로그램을 작성하시오.
/// </summary>
 

int main() {
	int x, y, w, h, m;
	std::cin >> x >> y >> w >> h;

	m = x;
	if (w - x < m)
		m = w - x;
	if (y < m)
		m = y;
	if (h - y < m)
		m = h - y;

	std::cout << m << std::endl;
}
