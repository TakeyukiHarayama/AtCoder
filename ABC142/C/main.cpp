#include <iostream>
#include <vector>

using namespace std;

struct Info
{
	int index;
    int number;

    Info(int inputted_index, int inputted_number)
    {
        index = inputted_index;
        number = inputted_number;
    }
    bool operator<(const Info &another) const
    {
        return number < another.number;//年齢を比較
    };
    //2つのconstを付けないとコンパイルエラーになるので注意!!
};

int main(void)
{
	int N, tmp;

	cin >> N;

    vector<Info> info;
	for(int i=0; i<N; i++){
		cin >> tmp;
		info.push_back(Info(i, tmp));
	}

    sort(info.begin(), info.end());//ソート実行

	for(int i=0; i<N; i++){
		cout << info[i].index + 1 << " ";
	}
	putchar('\n');

    return 0;
}
