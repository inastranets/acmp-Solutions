#include <bits/stdc++.h>

using namespace std;

struct Agent {
	int age;
	int risk;
	
	Agent(const int age, const int risk):
		age(age), risk(risk) {}
	static Agent read() {
		int age, risk;
		cin >> age >> risk;
		return Agent(age, risk);
	}
};

int main() {     	
	int n;

	cin >> n;

	vector<Agent> agent;

	for(int i = 0; i < n; ++ i)
		agent.push_back(Agent::read());

	sort(agent.begin(), agent.end(), [](const Agent &a, const Agent &b) {
		return a.age < b.age;
	});

	vector<int> minRiskTill(n);

	minRiskTill[1] = agent[1].risk;

	if(2 < n) minRiskTill[2] = agent[1].risk + agent[2].risk;
	if(3 < n) minRiskTill[3] = agent[3].risk + agent[1].risk;

	for(int last = 4; last < n; ++ last)
		minRiskTill[last] = min(minRiskTill[last-2] + agent[last].risk,
					minRiskTill[last-3] + agent[last-1].risk + agent[last].risk);

	cout << minRiskTill.back();

	return 0;
}
