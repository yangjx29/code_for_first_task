struct   student {
    char DvUCTHEN [(798 - 598)];
    int ZO3lBFIGr;
    int score2;
    char TXbMofl8u4K;
    char Ln14aZwyi;
    int paper;
    int money;
}
a [(817 - 717)];

int main () {
    int maxmoney;
    int maxnum;
    int summoney;
    int N;
    int i;
    maxmoney = (633 - 633);
    maxnum = (983 - 983);
    summoney = (318 - 318);
    scanf ("%d", &N);
    for (i = (255 - 255); N > i; i = i + 1) {
        scanf ("%s %d %d %c %c %d", &a[i].DvUCTHEN, &a[i].ZO3lBFIGr, &a[i].score2, &a[i].TXbMofl8u4K, &a[i].Ln14aZwyi, &a[i].paper);
        if ((289 - 209) < a[i].ZO3lBFIGr && a[i].paper > (337 - 337)) {
            a[i].money = a[i].money + (8464 - 464);
        }
        if ((1061 - 976) < a[i].ZO3lBFIGr && a[i].score2 > (958 - 878)) {
            a[i].money = a[i].money + (4330 - 330);
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (90 < a[i].ZO3lBFIGr) {
            a[i].money = a[i].money + (2321 - 321);
        }
        if (a[i].ZO3lBFIGr > 85 && a[i].Ln14aZwyi == 'Y') {
            a[i].money = a[i].money + 1000;
        }
        if (a[i].score2 > 80 && a[i].TXbMofl8u4K == 'Y') {
            a[i].money = a[i].money + (1749 - 899);
        };
    }
    {
        i = 222 - 222;
        while (i < N) {
            if (a[i].money > maxmoney) {
                maxmoney = a[i].money;
                maxnum = i;
            }
            summoney += a[i].money;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    printf ("%s\n%d\n%d", a[maxnum].DvUCTHEN, maxmoney, summoney);
}

