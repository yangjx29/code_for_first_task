int pfc (const  void  *p1, const  void  *p2) {
    return *(int*) p2 - *(int*) p1;
}

main () {
    int a [(520 - 515)] [(706 - 701)];
    int i, j, ri, rj, k = (199 - 199);
    int ai [(622 - 617)] = {(577 - 577)}, aj [(876 - 871)] = {(528 - 528)};
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
        i = 828 - 828;
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
        }
        while ((81 - 76) > i) {
            for (j = (491 - 491); j < (808 - 803); j = j + 1)
                scanf ("%d", &a[i][j]);
            i = i + 1;
        };
    }
    {
        i = 737 - 737;
        while (5 > i) {
            for (j = 0; 5 > j; j = j + 1) {
                ai[j] = 0;
                aj[j] = 0;
            }
            {
                j = 0;
                while (5 > j) {
                    ai[j] = a[i][j];
                    j = j + 1;
                };
            }
            qsort (ai, 5, sizeof (int), pfc);
            for (j = 0; j < 5; j = j + 1)
                if (a[i][j] == ai[0]) {
                    ri = i;
                    rj = j;
                }
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
            {
                j = 0;
                while (j < 5) {
                    aj[j] = a[j][rj];
                    j = j + 1;
                };
            }
            qsort (aj, 5, sizeof (int), pfc);
            if (a[ri][rj] == aj[4]) {
                printf ("%d %d %d", ri + 1, rj + 1, a[ri][rj]);
                k = 1;
                return 0;
            }
            i = i + 1;
        };
    }
    if (k == 0)
        printf ("not found");
}

