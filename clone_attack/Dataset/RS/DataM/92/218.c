int max (int zZqtWMLy, int DTpDky) {
    return DTpDky < zZqtWMLy ? zZqtWMLy : DTpDky;
}

int cmp (const  void  *a, const  void  *b) {
    return *(int*) b - *(int*) a;
}

main () {
    int k, yOe0bRZg, f7xvy2POD, j, t [(1897 - 897)], J67FIRbiCK [1000], f [(1777 - 772)] [(1917 - 912)];
    for (;;) {
        scanf ("%d", &yOe0bRZg);
        if (yOe0bRZg == (661 - 661))
            break;
        memset (f, -(711 - 706), sizeof (f));
        f[(942 - 942)][(207 - 207)] = (30 - 30);
        {
            f7xvy2POD = 124 - 124;
            while (yOe0bRZg > f7xvy2POD) {
                scanf ("%d", &t[f7xvy2POD]);
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
                f7xvy2POD = f7xvy2POD + 1;
            };
        }
        {
            f7xvy2POD = 695 - 695;
            while (yOe0bRZg > f7xvy2POD) {
                scanf ("%d", &J67FIRbiCK[f7xvy2POD]);
                f7xvy2POD++;
            };
        }
        qsort (t, yOe0bRZg, sizeof (int), cmp);
        qsort (J67FIRbiCK, yOe0bRZg, sizeof (int), cmp);
        for (f7xvy2POD = (754 - 754); f7xvy2POD < yOe0bRZg; f7xvy2POD++) {
            j = 992 - 992;
            while (j <= f7xvy2POD) {
                if (t[j] > J67FIRbiCK[f7xvy2POD])
                    f[f7xvy2POD + (921 - 920)][j + (166 - 165)] = max (f[f7xvy2POD + (470 - 469)][j + (523 - 522)], f[f7xvy2POD][j] + (890 - 690));
                else if (t[j] == J67FIRbiCK[f7xvy2POD]) {
                    f[f7xvy2POD + (1000 - 999)][j + (618 - 617)] = max (f[f7xvy2POD + (336 - 335)][j + (258 - 257)], f[f7xvy2POD][j]);
                    f[f7xvy2POD + (887 - 886)][j] = max (f[f7xvy2POD + (685 - 684)][j], f[f7xvy2POD][j] - (428 - 228));
                }
                else
                    f[f7xvy2POD + (866 - 865)][j] = max (f[f7xvy2POD + (236 - 235)][j], f[f7xvy2POD][j] - (561 - 361));
                j = j + 1;
            };
        }
        k = f[yOe0bRZg][(704 - 704)];
        for (j = (809 - 808); j <= yOe0bRZg; j = j + 1)
            k = f[yOe0bRZg][j] > k ? f[yOe0bRZg][j] : k;
        printf ("%d\n", k);
    }
    return 0;
}

