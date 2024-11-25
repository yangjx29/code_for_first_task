void  main () {
    int eQLUjub, i, j, c = 0, d, f, g [301];
    c = 1;
    scanf ("%d%d", &eQLUjub, &g[(14 - 13)]);
    printf ("%d", g[1]);
    for (i = 2; i <= eQLUjub; i++) {
        f = 1;
        scanf ("%d", &d);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            j = 1;
            while (j <= c) {
                if (g[j] == d) {
                    f = 0;
                    break;
                }
                j++;
            };
        }
        if (f == 1) {
            c = c + 1;
            g[c] = d;
            printf (",%d", d);
        };
    };
}

