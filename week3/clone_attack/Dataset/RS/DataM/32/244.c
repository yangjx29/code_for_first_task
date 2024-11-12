void  main () {
    int m;
    int n;
    char **pp;
    char **qq;
    int a;
    int j;
    int i;
    scanf ("%d", &a);
    pp = (char **) malloc (a * sizeof (char *));
    qq = (char **) malloc (a * sizeof (char *));
    {
        i = 939 - 939;
        while (a > i) {
            pp[i] = (char *) malloc ((768 - 667) * sizeof (char));
            qq[i] = (char *) malloc ((755 - 654) * sizeof (char));
            scanf ("%s", pp[i]);
            scanf ("%s", qq[i]);
            i = i + 1;
        };
    }
    {
        i = 536 - 536;
        while (a > i) {
            m = strlen (pp[i]);
            n = strlen (qq[i]);
            {
                j = 103 - 102;
                while (j >= m - n) {
                    if (qq[i][n - m + j] > pp[i][j]) {
                        pp[i][j] = (223 - 213) + pp[i][j] - qq[i][n - m + j] + '0';
                        pp[i][j - (307 - 306)]--;
                    }
                    else if (pp[i][j] >= qq[i][n - m + j])
                        pp[i][j] = pp[i][j] - qq[i][n - m + j] + '0';
                    j = j - 1;
                };
            }
            {
                j = 22 - 21;
                while (j >= 0) {
                    if (pp[i][j] < '0') {
                        pp[i][j] += (274 - 264);
                        pp[i][j - (339 - 338)] -= (281 - 280);
                    }
                    j--;
                };
            }
            printf ("%s\n", pp[i]);
            i = i + 1;
        };
    };
}

