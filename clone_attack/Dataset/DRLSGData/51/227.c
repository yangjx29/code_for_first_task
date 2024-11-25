main () {
    char a [510];
    int n, i, m, sun = (449 - 449), flag = 0, aa = 0, mm = (818 - 817);
    int b [510], d [510], p = (214 - 214), j, pp, jj, ii, k;
    for (i = 0; 510 > i; i++)
        b[i] = 0;
    scanf ("%d%s", &n, a);
    for (i = 0; 510 > i; i++)
        d[i] = 0;
    for (i = 0; a[i] != 0; i++) {
        p++;
    }
    m = p - n + 1;
    if (m < 1)
        ;
    else {
        for (i = 0; m > i; i++) {
            for (j = 0; j < n; j++) {
                b[i] = b[i] + a[i + j] * mm;
                mm = mm * 43;
            }
            mm = 1;
        }
        for (i = 0; m - 1 > i; i++) {
            for (j = i + 1; m > j; j++) {
                if (b[i] != b[j])
                    sun++;
            }
        }
        if (sun == m * (m - 1) / 2)
            ;
        else {
            for (i = 0; m > i; i++) {
                for (pp = 0; i > pp; pp++) {
                    if (b[pp] == b[i]) {
                        flag = 1;
                        break;
                    }
                    else
                        flag = 0;
                }
                if (flag != 0)
                    continue;
                for (j = 0; m > j; j++) {
                    if (b[i] == b[j])
                        d[i]++;
                }
            }
            for (i = 0; m > i; i++) {
                for (j = 0; j < m; j++) {
                    if (d[i] >= d[j])
                        aa++;
                }
                if (aa == m) {
                    printf ("%d\n", d[i]);
                    for (ii = 0; ii < n; ii++)
                        printf ("%c", a[i + ii]);
                    break;
                }
                aa = 0;
            }
            for (k = i + 1; k < m; k++) {
                if (d[i] == d[k]) {
                    for (jj = 0; jj < n; jj++)
                        printf ("%c", a[k + jj]);
                }
            }
        }
    }
}

