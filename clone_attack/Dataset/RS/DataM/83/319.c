int main () {
    double  HPAoVivw;
    double  G9fTp6Dt;
    double  RMmlpPY6QjTr;
    int NfxcBVE [500];
    int R2oKrA6XG [500];
    double  KH3nwoGay [500];
    int mVc8dA, nyoNrWC4ilHj, LnVOFxgDrLe;
    G9fTp6Dt = 0;
    HPAoVivw = 0;
    scanf ("%d\n", &nyoNrWC4ilHj);
    {
        mVc8dA = 0;
        while (nyoNrWC4ilHj > mVc8dA) {
            scanf ("%d", &R2oKrA6XG[mVc8dA]);
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
            mVc8dA = mVc8dA + 1;
        };
    }
    for (mVc8dA = 0; nyoNrWC4ilHj > mVc8dA; mVc8dA = mVc8dA + 1) {
        scanf ("%d", &NfxcBVE[mVc8dA]);
    }
    {
        LnVOFxgDrLe = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        mVc8dA = 0;
        while (nyoNrWC4ilHj > mVc8dA, nyoNrWC4ilHj > LnVOFxgDrLe) {
            if (NfxcBVE[mVc8dA] >= 90 && 100 >= NfxcBVE[mVc8dA]) {
                KH3nwoGay[LnVOFxgDrLe] = 4.0;
            }
            else if (85 <= NfxcBVE[mVc8dA] && NfxcBVE[mVc8dA] <= 89) {
                KH3nwoGay[LnVOFxgDrLe] = 3.7;
            }
            else if (NfxcBVE[mVc8dA] >= 82 && 84 >= NfxcBVE[mVc8dA]) {
                KH3nwoGay[LnVOFxgDrLe] = 3.3;
            }
            else if (NfxcBVE[mVc8dA] >= 78 && 81 >= NfxcBVE[mVc8dA]) {
                KH3nwoGay[LnVOFxgDrLe] = 3.0;
            }
            else if (75 <= NfxcBVE[mVc8dA] && NfxcBVE[mVc8dA] <= 77) {
                KH3nwoGay[LnVOFxgDrLe] = 2.7;
            }
            else if (NfxcBVE[mVc8dA] >= 72 && NfxcBVE[mVc8dA] <= 74) {
                KH3nwoGay[LnVOFxgDrLe] = 2.3;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            else if (NfxcBVE[mVc8dA] >= 68 && NfxcBVE[mVc8dA] <= 71) {
                KH3nwoGay[LnVOFxgDrLe] = 2.0;
            }
            else if (NfxcBVE[mVc8dA] >= 64 && NfxcBVE[mVc8dA] <= (214 - 147)) {
                KH3nwoGay[LnVOFxgDrLe] = 1.5;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            else if (NfxcBVE[mVc8dA] >= 60 && NfxcBVE[mVc8dA] <= 63) {
                KH3nwoGay[LnVOFxgDrLe] = 1.0;
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
            else if (NfxcBVE[mVc8dA] < 60) {
                KH3nwoGay[LnVOFxgDrLe] = 0.0;
            }
            LnVOFxgDrLe++;
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
            mVc8dA = mVc8dA + 1;
        };
    }
    {
        mVc8dA = 0;
        while (mVc8dA < nyoNrWC4ilHj) {
            HPAoVivw = HPAoVivw +1.00 * KH3nwoGay[mVc8dA] * R2oKrA6XG[mVc8dA];
            G9fTp6Dt = G9fTp6Dt +R2oKrA6XG[mVc8dA];
            mVc8dA++;
        };
    }
    RMmlpPY6QjTr = 1.00 * HPAoVivw / G9fTp6Dt;
    printf ("%.2lf", RMmlpPY6QjTr);
    return 0;
}

