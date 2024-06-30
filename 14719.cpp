#include <iostream>
#include <vector>

using namespace std;

int getAnswer(int h, int w, vector<int>& height) {

	int i, j;
	
	int sum = 0;
	for (i = 1; i <= w; i++)
	{
		int left = height[i]; // 현재 인덱스의 왼쪽 중 가장 큰 값
		int right = height[i]; // 현재 인덱스의 오른쪽 중 가장 큰 값

		for (j = 1; j <= i-1; j++) {
			left = max(left, height[j]);
		}
		for (j = i+1; j <= w; j++) {
			right = max(right, height[j]);
		}
		
		int realHeight = min(left, right); // 비가 담길 높이 = right와 left 중 작은 값
		sum += realHeight - height[i]; // (비가 담길 높이)-(현재 높이) 를 더한다.
	}

	return sum;
}
int main(void)
{
	int h, w, i;
	cin >> h >> w;

	vector<int> height(w + 1, 0);
	for (i = 1; i <= w; i++) {
		cin >> height[i];
	}

	cout << getAnswer(h, w, height);
}