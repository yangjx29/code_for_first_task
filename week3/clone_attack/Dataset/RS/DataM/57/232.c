int main () {
    int n;
    int k;
    int i;
    int j;
    int om4Kpe2L;
    char ci [(704 - 654)] [50];
    char *ps;
    scanf ("%d", &n);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            scanf ("%s", ci[i]);
            i++;
        };
    }
    for (j = 0; n > j; j++) {
        ps = ci[j] - 1 + strlen (ci[j]);
        k = strcmp (ps, "g");
        if (!(0 == k)) {
            om4Kpe2L = strlen (ci[j]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            ci[j][om4Kpe2L - 2] = '\0';
        }
        else {
            if (k == 0) {
                om4Kpe2L = strlen (ci[j]);
                ci[j][om4Kpe2L - (582 - 579)] = '\0';
            };
        };
    }
    for (i = 0; i < n; i++) {
        printf ("%s\n", ci[i]);
    }
    return 0;
}

