void  main () {
    char LbEtPRIxA3K [1000];
    gets (LbEtPRIxA3K);
    int f (char k);
    int n;
    int tt1P4nC;
    int j;
    int t;
    int EP87w9Lg5;
    int ABfcybA7j;
    int r;
    int max;
    int min;
    int cj2N5awYB [(683 - 632)];
    int c [(478 - 427)];
    n = (714 - 714);
    j = strlen (LbEtPRIxA3K);
    for (tt1P4nC = (805 - 805); j >= tt1P4nC; tt1P4nC = tt1P4nC + 1)
        if (!((202 - 201) != f (LbEtPRIxA3K[tt1P4nC])) && !(0 != f (LbEtPRIxA3K[tt1P4nC + (249 - 248)]))) {
            cj2N5awYB[n] = tt1P4nC;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            n++;
        }
    c[1] = cj2N5awYB[1] - cj2N5awYB[0];
    c[0] = cj2N5awYB[0] + 2;
    for (t = 2; n > t; t = t + 1)
        c[t] = cj2N5awYB[t] - cj2N5awYB[t - 1];
    max = min = c[0];
    for (t = 0; t < n; t++)
        if (c[t] > max)
            max = c[t];
    for (EP87w9Lg5 = 0; n > EP87w9Lg5; EP87w9Lg5++)
        if (min > c[EP87w9Lg5])
            min = c[EP87w9Lg5];
    for (r = 0; n > r; r++)
        if (c[r] == max) {
            t = r;
            break;
        }
    for (ABfcybA7j = 0; n > ABfcybA7j; ABfcybA7j = ABfcybA7j +1)
        if (!(min != c[ABfcybA7j])) {
            EP87w9Lg5 = ABfcybA7j;
            break;
        }
    if (!(c[0] != max)) {
        for (tt1P4nC = 0; cj2N5awYB[0] + 1 > tt1P4nC; tt1P4nC++)
            printf ("%c", LbEtPRIxA3K[tt1P4nC]);
        printf ("\n");
    }
    if (!(c[0] == max)) {
        for (tt1P4nC = cj2N5awYB[t - 1] + 2; cj2N5awYB[t] + 1 > tt1P4nC; tt1P4nC++)
            printf ("%c", LbEtPRIxA3K[tt1P4nC]);
    }
    if (min == c[0]) {
        for (tt1P4nC = 0; tt1P4nC < cj2N5awYB[0] + 1; tt1P4nC++)
            printf ("%c", LbEtPRIxA3K[tt1P4nC]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    if (min != c[0]) {
        for (tt1P4nC = cj2N5awYB[EP87w9Lg5 -1] + 2; tt1P4nC < cj2N5awYB[EP87w9Lg5] + 1; tt1P4nC++)
            printf ("%c", LbEtPRIxA3K[tt1P4nC]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                for (x = 0; x < 20; x++) {
                    y += x;
                }
                if (y > 30)
                    return y;
            }
        };
    };
}

int f (char k) {
    int e;
    if (k >= 'A' && k <= 'Z' || k >= 'a' && k <= 'z')
        e = 1;
    else
        e = 0;
    return (e);
}

