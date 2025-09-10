#include <iostream>

using namespace std;

int main()
{
    int testcase_cnt;
    cin >> testcase_cnt;

    int repeat_num;
    string test_s;
    for (int i = 0; i < testcase_cnt; i++)
    {
        cin >> repeat_num >> test_s;
        for (int i = 0; i < test_s.size(); i++)
        {
            for (int j = 0; j < repeat_num; j++)
            {
                cout << test_s[i];
            }
        }
        cout << "\n";
    }
}