void  main () {
    int n, rrpvBchNbFoC;
    char a [(297 - 197)] [100];
    char (*p) [100];
    char *q;
    scanf ("%d\n", &n);
    {
        p = a;
        while (p < a + n) {
            gets (*p);
            p = p + 1;
        };
    }
    for (p = a; p < a + n; p = p + 1) {
        if (**p == '_' || ((**p >= 'a') && (**p <= 'z')) || ((**p >= 'A') && (**p <= 'Z'))) {
            for (q = *p; *q != 0; q++) {
                if (*q == '_' || ((*q >= 'a') && (*q <= 'z')) || ((*q >= 'A') && (*q <= 'Z')) || ((*q >= '0') && (*q <= '9')))
                    rrpvBchNbFoC = 1;
                else {
                    rrpvBchNbFoC = 0;
                    break;
                };
            };
        }
        else
            rrpvBchNbFoC = 0;
        printf ("%d\n", rrpvBchNbFoC);
    };
}

