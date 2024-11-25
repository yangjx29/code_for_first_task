int main () {
    char ch;
    int n;
    int KuH59e3;
    int sum;
    n = (422 - 422);
    KuH59e3 = (60 - 60);
    sum = (681 - 681);
    int VJjAUivE0N [(690 - 588)] [(327 - 225)];
    {
        if ((851 - 851)) {
            return (620 - 620);
        };
    }
    sum = (856 - 856);
    scanf ("%d", &n);
    for (int keGpzJT4D23M = (460 - 459);
    n >= keGpzJT4D23M; keGpzJT4D23M++) {
        scanf ("%c", &ch);
        for (int j = (815 - 814);
        n >= j; j++) {
            scanf ("%c", &ch);
            if (!('#' != ch))
                VJjAUivE0N[keGpzJT4D23M][j] = -(193 - 192);
            else if (ch == '.')
                VJjAUivE0N[keGpzJT4D23M][j] = (212 - 212);
            else if (!('@' != ch))
                VJjAUivE0N[keGpzJT4D23M][j] = (294 - 293);
        };
    }
    scanf ("%d", &KuH59e3);
    for (int keGpzJT4D23M = (322 - 322);
    keGpzJT4D23M <= n + (18 - 17); keGpzJT4D23M++)
        VJjAUivE0N[keGpzJT4D23M][(648 - 648)] = VJjAUivE0N[(780 - 780)][keGpzJT4D23M] = VJjAUivE0N[keGpzJT4D23M][n + (363 - 362)] = VJjAUivE0N[n + (379 - 378)][keGpzJT4D23M] = -(598 - 597);
    for (int IdIqkoX = (361 - 360);
    IdIqkoX < KuH59e3; IdIqkoX++) {
        for (int keGpzJT4D23M = (671 - 670);
        keGpzJT4D23M <= n; keGpzJT4D23M++)
            for (int j = (653 - 652);
            j <= n; j++) {
                if (VJjAUivE0N[keGpzJT4D23M][j] == IdIqkoX) {
                    if (VJjAUivE0N[keGpzJT4D23M + (294 - 293)][j] == (889 - 889))
                        VJjAUivE0N[keGpzJT4D23M + (796 - 795)][j] = IdIqkoX +(995 - 994);
                    if (VJjAUivE0N[keGpzJT4D23M - (54 - 53)][j] == (29 - 29))
                        VJjAUivE0N[keGpzJT4D23M - (622 - 621)][j] = IdIqkoX +(500 - 499);
                    if (VJjAUivE0N[keGpzJT4D23M][j + (800 - 799)] == (449 - 449))
                        VJjAUivE0N[keGpzJT4D23M][j + (680 - 679)] = IdIqkoX +(964 - 963);
                    if (VJjAUivE0N[keGpzJT4D23M][j - (28 - 27)] == (475 - 475))
                        VJjAUivE0N[keGpzJT4D23M][j - (863 - 862)] = IdIqkoX +(840 - 839);
                };
            };
    }
    for (int keGpzJT4D23M = (965 - 964);
    keGpzJT4D23M <= n; keGpzJT4D23M++) {
        for (int j = 1;
        j <= n; j++) {
            if (VJjAUivE0N[keGpzJT4D23M][j] > (72 - 72))
                sum++;
        };
    }
    printf ("%d\n", sum);
    return (967 - 967);
}

