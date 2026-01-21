#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
	vector<int> answer;
	for (int i = 0; i < numbers.size() - 1; i++)
	{
		for (int j = i + 1; j < numbers.size(); j++)
		{
			int sum = numbers[i] + numbers[j];
			if (find(answer.begin(), answer.end(), sum) == answer.end())
			{
				answer.push_back(sum);
			}
		}
	}
	sort(answer.begin(), answer.end());
	return answer;
}

#include <string>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

vector<int> solution(vector<int> numbers) {
	set<int> sums;  // 중복 자동 제거

	for (int i = 0; i < numbers.size(); i++) {
		for (int j = i + 1; j < numbers.size(); j++) {
			sums.insert(numbers[i] + numbers[j]);
		}
	}

	return vector<int>(sums.begin(), sums.end());
}
vector<int> solution(vector<int> numbers) {
	vector<int> answer;
	set<int> st;
	for (int i = 0; i < numbers.size(); ++i) {
		for (int j = i + 1; j < numbers.size(); ++j) {
			st.insert(numbers[i] + numbers[j]);
		}
	}
	answer.assign(st.begin(), st.end());
	return answer;
}