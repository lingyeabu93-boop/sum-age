#include <iostream>
using namespace std;

int main() {

    int n;
    int* score;
    int total = 0;
    double average;

    cout << "人数を入力してください > ";
    cin >> n;

    score = new int[n];

    for (int i = 0; i < n; i++) {
        cout << i + 1 << "人目の点数を入力してください > ";
        cin >> score[i];

        total += score[i];
    }

    average = static_cast<double>(total) / n;

    cout << "合計値：" << total << "点" << endl;
    cout << "平均値：" << average << "点" << endl;

    delete[] score;

    return 0;
}