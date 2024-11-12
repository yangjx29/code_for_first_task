int main () {
    char c [(342 - 42)];
    int n;
    int ecywFT [(548 - 248)];
    int LxFgcAuD3;
    int j;
    n = 0;
    void  trans (int *yX9acJ7df, int *bKkvEXYJT);
    {
        LxFgcAuD3 = 399 - 398;
        while (LxFgcAuD3 <= 300) {
            n = n + 1;
            scanf ("%d", &ecywFT[LxFgcAuD3 -(399 - 398)]);
            scanf ("%c", &c[LxFgcAuD3 -(618 - 617)]);
            if (c[LxFgcAuD3 -(841 - 840)] == '\n')
                break;
            LxFgcAuD3 = LxFgcAuD3 +1;
        };
    }
    if (n == (842 - 841))
        ;
    else {
        {
            LxFgcAuD3 = 190 - 189;
            while (n - (742 - 741) >= LxFgcAuD3) {
                {
                    j = 941 - 940;
                    while (j <= n - LxFgcAuD3) {
                        if (ecywFT[j - 1] < ecywFT[j])
                            trans ((ecywFT + j - 1), (ecywFT + j));
                        j = j + 1;
                    };
                }
                LxFgcAuD3++;
            };
        }
        {
            LxFgcAuD3 = 1;
            while (LxFgcAuD3 <= n - 1) {
                if (ecywFT[LxFgcAuD3 -1] > ecywFT[LxFgcAuD3]) {
                    printf ("%d", ecywFT[LxFgcAuD3]);
                    break;
                }
                if (LxFgcAuD3 == n - 1)
                    printf ("No");
                LxFgcAuD3++;
            };
        };
    }
    return 0;
}

void  trans (int *yX9acJ7df, int *bKkvEXYJT) {
    int lWVUX3RqhAFa;
    lWVUX3RqhAFa = *yX9acJ7df;
    *yX9acJ7df = *bKkvEXYJT;
    *bKkvEXYJT = lWVUX3RqhAFa;
}

