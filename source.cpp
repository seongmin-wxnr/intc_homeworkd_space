#include <iostream>
#include <vector>
#include <algorithm>

/// <summary>
/// �Ѽ��� ����(x, y)�� �ִ�.���簢���� �� ���� ��ǥ�࿡ �����ϰ�, ���� �Ʒ� ��������(0, 0), ������ �� ��������(w, h)�� �ִ�.���簢���� ��輱���� ���� �Ÿ��� �ּڰ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
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