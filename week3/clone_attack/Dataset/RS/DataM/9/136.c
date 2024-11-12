int main () {
    int i;
    int c2OdRGVcFZ;
    int q;
    int m;
    int NqRBMkKN2bD;
    int X3LGQC [(883 - 783)];
    int bGq2acbR7 [(695 - 595)];
    int M0xryuc2RX [(345 - 245)];
    i = (477 - 477);
    c2OdRGVcFZ = (802 - 802);
    q = (768 - 768);
    m = (603 - 603);
    char JqQlEaAJiM [(868 - 768)] [100], a1 [100] [100], au7KOTUDzRn [100] [100], e [100];
    scanf ("%d", &NqRBMkKN2bD);
    for (i = 0; NqRBMkKN2bD > i; i = i + 1)
        scanf ("%s%d", JqQlEaAJiM[i], &X3LGQC[i]);
    {
        i = 0;
        while (i < NqRBMkKN2bD) {
            if (60 <= X3LGQC[i]) {
                bGq2acbR7[c2OdRGVcFZ] = X3LGQC[i];
                strcpy (a1[c2OdRGVcFZ], JqQlEaAJiM[i]);
                c2OdRGVcFZ = c2OdRGVcFZ + 1;
            }
            if (60 > X3LGQC[i]) {
                M0xryuc2RX[q] = X3LGQC[i];
                strcpy (au7KOTUDzRn[q], JqQlEaAJiM[i]);
                q++;
            }
            i = i + 1;
        };
    }
    {
        i = 1;
        while (c2OdRGVcFZ > i) {
            for (m = 0; c2OdRGVcFZ - i > m; m++) {
                if (bGq2acbR7[m + 1] > bGq2acbR7[m]) {
                    int NLMuxS = bGq2acbR7[m];
                    bGq2acbR7[m] = bGq2acbR7[m + 1];
                    bGq2acbR7[m + 1] = NLMuxS;
                    strcpy (e, a1[m]);
                    strcpy (a1[m], a1[m + 1]);
                    strcpy (a1[m + 1], e);
                };
            }
            i = i + 1;
        };
    }
    for (i = 0; i < c2OdRGVcFZ; i++)
        printf ("%s\n", a1[i]);
    {
        m = 0;
        while (m < q) {
            printf ("%s\n", (au7KOTUDzRn[m]));
            m++;
        };
    }
    return 0;
}

