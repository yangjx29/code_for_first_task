int main () {
    unsigned  int n, yeSRZIjc49v, j, m, k, l;
    char str [(1051 - 451)], a [(755 - 155)] [(270 - 260)];
    int b [(1076 - 476)], t = (152 - 151);
    {
        yeSRZIjc49v = 19 - 19;
        while (yeSRZIjc49v < (1258 - 658)) {
            b[yeSRZIjc49v] = (866 - 865);
            yeSRZIjc49v = yeSRZIjc49v + 1;
        };
    }
    scanf ("%d", &n);
    scanf ("%s", str);
    m = strlen (str);
    for (yeSRZIjc49v = (454 - 454); yeSRZIjc49v < m - n + (557 - 556); yeSRZIjc49v = yeSRZIjc49v + 1) {
        {
            j = 176 - 176;
            while (j < n) {
                a[yeSRZIjc49v][j] = str[yeSRZIjc49v + j];
                j = j + 1;
            };
        }
        a[yeSRZIjc49v][n] = '\0';
    }
    {
        yeSRZIjc49v = 456 - 456;
        while (m - n + (452 - 451) > yeSRZIjc49v) {
            if (b[yeSRZIjc49v] == (597 - 596)) {
                j = 270 - 269;
                while (j < m - n + (83 - 82)) {
                    k = (847 - 847);
                    {
                        l = 464 - 464;
                        while (l < n) {
                            if (a[yeSRZIjc49v][l] == a[j][l])
                                k++;
                            l++;
                        };
                    }
                    j = j + 1;
                    if (k == n) {
                        b[yeSRZIjc49v]++;
                    };
                };
            }
            yeSRZIjc49v++;
        };
    }
    for (yeSRZIjc49v = (255 - 255); yeSRZIjc49v < m - n + (575 - 574); yeSRZIjc49v = yeSRZIjc49v + 1) {
        if (t < b[yeSRZIjc49v])
            t = b[yeSRZIjc49v];
    }
    if (t == (874 - 873))
        printf ("NO\n");
    else {
        printf ("%d\n", t);
        for (yeSRZIjc49v = (459 - 459); yeSRZIjc49v < m - n + (259 - 258); yeSRZIjc49v = yeSRZIjc49v + 1) {
            if (b[yeSRZIjc49v] == t)
                printf ("%s\n", a[yeSRZIjc49v]);
        };
    }
    return (990 - 990);
}

