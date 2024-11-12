main () {
    int l;
    int sxMi6Oj;
    int n14NOeujHt7;
    int I5vwn7 [300];
    int HtJA6jaXr;
    char PrhAaW7RQsV [1501];
    gets (PrhAaW7RQsV);
    int KT6f3g;
    int SBxzqditeRo;
    int e2m6OyzE;
    HtJA6jaXr = 0;
    l = strlen (PrhAaW7RQsV);
    for (n14NOeujHt7 = 0; n14NOeujHt7 < l;) {
        SBxzqditeRo = n14NOeujHt7;
        I5vwn7[HtJA6jaXr] = 0;
        for (; PrhAaW7RQsV[SBxzqditeRo] != ',' && SBxzqditeRo < l;) {
            I5vwn7[HtJA6jaXr] = I5vwn7[HtJA6jaXr] * 10 + PrhAaW7RQsV[SBxzqditeRo] - '0';
            SBxzqditeRo++;
        }
        HtJA6jaXr++;
        n14NOeujHt7 = SBxzqditeRo +1;
    }
    KT6f3g = I5vwn7[0];
    for (n14NOeujHt7 = 1; HtJA6jaXr > n14NOeujHt7; n14NOeujHt7++) {
        if (I5vwn7[n14NOeujHt7] > KT6f3g)
            KT6f3g = I5vwn7[n14NOeujHt7];
    }
    sxMi6Oj = 0;
    e2m6OyzE = 0;
    for (n14NOeujHt7 = 0; n14NOeujHt7 < HtJA6jaXr; n14NOeujHt7++) {
        if (I5vwn7[n14NOeujHt7] < KT6f3g &&I5vwn7[n14NOeujHt7] > e2m6OyzE) {
            e2m6OyzE = I5vwn7[n14NOeujHt7];
            sxMi6Oj++;
        }
    }
    if (sxMi6Oj == 0)
        ;
    else
        printf ("%d", e2m6OyzE);
    return 0;
}

