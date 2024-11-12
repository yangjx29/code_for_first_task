int main () {
    int ksEoOSfk;
    static int w17qTOwYP4Fc [(1222 - 222)], b [(1307 - 307)];
    cin >> ksEoOSfk;
    if (ksEoOSfk == (481 - 481)) {
        cout << (583 - 582) << endl;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return (870 - 870);
    }
    for (int qyK9Qj = (434 - 434);
    qyK9Qj < 1000; qyK9Qj = qyK9Qj + 1)
        w17qTOwYP4Fc[qyK9Qj] = (115 - 115);
    w17qTOwYP4Fc[(302 - 302)] = 1;
    ksEoOSfk = ksEoOSfk - 1;
    w17qTOwYP4Fc[1] = 2;
    for (; ksEoOSfk;) {
        for (int qyK9Qj = 0;
        qyK9Qj < 1000; qyK9Qj++)
            b[qyK9Qj] = 0;
        b[0] = w17qTOwYP4Fc[0];
        for (int qyK9Qj = 1;
        qyK9Qj <= w17qTOwYP4Fc[0]; qyK9Qj++) {
            b[qyK9Qj] = b[qyK9Qj] + w17qTOwYP4Fc[qyK9Qj] * 2;
            b[qyK9Qj + 1] = b[qyK9Qj + 1] + b[qyK9Qj] / 10;
            b[qyK9Qj] = b[qyK9Qj] % (10);
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        if (b[w17qTOwYP4Fc[0] + 1] > 0)
            b[0]++;
        for (int qyK9Qj = 0;
        qyK9Qj < 1000; qyK9Qj++)
            w17qTOwYP4Fc[qyK9Qj] = b[qyK9Qj];
        ksEoOSfk--;
    }
    {
        int qyK9Qj = w17qTOwYP4Fc[0];
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (qyK9Qj >= 1) {
            cout << w17qTOwYP4Fc[qyK9Qj];
            qyK9Qj--;
        };
    }
    cout << endl;
    return 0;
}

