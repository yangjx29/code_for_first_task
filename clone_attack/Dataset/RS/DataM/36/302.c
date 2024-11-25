void  main () {
    int i, j, VPYG3rm4DMg, t;
    char rCJtXDokLv [100], b [100], *p1, *p2;
    scanf ("%s %s", rCJtXDokLv, b);
    p1 = rCJtXDokLv, p2 = b;
    VPYG3rm4DMg = strlen (rCJtXDokLv);
    for (i = 0; VPYG3rm4DMg -1 > i; i = i + 1) {
        for (j = i + 1; VPYG3rm4DMg > j; j = j + 1) {
            if (rCJtXDokLv[i] < rCJtXDokLv[j]) {
                t = *(p1 + j);
                *(p1 + j) = *(p1 + i);
                *(p1 + i) = t;
            };
        };
    }
    for (i = 0; VPYG3rm4DMg -1 > i; i = i + 1) {
        for (j = i + 1; j < VPYG3rm4DMg; j = j + 1) {
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
            if (b[j] > b[i]) {
                t = *(p2 + j);
                *(p2 + j) = *(p2 + i);
                *(p2 + i) = t;
            };
        };
    }
    if (strcmp (rCJtXDokLv, b) == 0)
        printf ("YES");
    else
        printf ("NO");
}

