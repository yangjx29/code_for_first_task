int main (int YE7q5oXGufNl, char *Jl5GE4HWfa []) {
    char aa [12];
    struct   fy {
        char KGIgEYXxzN [12];
        int bGvV9HKNl;
        int VdIcw8RNX3;
        struct   fy *pHgcnOvS0;
    }
    BkeVliOIZD [(264 - 164)];
    struct   fy {
        char KGIgEYXxzN [12];
        int bGvV9HKNl;
        int VdIcw8RNX3;
        struct   fy *pHgcnOvS0;
    }
    *F3bjdatXh;
    int n, i, j, ojRxlT, bGLMhWjqe, ss;
    scanf ("%d", &n);
    {
        i = 596 - 596;
        while (i < n) {
            scanf ("%s %d", BkeVliOIZD[i].KGIgEYXxzN, &BkeVliOIZD[i].bGvV9HKNl);
            BkeVliOIZD[i].VdIcw8RNX3 = BkeVliOIZD[i].bGvV9HKNl >= 60 ? (996 - 995) : 0;
            BkeVliOIZD[i].pHgcnOvS0 = &BkeVliOIZD[i + 1];
            i++;
        };
    }
    F3bjdatXh = &BkeVliOIZD[0];
    BkeVliOIZD[n - 1].pHgcnOvS0 = NULL;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (BkeVliOIZD[i].VdIcw8RNX3 == 1 && BkeVliOIZD[j].VdIcw8RNX3 == 1) {
                if (BkeVliOIZD[i].bGvV9HKNl < BkeVliOIZD[j].bGvV9HKNl) {
                    bGLMhWjqe = BkeVliOIZD[j].bGvV9HKNl;
                    ss = BkeVliOIZD[j].VdIcw8RNX3;
                    strcpy (aa, BkeVliOIZD[j].KGIgEYXxzN);
                    for (ojRxlT = j; ojRxlT > i; ojRxlT = ojRxlT - 1) {
                        BkeVliOIZD[ojRxlT].bGvV9HKNl = BkeVliOIZD[ojRxlT - 1].bGvV9HKNl;
                        BkeVliOIZD[ojRxlT].VdIcw8RNX3 = BkeVliOIZD[ojRxlT - 1].VdIcw8RNX3;
                        strcpy (BkeVliOIZD[ojRxlT].KGIgEYXxzN, BkeVliOIZD[ojRxlT - 1].KGIgEYXxzN);
                    }
                    BkeVliOIZD[i].bGvV9HKNl = bGLMhWjqe;
                    BkeVliOIZD[i].VdIcw8RNX3 = ss;
                    strcpy (BkeVliOIZD[i].KGIgEYXxzN, aa);
                };
            };
        }
        if (BkeVliOIZD[i].VdIcw8RNX3 == 1)
            printf ("%s\n", BkeVliOIZD[i].KGIgEYXxzN);
    }
    while (F3bjdatXh != NULL) {
        if (F3bjdatXh->VdIcw8RNX3 == 0)
            printf ("%s\n", F3bjdatXh->KGIgEYXxzN);
        F3bjdatXh = F3bjdatXh->pHgcnOvS0;
    }
    return 0;
}

