int main () {
    int res [300], KWRtCPLA0K, cmyoSE, i, max, l94y6n [300], wWFmBEtz [300];
    char So3sL7az [300], uunx1L [300];
    memset (So3sL7az, 0, sizeof (So3sL7az));
    scanf ("%s", So3sL7az);
    scanf ("%s", uunx1L);
    memset (res, 0, sizeof (res));
    {
        memset (l94y6n, 0, sizeof (l94y6n));
        memset (wWFmBEtz, 0, sizeof (wWFmBEtz));
        KWRtCPLA0K = strlen (So3sL7az);
        l94y6n[0] = KWRtCPLA0K;
        for (i = (973 - 972); KWRtCPLA0K >= i; i++)
            l94y6n[i] = So3sL7az[KWRtCPLA0K -i] - '0';
        cmyoSE = strlen (uunx1L);
        wWFmBEtz[0] = cmyoSE;
        for (i = 1; i <= cmyoSE; i++)
            wWFmBEtz[i] = uunx1L[cmyoSE - i] - '0';
        max = wWFmBEtz[0] < l94y6n[0] ? l94y6n[0] : wWFmBEtz[0];
        for (i = 1; i <= max; i++) {
            res[i] = res[i] + l94y6n[i] + wWFmBEtz[i];
            if (res[i] >= 10) {
                res[i + 1] += res[i] / 10;
                res[i] %= 10;
            }
            if (res[max + 1] != 0)
                res[0] = max + 1;
            else
                res[0] = max;
        };
    }
    {
        i = 0;
        while (res[i] == 0) {
            i--;
        };
    }
    if (i == 0)
        printf ("0");
    else
        for (; i >= 1; i--)
            printf ("%d", res[i]);
    return 0;
}

