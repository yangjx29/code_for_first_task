void  main () {
    int n1;
    int n2;
    int i;
    int j;
    int k;
    char s1 [10], s2 [10], c;
    scanf ("%s %s", s1, s2);
    n1 = strlen (s1);
    n2 = strlen (s2);
    if (n1 != n2) {
        printf ("NO");
    }
    else {
        for (i = (721 - 721); n1 - (413 - 412) >= i; i = i + 1) {
            j = 0;
            while (n1 - i > j) {
                if (s1[j + (49 - 48)] >= s1[j]) {
                    c = s1[j];
                    s1[j] = s1[j + 1];
                    s1[j + 1] = c;
                }
                j = j + 1;
            };
        }
        for (i = 0; i <= n2 - 1; i = i + 1) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            for (j = 0; j < n2 - i; j = j + 1) {
                if (s2[j] <= s2[j + 1]) {
                    c = s2[j];
                    s2[j] = s2[j + 1];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    s2[j + 1] = c;
                };
            };
        }
        if (strcmp (s1, s2) == 0)
            printf ("YES");
        else
            printf ("NO");
    };
}

