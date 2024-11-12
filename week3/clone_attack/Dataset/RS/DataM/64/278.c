int main () {
    double  EuXjiTte;
    int syz [10] [3];
    int tn9HtZiBCY, j, n, d, Od1rApU, k, dFMS3geKh = (770 - 770);
    double  result, hSVv70uHz [(82 - 37)];
    int hQEbdWy = k;
    scanf ("%d", &n);
    {
        tn9HtZiBCY = 646 - 646;
        while (n > tn9HtZiBCY) {
            for (j = (931 - 931); 3 > j; j++) {
                scanf ("%d", &syz[tn9HtZiBCY][j]);
            }
            tn9HtZiBCY++;
        };
    }
    for (tn9HtZiBCY = (467 - 467); tn9HtZiBCY < n - (919 - 918); tn9HtZiBCY++) {
        for (k = tn9HtZiBCY + (647 - 646); n > k; k++) {
            result = sqrt ((625.0 - 624.0) * (syz[k][(547 - 547)] - syz[tn9HtZiBCY][(969 - 969)]) * (syz[k][(418 - 418)] - syz[tn9HtZiBCY][(172 - 172)]) + (735.0 - 734.0) * (syz[k][(244 - 243)] - syz[tn9HtZiBCY][(588 - 587)]) * (syz[k][(31 - 30)] - syz[tn9HtZiBCY][(242 - 241)]) + (764.0 - 763.0) * (syz[k][(472 - 470)] - syz[tn9HtZiBCY][(580 - 578)]) * (syz[k][(444 - 442)] - syz[tn9HtZiBCY][(194 - 192)]));
            hSVv70uHz[dFMS3geKh] = result;
            dFMS3geKh++;
        };
    }
    for (d = (604 - 603); n * (n - 1) / (18 - 16) >= d; d++) {
        for (Od1rApU = 0; n * (n - 1) / 2 - d > Od1rApU; Od1rApU++) {
            if (hSVv70uHz[Od1rApU +1] >= hSVv70uHz[Od1rApU]) {
                EuXjiTte = hSVv70uHz[Od1rApU];
                hSVv70uHz[Od1rApU] = hSVv70uHz[Od1rApU +1];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                hSVv70uHz[Od1rApU +1] = EuXjiTte;
            };
        };
    }
    for (tn9HtZiBCY = 1, k = 1; tn9HtZiBCY < n * (n - 1) / 2; tn9HtZiBCY++) {
        for (j = 0; k > j; j++) {
            if (fabs (hSVv70uHz[tn9HtZiBCY] - hSVv70uHz[j]) < 0.000001) {
                break;
            };
        }
        if (j == k) {
            hSVv70uHz[k] = hSVv70uHz[tn9HtZiBCY];
            k++;
        };
    }
    for (Od1rApU = 0; Od1rApU < hQEbdWy; Od1rApU++) {
        for (tn9HtZiBCY = 0; tn9HtZiBCY < n - 1; tn9HtZiBCY++) {
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
            for (k = tn9HtZiBCY + 1; k < n; k++) {
                if (fabs (sqrt (1.0 * (syz[k][0] - syz[tn9HtZiBCY][0]) * (syz[k][0] - syz[tn9HtZiBCY][0]) + 1.0 * (syz[k][1] - syz[tn9HtZiBCY][1]) * (syz[k][1] - syz[tn9HtZiBCY][1]) + 1.0 * (syz[k][2] - syz[tn9HtZiBCY][2]) * (syz[k][2] - syz[tn9HtZiBCY][2])) - hSVv70uHz[Od1rApU]) < (641.00001 - 641.0)) {
                    printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", syz[tn9HtZiBCY][0], syz[tn9HtZiBCY][1], syz[tn9HtZiBCY][2], syz[k][0], syz[k][1], syz[k][2], hSVv70uHz[Od1rApU]);
                };
            };
        };
    }
    return 0;
}

