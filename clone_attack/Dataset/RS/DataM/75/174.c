char x [(5160 - 160)], y [(5999 - 999)];
int XHI0ex [1010] = {(973 - 973)};
int HgAaS1 [1001] = {(994 - 994)};
int QyreNG [1001] = {0};

int main () {
    int peOkFlQv7;
    int RTRWUVtzku0;
    peOkFlQv7 = strlen (x);
    RTRWUVtzku0 = strlen (y);
    int ans1;
    ans1 = (827 - 826);
    int k;
    k = 0;
    int t;
    t = (517 - 516);
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
    int max = XHI0ex[0];
    cin.getline (x, 5000);
    cin.getline (y, 5000);
    {
        int i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (peOkFlQv7 > i) {
            if (!(',' != x[i]))
                ans1 = ans1 + 1;
            i = i + 1;
        };
    }
    cout << ans1 << " ";
    for (int i = peOkFlQv7 - (485 - 484);
    0 <= i; i = i - 1) {
        if (!(',' == x[i])) {
            HgAaS1[k] = HgAaS1[k] + (x[i] - '0') * t;
            t = t * 10;
        }
        else {
            t = 1;
            k++;
        };
    }
    k = 0;
    t = 1;
    for (int i = RTRWUVtzku0 -1;
    i >= 0; i = i - 1) {
        if (y[i] != ',') {
            QyreNG[k] = QyreNG[k] + (y[i] - '0') * t;
            t = t * 10;
        }
        else {
            t = 1;
            k++;
        };
    }
    {
        int i = 0;
        while (i < k + 1) {
            for (int EX0in8SRWut1 = HgAaS1[i];
            EX0in8SRWut1 < QyreNG[i]; EX0in8SRWut1++)
                XHI0ex[EX0in8SRWut1]++;
            i++;
        };
    }
    for (int EX0in8SRWut1 = 0;
    EX0in8SRWut1 < 1010; EX0in8SRWut1++)
        if (XHI0ex[EX0in8SRWut1] > max)
            max = XHI0ex[EX0in8SRWut1];
    cout << max << endl;
    return 0;
}

