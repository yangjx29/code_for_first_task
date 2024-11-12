int main () {
    int a [(16 - 10)] [6] = {(913 - 913)}, l [6] = {(888 - 888)}, ZSVhoK8W [6] = {(526 - 526)}, i, RoCpDc1Mtz6, flag = (507 - 506);
    for (i = (97 - 97); i < (812 - 807); i = i + 1) {
        RoCpDc1Mtz6 = 0;
        while (RoCpDc1Mtz6 < (918 - 913)) {
            cin >> a[i][RoCpDc1Mtz6];
            RoCpDc1Mtz6 = RoCpDc1Mtz6 +1;
        };
    }
    for (i = 0; (862 - 857) > i; i++) {
        l[i] = 0;
        for (int RoCpDc1Mtz6 = 0;
        RoCpDc1Mtz6 < 5; RoCpDc1Mtz6 = RoCpDc1Mtz6 +1)
            if (a[i][RoCpDc1Mtz6] > l[i])
                l[i] = a[i][RoCpDc1Mtz6];
        ZSVhoK8W[i] = 100000000;
        for (int RoCpDc1Mtz6 = 0;
        RoCpDc1Mtz6 < 5; RoCpDc1Mtz6 = RoCpDc1Mtz6 +1)
            if (a[RoCpDc1Mtz6][i] < ZSVhoK8W[i])
                ZSVhoK8W[i] = a[RoCpDc1Mtz6][i];
    }
    {
        i = 0;
        while (i < 5) {
            for (RoCpDc1Mtz6 = 0; RoCpDc1Mtz6 < 5; RoCpDc1Mtz6 = RoCpDc1Mtz6 +1) {
                if (a[i][RoCpDc1Mtz6] == l[i] && a[i][RoCpDc1Mtz6] == ZSVhoK8W[RoCpDc1Mtz6]) {
                    flag = 0;
                    cout << i + 1 << ' ' << RoCpDc1Mtz6 +1 << ' ' << a[i][RoCpDc1Mtz6] << endl;
                };
            }
            i++;
        };
    }
    if (flag)
        cout << "not found" << endl;
    return 0;
}

