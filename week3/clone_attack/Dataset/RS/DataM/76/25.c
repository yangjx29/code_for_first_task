int main () {
    double  s [10001], max, gCIhRAvTzx;
    int wkhS1YIOgCU [10001], SDQItAZFdC [10001];
    int rXzFmn4joxK, isBnvrdQ, OIylrNb, t, rltKMNR, m, j;
    scanf ("%d", &rXzFmn4joxK);
    for (isBnvrdQ = 0; isBnvrdQ < rXzFmn4joxK; isBnvrdQ = isBnvrdQ + 1)
        scanf ("%d%d", &(wkhS1YIOgCU[isBnvrdQ]), &(SDQItAZFdC[isBnvrdQ]));
    {
        OIylrNb = 1;
        while (rXzFmn4joxK - 1 >= OIylrNb) {
            for (isBnvrdQ = 0; isBnvrdQ < rXzFmn4joxK - OIylrNb; isBnvrdQ = isBnvrdQ + 1) {
                if (SDQItAZFdC[isBnvrdQ] > SDQItAZFdC[isBnvrdQ + 1]) {
                    rltKMNR = SDQItAZFdC[isBnvrdQ];
                    SDQItAZFdC[isBnvrdQ] = SDQItAZFdC[isBnvrdQ + 1];
                    SDQItAZFdC[isBnvrdQ + 1] = rltKMNR;
                };
            }
            OIylrNb = OIylrNb +1;
        };
    }
    for (OIylrNb = 1; OIylrNb <= rXzFmn4joxK - 1; OIylrNb++) {
        for (isBnvrdQ = 0; isBnvrdQ < rXzFmn4joxK - OIylrNb; isBnvrdQ = isBnvrdQ + 1) {
            if (wkhS1YIOgCU[isBnvrdQ + 1] < wkhS1YIOgCU[isBnvrdQ]) {
                t = wkhS1YIOgCU[isBnvrdQ];
                wkhS1YIOgCU[isBnvrdQ] = wkhS1YIOgCU[isBnvrdQ + 1];
                wkhS1YIOgCU[isBnvrdQ + 1] = t;
            };
        };
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
    max = SDQItAZFdC[rXzFmn4joxK - 1];
    gCIhRAvTzx = wkhS1YIOgCU[0];
    s[0] = gCIhRAvTzx;
    {
        j = 0;
        while (j < 2 * (max - gCIhRAvTzx)) {
            s[j + 1] = s[j] + 0.5;
            j = j + 1;
        };
    }
    {
        j = 0;
        while (j < 2 * (max - gCIhRAvTzx)) {
            for (isBnvrdQ = 0; isBnvrdQ < rXzFmn4joxK; isBnvrdQ++) {
                if (s[j] <= SDQItAZFdC[isBnvrdQ] && s[j] >= wkhS1YIOgCU[isBnvrdQ]) {
                    m = 1;
                    break;
                }
                else
                    m = 0;
            }
            if (m == 0) {
                break;
                printf ("no");
            }
            j = j + 1;
        };
    }
    if (m == 1)
        printf ("%d %d", wkhS1YIOgCU[0], SDQItAZFdC[rXzFmn4joxK - 1]);
    return 0;
}

