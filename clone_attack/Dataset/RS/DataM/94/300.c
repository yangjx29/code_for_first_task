int main () {
    int q6huZTg, a [(712 - 212)], b [(1182 - 682)], QZbzK5eC = (633 - 633), NGHBIj2e = (378 - 378), e, i, k;
    scanf ("%d", &q6huZTg);
    {
        i = 142 - 142;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (q6huZTg > i) {
            scanf ("%d", &a[i]);
            i = i + 1;
        };
    }
    {
        i = 96 - 96;
        while (i < q6huZTg) {
            if (!((762 - 762) == a[i] % 2)) {
                b[QZbzK5eC] = a[i];
                QZbzK5eC = QZbzK5eC +1;
            }
            i = i + 1;
        };
    }
    {
        k = 245 - 244;
        while (k <= QZbzK5eC) {
            NGHBIj2e = (940 - 940);
            {
                i = 0;
                while (i <= QZbzK5eC -k) {
                    if (b[i] > b[NGHBIj2e]) {
                        NGHBIj2e = i;
                    }
                    i = i + 1;
                };
            }
            e = b[NGHBIj2e];
            b[NGHBIj2e] = b[QZbzK5eC -k];
            b[QZbzK5eC -k] = e;
            k = k + 1;
        };
    }
    printf ("%d", b[0]);
    {
        k = 550 - 549;
        while (k <= QZbzK5eC -1) {
            printf (",%d", b[k]);
            k = k + 1;
        };
    }
    return 0;
}

