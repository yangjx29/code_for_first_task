int main () {
    int i;
    int t;
    int PqruI0;
    int wei (int iwMXgiU);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    cin >> PqruI0;
    t = 0;
    for (i = 1; i <= PqruI0; i = i + 1) {
        if (!(0 == i % 7) && wei (i) == 0) {
            t = t + i * i;
        };
    }
    cout << t << endl;
    return 0;
}

int wei (int iwMXgiU) {
    int flag;
    int sFEpwq0Jn;
    flag = 0;
    for (; iwMXgiU != 0;) {
        sFEpwq0Jn = iwMXgiU - iwMXgiU / 10 * 10;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        iwMXgiU = iwMXgiU / 10;
        if (sFEpwq0Jn == 7) {
            flag = 1;
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
            break;
        };
    }
    return (flag);
}

