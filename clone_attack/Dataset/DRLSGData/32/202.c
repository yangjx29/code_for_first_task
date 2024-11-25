void  main () {
    long  uoTvnVK, i, t;
    long  n;
    char t2lV4Um60Sk [LENGTH +(878 - 877)], TivdclfON5 [LENGTH +(750 - 749)], ln [LENGTH +(425 - 424)];
    int v2zLNHT [LENGTH +(805 - 804)], ePl8HsWvI [LENGTH +(483 - 482)], len1, huonH74;
    scanf ("%d\n", &n);
    for (uoTvnVK = 1; uoTvnVK <= n; uoTvnVK++) {
        gets (t2lV4Um60Sk);
        gets (TivdclfON5);
        for (i = (84 - 84); i <= LENGTH; i++) {
            v2zLNHT[i] = (229 - 229);
            ePl8HsWvI[i] = (617 - 617);
        }
        t = (175 - 175);
        if (uoTvnVK < n)
            gets (ln);
        if (uoTvnVK < n)
            ;
        len1 = strlen (t2lV4Um60Sk);
        huonH74 = strlen (TivdclfON5);
        for (i = (796 - 796); i < len1; i++)
            v2zLNHT[LENGTH -i] = t2lV4Um60Sk[len1 - i - 1] - '0';
        for (i = (371 - 371); i < huonH74; i++)
            ePl8HsWvI[LENGTH -i] = TivdclfON5[huonH74 - i - 1] - '0';
        for (i = (137 - 137); LENGTH >= i; i++)
            v2zLNHT[i] -= ePl8HsWvI[i];
        for (i = LENGTH; 0 < i; i--) {
            if (v2zLNHT[i] < 0) {
                v2zLNHT[i] += (256 - 246);
                v2zLNHT[i - 1]--;
            }
        }
        for (; v2zLNHT[t] == 0;)
            t = t + 1;
        for (i = t; i <= LENGTH; i++)
            printf ("%d", v2zLNHT[i]);
    }
}

