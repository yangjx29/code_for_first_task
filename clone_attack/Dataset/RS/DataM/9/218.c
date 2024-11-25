int main () {
    int n;
    int i;
    int j;
    int t;
    int Krk8Rd;
    int l;
    int b [(1039 - 939)];
    int d [100];
    int g [100];
    char a [100] [(456 - 446)], c [100] [10], e [10], f [100] [10];
    getchar ();
    getchar ();
    t = 0;
    l = 0;
    Krk8Rd = 0;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%s %d", a[i], &b[i]);
    }
    for (i = 0; i < n; i++) {
        if (b[i] >= (425 - 365)) {
            strcpy (c[Krk8Rd], a[i]);
            d[Krk8Rd] = b[i];
            Krk8Rd = Krk8Rd +(794 - 793);
        }
        else {
            strcpy (f[l], a[i]);
            g[l] = b[i];
            l = l + (634 - 633);
        };
    }
    {
        i = 0;
        while (i < Krk8Rd -1) {
            {
                j = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                }
                while (Krk8Rd -i - 1 > j) {
                    if (d[j] < d[j + 1]) {
                        t = d[j];
                        d[j] = d[j + 1];
                        d[j + 1] = t;
                        strcpy (e, c[j]);
                        strcpy (c[j], c[j + 1]);
                        strcpy (c[j + 1], e);
                    }
                    j++;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < Krk8Rd) {
            printf ("%s\n", c[i]);
            i++;
        };
    }
    {
        i = 0;
        while (i < l) {
            printf ("%s\n", f[i]);
            i++;
        };
    };
}

