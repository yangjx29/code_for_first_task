int main () {
    int x;
    int a [100];
    int XxcVp5gKB4W [100] [100];
    int ceKsMz8;
    int ZTrHQaMkh4;
    int bDchSHi [100];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    cin >> x;
    for (ceKsMz8 = 0; ceKsMz8 < x; ceKsMz8 = ceKsMz8 + 1)
        bDchSHi[ceKsMz8] = 60;
    {
        ceKsMz8 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (ceKsMz8 < x) {
            cin >> a[ceKsMz8];
            {
                ZTrHQaMkh4 = 0;
                while (a[ceKsMz8] > ZTrHQaMkh4) {
                    cin >> XxcVp5gKB4W[ceKsMz8][ZTrHQaMkh4];
                    ZTrHQaMkh4 = ZTrHQaMkh4 +1;
                };
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
            ceKsMz8 = ceKsMz8 + 1;
        };
    }
    {
        ceKsMz8 = 0;
        while (ceKsMz8 < x) {
            {
                ZTrHQaMkh4 = 0;
                while (ZTrHQaMkh4 < a[ceKsMz8]) {
                    if (XxcVp5gKB4W[ceKsMz8][ZTrHQaMkh4] <= 57 - (195 - 192) * ZTrHQaMkh4)
                        bDchSHi[ceKsMz8] = bDchSHi[ceKsMz8] - 3;
                    else {
                        if (XxcVp5gKB4W[ceKsMz8][ZTrHQaMkh4] == 58 - 3 * ZTrHQaMkh4)
                            bDchSHi[ceKsMz8] = bDchSHi[ceKsMz8] - 2;
                        else {
                            if (XxcVp5gKB4W[ceKsMz8][ZTrHQaMkh4] == 59 - 3 * ZTrHQaMkh4)
                                bDchSHi[ceKsMz8] = bDchSHi[ceKsMz8] - 1;
                            else {
                                if (XxcVp5gKB4W[ceKsMz8][ZTrHQaMkh4] == 60 - 3 * ZTrHQaMkh4)
                                    bDchSHi[ceKsMz8] = bDchSHi[ceKsMz8];
                            };
                        };
                    }
                    ZTrHQaMkh4++;
                };
            }
            ceKsMz8++;
        };
    }
    {
        ceKsMz8 = 0;
        while (ceKsMz8 < x) {
            cout << bDchSHi[ceKsMz8] << endl;
            ceKsMz8++;
        };
    };
}

