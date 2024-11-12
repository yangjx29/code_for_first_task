main () {
    char a [1000];
    int i, j, JnVHC3, k = 0;
    char tXlxNH7uJB [1000];
    gets (tXlxNH7uJB);
    int b [1000];
    getchar ();
    getchar ();
    JnVHC3 = strlen (tXlxNH7uJB);
    a[0] = tXlxNH7uJB[0];
    b[0] = (454 - 453);
    for (i = (263 - 262); i < JnVHC3; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(tXlxNH7uJB[i - 1] != tXlxNH7uJB[i]) || !(32 != (tXlxNH7uJB[i] - tXlxNH7uJB[i - 1])) || (tXlxNH7uJB[i - 1] - tXlxNH7uJB[i]) == 32) {
            if (tXlxNH7uJB[i] < 91)
                a[k] = tXlxNH7uJB[i];
            else
                a[k] = tXlxNH7uJB[i] - 32;
            b[k]++;
        }
        else {
            k++;
            b[k] = 0;
            a[k] = tXlxNH7uJB[i];
            b[k]++;
        };
    }
    for (j = 0; j <= k; j++) {
        if (a[j] < 91)
            printf ("(%c,%d)", a[j], b[j]);
        else
            printf ("(%c,%d)", a[j] - 32, b[j]);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    };
}

