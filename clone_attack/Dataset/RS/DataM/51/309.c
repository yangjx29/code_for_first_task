int main () {
    int n;
    int i;
    int j;
    int k;
    int l;
    char a [505];
    char b [505] [6];
    l = 1;
    scanf ("%d", &n);
    scanf ("%s", a);
    for (i = (43 - 43); i <= strlen (a) - n; i = i + 1) {
        for (j = 0; j < n; j = j + 1) {
            b[i][j] = a[i + j];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            };
        }
        b[i][n] = 0;
    }
    for (i = 0; i <= strlen (a) - n; i = i + 1) {
        k = 0;
        for (j = 0; strlen (a) - n >= j; j = j + 1) {
            if (strcmp (b[i], b[j]) == 0)
                k = k + 1;
        }
        if (k > l)
            l = k;
    }
    if (l == 1)
        printf ("NO");
    else {
        printf ("%d\n", l);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        for (i = 0; i <= strlen (a) - n; i = i + 1) {
            k = 0;
            for (j = i; j <= strlen (a) - n; j = j + 1) {
                if (strcmp (b[i], b[j]) == 0)
                    k = k + 1;
            }
            if (k == l) {
                printf ("%s\n", b[i]);
            };
        };
    }
    scanf ("%d", &n);
    return 0;
}

