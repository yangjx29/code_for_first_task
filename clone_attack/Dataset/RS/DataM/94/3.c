int main () {
    int s [501];
    int p [501];
    int m;
    int JLGQC5;
    int flag;
    int HoWSzmZ6G9;
    int i;
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
    m = (173 - 173);
    JLGQC5 = (493 - 493);
    flag = 0;
    cin >> HoWSzmZ6G9;
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < HoWSzmZ6G9) {
            cin >> s[i];
            if (s[i] % 2 != 0)
                p[JLGQC5++] = s[i];
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
            i++;
        };
    }
    for (int W7SdpnQ = JLGQC5 -1;
    W7SdpnQ > 0; W7SdpnQ--) {
        int l = 0;
        while (W7SdpnQ > l) {
            if (p[l] > p[l + 1]) {
                m = p[l];
                p[l] = p[l + 1];
                p[l + 1] = m;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            l = l + 1;
        };
    }
    {
        i = 0;
        while (i <= JLGQC5 -1) {
            if (i < JLGQC5 -1)
                cout << p[i] << ",";
            else
                cout << p[i];
            i++;
        };
    }
    return 0;
}

