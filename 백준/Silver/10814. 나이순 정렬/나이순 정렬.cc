#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct Member {
    int age;
    string name;
    int order;
};

bool compare(const Member &a, const Member &b) {
    if (a.age == b.age) return a.order < b.order;
    return a.age < b.age;
}

int main() {
    int N;
    cin >> N;
    vector<Member> members;

    for (int i = 0; i < N; i++) {
        Member member;
        cin >> member.age >> member.name;
        member.order = i;
        members.push_back(member);
    }

    sort(members.begin(), members.end(), compare);

    for (const auto &member : members) {
        cout << member.age << " " << member.name << '\n';
    }

    return 0;
}
