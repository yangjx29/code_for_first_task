int main () {
    float aver;
    float Exsn5WVml;
    aver = (739 - 739);
    Exsn5WVml = (177 - 177);
    int wy4EkTP32KWe;
    int n;
    int EwJLtGaWgmDR [(575 - 275)];
    int b [300];
    int U2w6spzgTxH;
    int HynJDoApEW;
    int t;
    wy4EkTP32KWe = (696 - 696);
    scanf ("%d", &n);
    {
        U2w6spzgTxH = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > U2w6spzgTxH) {
            scanf ("%d", &EwJLtGaWgmDR[U2w6spzgTxH]);
            aver += EwJLtGaWgmDR[U2w6spzgTxH];
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
            U2w6spzgTxH = U2w6spzgTxH +1;
        };
    }
    aver = aver / n;
    {
        U2w6spzgTxH = 0;
        while (U2w6spzgTxH < n) {
            if ((0 < EwJLtGaWgmDR[U2w6spzgTxH] - aver ? EwJLtGaWgmDR[U2w6spzgTxH] - aver : aver - EwJLtGaWgmDR[U2w6spzgTxH]) > Exsn5WVml)
                Exsn5WVml = EwJLtGaWgmDR[U2w6spzgTxH] - aver > 0 ? EwJLtGaWgmDR[U2w6spzgTxH] - aver : aver - EwJLtGaWgmDR[U2w6spzgTxH];
            U2w6spzgTxH = U2w6spzgTxH +1;
        };
    }
    {
        U2w6spzgTxH = 0;
        while (U2w6spzgTxH < n) {
            if ((EwJLtGaWgmDR[U2w6spzgTxH] - aver > 0 ? EwJLtGaWgmDR[U2w6spzgTxH] - aver : aver - EwJLtGaWgmDR[U2w6spzgTxH]) == Exsn5WVml)
                b[wy4EkTP32KWe++] = EwJLtGaWgmDR[U2w6spzgTxH];
            U2w6spzgTxH = U2w6spzgTxH +1;
        };
    }
    {
        U2w6spzgTxH = 0;
        while (U2w6spzgTxH < wy4EkTP32KWe) {
            {
                HynJDoApEW = U2w6spzgTxH +1;
                while (HynJDoApEW < wy4EkTP32KWe) {
                    if (b[U2w6spzgTxH] > b[HynJDoApEW]) {
                        t = b[U2w6spzgTxH];
                        b[U2w6spzgTxH] = b[HynJDoApEW];
                        b[HynJDoApEW] = t;
                    }
                    HynJDoApEW = HynJDoApEW +1;
                };
            }
            U2w6spzgTxH++;
        };
    }
    {
        U2w6spzgTxH = 0;
        while (U2w6spzgTxH < wy4EkTP32KWe - 1) {
            printf ("%d,", b[U2w6spzgTxH]);
            U2w6spzgTxH++;
        };
    }
    printf ("%d", b[wy4EkTP32KWe - 1]);
}

