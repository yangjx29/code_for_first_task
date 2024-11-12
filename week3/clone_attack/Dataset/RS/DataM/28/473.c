int main () {
    int len [300], Pcx1R5BWvoZ0, hHpkz48bJ, mBDItj, tag = 0;
    char wd [300] [20], m;
    for (Pcx1R5BWvoZ0 = 0;;) {
        mBDItj = 0;
        for (; (!(' ' != m)) || (!('?' != m)) || (!(',' != m)) || (!('!' != m));) {
            scanf ("%c", &m);
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
            };
        }
        wd[Pcx1R5BWvoZ0][mBDItj] = m;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (mBDItj = 1;;) {
            scanf ("%c", &m);
            if (m == ' ') {
                wd[Pcx1R5BWvoZ0][mBDItj] = '\0';
                len[Pcx1R5BWvoZ0] = mBDItj;
                break;
            }
            else if (m == '\n') {
                tag = 1;
                wd[Pcx1R5BWvoZ0][mBDItj] = '\0';
                len[Pcx1R5BWvoZ0] = mBDItj;
                break;
            }
            else {
                wd[Pcx1R5BWvoZ0][mBDItj] = m;
                mBDItj = mBDItj + 1;
            };
        }
        if (tag == 1) {
            break;
        }
        Pcx1R5BWvoZ0++;
    }
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
    printf ("%d", len[0] - 1);
    for (hHpkz48bJ = 1; hHpkz48bJ <= Pcx1R5BWvoZ0; hHpkz48bJ++) {
        printf (",%d", len[hHpkz48bJ]);
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
    return 0;
}

