// Ramen for 2021 NHSPC
// congratulations to Lai Justin >///<

#include <bits/stdc++.h>
using namespace std;

struct Candidate {
    string name;
    int weight;
};

Candidate owo[56] = {
    {"Eason Lai", 2},     {"楊宗儒", 2},
    {"李宗諺", 2},        {"黃晴威", 2},
    {"Vic Wang", 2},      {"Georgia Tai", 2},
    {"蘇柏瑄", 2},        {"Alvin Chang", 2},
    {"Liu Shang Lun", 2}, {"黃芊禕", 2},
    {"林煜傑", 2},        {"Jyun-An Chen", 2},
    {"王民人", 2},        {"黃雅筠", 2},
    {"Lin Ki", 2},        {"張亦頡", 2},
    {"凜羽", 2},          {"范釗維", 2},
    {"王睿宇", 2},        {"林哲宇(大一)", 2},
    {"黃仲群", 2},        {"Kent Yang", 2},
    {"吳威錡", 2},        {"Gino Huang", 2},
    {"林祐麒", 2},        {"鄭允臻", 2},
    {"陳璿修", 2},        {"吳孟峰", 1},
    {"巨大蜜蜂", 1},      {"林哲宇(高三)", 2},
    {"周廷威", 2},        {"Hsiao Zhu", 2},
    {"莊之睿", 2},        {"林柏瑄", 2},
    {"趙佑啟", 2},        {"陳威翰", 2},
    {"官毓韋", 2},        {"張程凱", 2},
    {"陳韞同", 2},        {"胡智涵", 2},
    {"鄭亦家", 2},        {"吳柏翰", 2},
    {"鄭詠堯", 2},        {"賴來晨", 2},
    {"Lai Justin", 2},    {"王馨慧", 2},
    {"Kayee Dlaw", 2},    {"張宸銘", 2},
    {"廖丞胤", 2},        {"王淇淇", 2},
    {"Wiwi Ho", 2},       {"黃迺絜", 2},
    {"Poshen Chang", 2},  {"江品寬", 2},
    {"王品翔", 2},        {"邱宣瀚", 2}};

int main() {
    int n = 56;
    int wsum = 110;

    // post time = 22:10
    // character count = 2245
    mt19937_64 rng(22102245);

    uint64_t res = rng() % wsum;
    uint64_t now = 0;
    for (int i = 0; i < n; i++) {
        now += owo[i].weight;
        if (now > res) {
            cout << owo[i].name << "\n";
            break;
        }
    }

    return 0;
}