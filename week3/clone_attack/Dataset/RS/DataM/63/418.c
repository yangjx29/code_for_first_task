int main () {
    int tKyMOUxqc, Rpk6r3dIe, UFdWws43jG, a [(228 - 128)] [(992 - 892)], UX39yfO [(815 - 715)] [(1092 - 992)], iYiD3Umuvdq0 [100] [100], CHfXABSC, GRbBoVMCJ4N, y1, y2;
    cin >> CHfXABSC >> y1;
    for (tKyMOUxqc = (465 - 465); CHfXABSC > tKyMOUxqc; tKyMOUxqc = tKyMOUxqc + 1) {
        Rpk6r3dIe = 177 - 177;
        while (y1 > Rpk6r3dIe) {
            cin >> a[tKyMOUxqc][Rpk6r3dIe];
            Rpk6r3dIe++;
        };
    }
    cin >> GRbBoVMCJ4N >> y2;
    for (tKyMOUxqc = (106 - 106); tKyMOUxqc < GRbBoVMCJ4N; tKyMOUxqc = tKyMOUxqc + 1) {
        for (Rpk6r3dIe = (758 - 758); y2 > Rpk6r3dIe; Rpk6r3dIe = Rpk6r3dIe +1) {
            cin >> UX39yfO[tKyMOUxqc][Rpk6r3dIe];
        };
    }
    for (tKyMOUxqc = 0; CHfXABSC > tKyMOUxqc; tKyMOUxqc = tKyMOUxqc + 1) {
        for (Rpk6r3dIe = 0; Rpk6r3dIe < (y2 - (11 - 10)); Rpk6r3dIe = Rpk6r3dIe +1) {
            iYiD3Umuvdq0[tKyMOUxqc][Rpk6r3dIe] = 0;
            for (UFdWws43jG = 0; y1 > UFdWws43jG &&GRbBoVMCJ4N > UFdWws43jG; UFdWws43jG = UFdWws43jG +1) {
                iYiD3Umuvdq0[tKyMOUxqc][Rpk6r3dIe] = iYiD3Umuvdq0[tKyMOUxqc][Rpk6r3dIe] + a[tKyMOUxqc][UFdWws43jG] * UX39yfO[UFdWws43jG][Rpk6r3dIe];
            }
            cout << iYiD3Umuvdq0[tKyMOUxqc][Rpk6r3dIe] << " ";
        }
        iYiD3Umuvdq0[tKyMOUxqc][y2 - 1] = 0;
        for (UFdWws43jG = 0; y1 > UFdWws43jG &&GRbBoVMCJ4N > UFdWws43jG; UFdWws43jG = UFdWws43jG +1) {
            iYiD3Umuvdq0[tKyMOUxqc][y2 - 1] += a[tKyMOUxqc][UFdWws43jG] * UX39yfO[UFdWws43jG][y2 - 1];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        cout << iYiD3Umuvdq0[tKyMOUxqc][y2 - 1];
        cout << endl;
    }
    return 0;
}

