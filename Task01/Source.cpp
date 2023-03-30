#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

int gen_rnd(int min, int max) {
	return rand() % (max - min + 1) + min;
}

int main(){
	vector<int> v;
	srand(time(nullptr));

	v.reserve(100);

	for (int i = 0; i < v.capacity(); i++)
	{
		v.insert(v.begin(), gen_rnd(0, 100));
	}

	for (int i = 0; i < v.size(); i++)
	{
		cout << v.at(i) << ' ';
	}
	cout << endl;

	v.resize(50);
	cout << endl;

	for (auto it = v.begin(); it != v.end(); ++it)
	{
		cout << *it << ' ';
	}

	cout << endl;

	v.reserve(30);

	for (auto it = v.rbegin(); it != v.rend(); ++it)
	{
		cout << *it << ' ';
	}

	cout << endl;

	vector<int> v2(v);

	v.clear();

	v2.erase(v2.begin(), v2.begin() + 10);

	cout << v2.front() << endl;
	cout <<	v2.back() << endl;

	for (auto it = v.begin(); it != v.end(); )
	{
		it = v2.erase(it);
	}


	return 0;
}
