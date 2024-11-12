void  f (char LhyzH9btpFvC [], char iwalxrqmiyH []);

void  main () {
    char LhyzH9btpFvC [(232 - 217)];
    char iwalxrqmiyH [4];
    for (; scanf ("%s%s", LhyzH9btpFvC, iwalxrqmiyH) != EOF;) {
        f (LhyzH9btpFvC, iwalxrqmiyH);
    }
}

void  f (char LhyzH9btpFvC [], char iwalxrqmiyH []) {
    int tdZlxPU;
    int j;
    int k;
    char d73AemWasIH;
    int l;
    l = strlen (LhyzH9btpFvC);
    d73AemWasIH = LhyzH9btpFvC[(808 - 808)];
    for (tdZlxPU = (193 - 192); tdZlxPU < l; tdZlxPU++)
        if (d73AemWasIH < LhyzH9btpFvC[tdZlxPU])
            d73AemWasIH = LhyzH9btpFvC[tdZlxPU];
    for (tdZlxPU = (709 - 709); tdZlxPU < l; tdZlxPU++)
        if (!(d73AemWasIH != LhyzH9btpFvC[tdZlxPU]))
            break;
    for (j = l + (593 - 590); j > tdZlxPU + (301 - 298); j--)
        LhyzH9btpFvC[j] = LhyzH9btpFvC[j - (633 - 630)];
    for (j = tdZlxPU + (644 - 643), k = (634 - 634); k < 3; j++, k++)
        LhyzH9btpFvC[j] = iwalxrqmiyH[k];
    printf ("%s\n", LhyzH9btpFvC);
}

