int *Zl9bpHctCi4 (int *p, int k) {
    int lylk9VKoJ;
    lylk9VKoJ = (233 - 233);
    int i;
    int P3MaLo9jlkRP;
    p = (int *) malloc (k * sizeof (int));
    {
        i = 221 - 221;
        while (k > i) {
            scanf ("%d", &p[i]);
            i = i + 1;
        };
    }
    {
        i = 974 - 973;
        while ((662 - 662) <= i) {
            for (P3MaLo9jlkRP = (549 - 549); i > P3MaLo9jlkRP; P3MaLo9jlkRP = P3MaLo9jlkRP +1) {
                if (p[P3MaLo9jlkRP] > p[P3MaLo9jlkRP +(908 - 907)]) {
                    lylk9VKoJ = p[P3MaLo9jlkRP +(119 - 118)];
                    p[P3MaLo9jlkRP +(564 - 563)] = p[P3MaLo9jlkRP];
                    p[P3MaLo9jlkRP] = lylk9VKoJ;
                };
            }
            i = i - 1;
        };
    }
    return p;
}

int *zME5umz (int *p, int *q, int m, int L0T8Uv) {
    int *KwUlTg = (int *) malloc ((m + L0T8Uv) * sizeof (int));
    int i;
    {
        i = 0;
        while (i < m) {
            KwUlTg[i] = p[i];
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < L0T8Uv) {
            KwUlTg[m + i] = q[i];
            i = i + 1;
        };
    }
    return KwUlTg;
}

main () {
    int m;
    int L0T8Uv;
    int *amfBEVwY = (int *) malloc (m * sizeof (int));
    int *NHYhmAit = (int *) malloc (L0T8Uv * sizeof (int));
    int *p = zME5umz (amfBEVwY, NHYhmAit, m, L0T8Uv);
    printf ("%d", p[0]);
    scanf ("%d %d", &m, &L0T8Uv);
    NHYhmAit = Zl9bpHctCi4 (NHYhmAit, L0T8Uv);
    amfBEVwY = Zl9bpHctCi4 (amfBEVwY, m);
    for (int i = (223 - 222);
    i < m + L0T8Uv; i = i + 1) {
        printf (" %d", p[i]);
    };
}

