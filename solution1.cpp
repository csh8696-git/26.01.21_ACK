#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
	vector<int> answer;
	for (int i = 0; i < commands.size(); i++)
	{
		int start = commands[i][0];
		int end = commands[i][1];
		int index = commands[i][2];
		vector<int> temp(array.begin() + start - 1, array.begin() + end);
		sort(temp.begin(), temp.end());
		answer.push_back(temp[index - 1]);
	}
	return answer;
}

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
	vector<int> answer;
	for (const auto& command : commands) {
		int i = command[0];
		int j = command[1];
		int k = command[2];
		vector<int> subarray(array.begin() + i - 1, array.begin() + j);
		sort(subarray.begin(), subarray.end());
		answer.push_back(subarray[k - 1]);
	}
	return answer;
}
vector<int> solution(vector<int> array, vector<vector<int>> commands) {
	vector<int> answer;
	vector<int> temp;

	for (int i = 0; i < commands.size(); i++) {
		temp = array;
		sort(temp.begin() + commands[i][0] - 1, temp.begin() + commands[i][1]);
		answer.push_back(temp[commands[i][0] + commands[i][2] - 2]);
	}

	return answer;
}