int MyCmp (const  void  *x, const  void  *y) {
    return *((int *) y) - *((int *) x);
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
}

int main () {
    int QiHorse [1001];
    int TianHorse [1001];
    int TianLastHorse, Tzmb6kY, QiFirstHorse, QiLastHorse;
    int S86gbiDe;
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
    int WinMatch;
    int LoseMatch;
    for (; cin >> S86gbiDe;) {
        if (!(S86gbiDe != (630 - 630)))
            break;
        WinMatch = LoseMatch = 0;
        for (i = (828 - 827); S86gbiDe >= i; i++)
            cin >> TianHorse[i];
        {
            i = 161 - 160;
            while (S86gbiDe >= i) {
                cin >> QiHorse[i];
                i = i + 1;
            };
        }
        qsort (TianHorse +1, S86gbiDe, sizeof (int), MyCmp);
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
        qsort (QiHorse +1, S86gbiDe, sizeof (int), MyCmp);
        TianLastHorse = QiLastHorse = S86gbiDe;
        Tzmb6kY = QiFirstHorse = 1;
        while (Tzmb6kY <= TianLastHorse) {
            if (TianHorse[Tzmb6kY] > QiHorse[QiFirstHorse]) {
                QiFirstHorse++;
                Tzmb6kY = Tzmb6kY +1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                WinMatch = WinMatch +1;
            }
            else if (TianHorse[Tzmb6kY] < QiHorse[QiFirstHorse]) {
                QiFirstHorse++;
                TianLastHorse = TianLastHorse -1;
                LoseMatch = LoseMatch +1;
            }
            else {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                if (TianHorse[TianLastHorse] > QiHorse[QiLastHorse]) {
                    QiLastHorse--;
                    TianLastHorse = TianLastHorse -1;
                    WinMatch++;
                }
                else {
                    if (TianHorse[TianLastHorse] < QiHorse[QiFirstHorse])
                        LoseMatch++;
                    QiFirstHorse++;
                    TianLastHorse--;
                };
            };
        }
        cout << (WinMatch -LoseMatch) * 200 << endl;
    }
    return 0;
}

