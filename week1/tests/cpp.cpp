// File: debug02_02.cpp
#include <iomanip>  // 引入此头文件用于setprecision
#include <iostream>
using namespace std;

int main() {
    int quantity, yuan, jiao;
    double charge;

    cout << "请输入本月用电量(单位:度): ";
    cin >> quantity;

    charge = 0.6 * quantity;
    cout << "本月需要支付电费: " << charge << "元" << endl;

    cout << endl;
    cout << "charge = " << setprecision(17) << charge << endl;

    // 计算需要支付的元和角
    yuan = charge;
    cout << "(charge - yuan) * 10 = " << (charge - yuan) * 10 << endl;
    jiao = (charge - yuan) * 10;

    cout << endl;
    cout << "共需要" << yuan << "个1元和" << jiao << "个1角的硬币" << endl;

    return 0;
}
