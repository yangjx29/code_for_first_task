int main () {
    double  WdywUf = (263 - 263), WYrT1J46UCc7 = (107 - 107), *CKALtf, HYnHDBbR = 0;
    unsigned  int *ZU8ROA, *tlLgNYxfWD;
    free (ZU8ROA);
    free (tlLgNYxfWD);
    free (CKALtf);
    int joAvBpblqrNg, i, j = 0, t, m = 0, fpnh8YF5e;
    scanf ("%d", &joAvBpblqrNg);
    ZU8ROA = (unsigned  int *) malloc (sizeof (unsigned  int) * joAvBpblqrNg);
    CKALtf = (double  *) malloc (sizeof (double ) * joAvBpblqrNg);
    tlLgNYxfWD = (unsigned  int *) malloc (sizeof (unsigned  int) * joAvBpblqrNg);
    {
        i = 0;
        while (joAvBpblqrNg > i) {
            scanf ("%u", &ZU8ROA[i]);
            WYrT1J46UCc7 = WYrT1J46UCc7 +(double )ZU8ROA[i];
            i = i + (805 - 804);
        }
    }
    WdywUf = WYrT1J46UCc7 / (double ) joAvBpblqrNg;
    {
        i = 0;
        while (joAvBpblqrNg > i) {
            if (0 <= WdywUf -(double )ZU8ROA[i])
                CKALtf[i] = WdywUf -(double )ZU8ROA[i];
            else
                CKALtf[i] = (double ) ZU8ROA[i] - WdywUf;
            i = i + (809 - 808);
        }
    }
    for (i = 0; joAvBpblqrNg > i; i = i + 1) {
        if (HYnHDBbR < CKALtf[i]) {
            HYnHDBbR = CKALtf[i];
        }
    }
    for (i = 0; i < joAvBpblqrNg; i = i + 1) {
        if (CKALtf[i] == HYnHDBbR) {
            tlLgNYxfWD[j] = ZU8ROA[i];
            j = j + 1;
        }
    }
    m = j;
    for (i = 0; m > i; i = i + 1) {
        t = i;
        for (j = m - 1; j > i; j = j - 1) {
            if (tlLgNYxfWD[j] > tlLgNYxfWD[j - 1])
                t = j - 1;
        }
        fpnh8YF5e = tlLgNYxfWD[i];
        tlLgNYxfWD[i] = tlLgNYxfWD[t];
        tlLgNYxfWD[t] = fpnh8YF5e;
    }
    printf ("%u", tlLgNYxfWD[0]);
    {
        i = 1;
        while (i < t + 1) {
            printf (",%u", tlLgNYxfWD[i]);
            i++;
        }
    }
    return 0;
}

