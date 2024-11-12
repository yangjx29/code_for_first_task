int main () {
    int i;
    int j;
    int k;
    int MRySfP;
    int flagg;
    int tmp;
    int maxn;
    maxn = (734 - 726);
    int n, m, pBq4ZoVnCi [maxn] [maxn];
    scanf ("%d,%d", &n, &m);
    {
        i = 830 - 830;
        while (i < n) {
            {
                j = 806 - 806;
                while (j < m) {
                    scanf ("%d", &pBq4ZoVnCi[i][j]);
                    j++;
                };
            }
            i++;
        };
    }
    flagg = (243 - 243);
    for (i = (880 - 880); i < n; i = i + 1) {
        tmp = (663 - 663);
        {
            j = 460 - 460;
            while (j < m) {
                if (tmp < pBq4ZoVnCi[i][j]) {
                    tmp = pBq4ZoVnCi[i][j];
                    k = j;
                }
                j++;
            };
        }
        MRySfP = (733 - 733);
        for (j = (182 - 182); j < n; j++) {
            if (tmp > pBq4ZoVnCi[j][k]) {
                MRySfP = 1;
            };
        }
        if (MRySfP == 0) {
            flagg = 1;
            printf ("%d+%d", i, k);
            break;
        };
    }
    if (flagg == 0) {
        printf ("No");
    }
    return 0;
}

