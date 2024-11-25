int main () {
    int n;
    int yXrwLyZ2;
    int aR5q3F49DCc [9] [9] = {0, 0};
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
    cin >> n >> yXrwLyZ2;
    aR5q3F49DCc[4][4] = n;
    {
        int i;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i = 1;
        while (yXrwLyZ2 >= i) {
            int HvFXUsD [9] [9] = {0, 0};
            i = i + 1;
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
            for (int kWvTd07ZxO5H = 0;
            9 > kWvTd07ZxO5H; kWvTd07ZxO5H = kWvTd07ZxO5H + 1) {
                int fQbUO9p0 = 0;
                while (9 > fQbUO9p0) {
                    if (aR5q3F49DCc[kWvTd07ZxO5H][fQbUO9p0] != 0) {
                        HvFXUsD[kWvTd07ZxO5H][fQbUO9p0] = HvFXUsD[kWvTd07ZxO5H][fQbUO9p0] + aR5q3F49DCc[kWvTd07ZxO5H][fQbUO9p0];
                        HvFXUsD[kWvTd07ZxO5H - 1][fQbUO9p0 - 1] = HvFXUsD[kWvTd07ZxO5H - 1][fQbUO9p0 - 1] + aR5q3F49DCc[kWvTd07ZxO5H][fQbUO9p0];
                        HvFXUsD[kWvTd07ZxO5H - 1][fQbUO9p0] = HvFXUsD[kWvTd07ZxO5H - 1][fQbUO9p0] + aR5q3F49DCc[kWvTd07ZxO5H][fQbUO9p0];
                        HvFXUsD[kWvTd07ZxO5H - 1][fQbUO9p0 + 1] += aR5q3F49DCc[kWvTd07ZxO5H][fQbUO9p0];
                        HvFXUsD[kWvTd07ZxO5H][fQbUO9p0 - 1] = HvFXUsD[kWvTd07ZxO5H][fQbUO9p0 - 1] + aR5q3F49DCc[kWvTd07ZxO5H][fQbUO9p0];
                        HvFXUsD[kWvTd07ZxO5H][fQbUO9p0 + 1] = HvFXUsD[kWvTd07ZxO5H][fQbUO9p0 + 1] + aR5q3F49DCc[kWvTd07ZxO5H][fQbUO9p0];
                        HvFXUsD[kWvTd07ZxO5H + 1][fQbUO9p0 - 1] = HvFXUsD[kWvTd07ZxO5H + 1][fQbUO9p0 - 1] + aR5q3F49DCc[kWvTd07ZxO5H][fQbUO9p0];
                        HvFXUsD[kWvTd07ZxO5H + 1][fQbUO9p0] += aR5q3F49DCc[kWvTd07ZxO5H][fQbUO9p0];
                        HvFXUsD[kWvTd07ZxO5H + 1][fQbUO9p0 + 1] = HvFXUsD[kWvTd07ZxO5H + 1][fQbUO9p0 + 1] + aR5q3F49DCc[kWvTd07ZxO5H][fQbUO9p0];
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    fQbUO9p0 = fQbUO9p0 + 1;
                };
            }
            {
                int kWvTd07ZxO5H = 0;
                while (kWvTd07ZxO5H < 9) {
                    {
                        int fQbUO9p0 = 0;
                        while (9 > fQbUO9p0) {
                            aR5q3F49DCc[kWvTd07ZxO5H][fQbUO9p0] = aR5q3F49DCc[kWvTd07ZxO5H][fQbUO9p0] + HvFXUsD[kWvTd07ZxO5H][fQbUO9p0];
                            fQbUO9p0 = fQbUO9p0 + 1;
                        };
                    }
                    kWvTd07ZxO5H = kWvTd07ZxO5H + 1;
                };
            };
        };
    }
    {
        int i = 0;
        while (i < 9) {
            cout << aR5q3F49DCc[i][0];
            for (int kWvTd07ZxO5H = 1;
            kWvTd07ZxO5H < 9; kWvTd07ZxO5H++)
                cout << " " << aR5q3F49DCc[i][kWvTd07ZxO5H];
            i = i + 1;
            cout << endl;
        };
    }
    return 0;
}

