int main () {
    int A1aG549gevdP [20000];
    int pPsiXbFK [20000];
    int zMpJkfPQ1;
    int tbqAMg;
    int fYRxDhy4ZO;
    int kTMR1m;
    int bZpvrTWu;
    int nq52VgRilNZ;
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
    int vXSI0Bd7wOTD;
    A1aG549gevdP[0] = 0;
    scanf ("%d", &zMpJkfPQ1);
    {
        tbqAMg = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (tbqAMg < zMpJkfPQ1) {
            scanf ("%d", &pPsiXbFK[tbqAMg]);
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
            tbqAMg = tbqAMg + 1;
        };
    }
    {
        fYRxDhy4ZO = 1;
        while (fYRxDhy4ZO < zMpJkfPQ1) {
            A1aG549gevdP[fYRxDhy4ZO] = 0;
            {
                kTMR1m = 0;
                while (fYRxDhy4ZO > kTMR1m) {
                    if (pPsiXbFK[fYRxDhy4ZO] == pPsiXbFK[kTMR1m])
                        A1aG549gevdP[fYRxDhy4ZO]++;
                    kTMR1m = kTMR1m + 1;
                };
            }
            fYRxDhy4ZO = fYRxDhy4ZO + 1;
        };
    }
    printf ("%d", pPsiXbFK[0]);
    {
        bZpvrTWu = 1;
        while (bZpvrTWu < zMpJkfPQ1) {
            if (A1aG549gevdP[bZpvrTWu] == 0)
                printf (" %d", pPsiXbFK[bZpvrTWu]);
            bZpvrTWu = bZpvrTWu + 1;
        };
    }
    return 0;
}

