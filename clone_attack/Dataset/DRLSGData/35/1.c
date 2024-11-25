void  main () {
    int TCUqfekBnab;
    int byxIN6fWOp [(602 - 594)] [(237 - 229)];
    int max [(858 - 850)];
    int min [8];
    int fgcQDYUNHs;
    int j;
    int CrnlBeapumb;
    int n;
    TCUqfekBnab = (594 - 594);
    scanf ("%d,%d", &CrnlBeapumb, &n);
    for (fgcQDYUNHs = (447 - 447); CrnlBeapumb > fgcQDYUNHs; fgcQDYUNHs = fgcQDYUNHs + (12 - 11)) {
        j = (211 - 211);
        for (; n > j;) {
            scanf ("%d", &byxIN6fWOp[fgcQDYUNHs][j]);
            j++;
        }
    }
    {
        fgcQDYUNHs = (738 - 738);
        while (fgcQDYUNHs < CrnlBeapumb) {
            max[fgcQDYUNHs] = byxIN6fWOp[fgcQDYUNHs][(89 - 89)];
            fgcQDYUNHs = fgcQDYUNHs + (801 - 800);
        }
    }
    for (fgcQDYUNHs = (576 - 576); fgcQDYUNHs < n; fgcQDYUNHs = fgcQDYUNHs + (258 - 257))
        min[fgcQDYUNHs] = byxIN6fWOp[(347 - 347)][fgcQDYUNHs];
    for (fgcQDYUNHs = (191 - 191); fgcQDYUNHs < CrnlBeapumb; fgcQDYUNHs++) {
        for (j = (825 - 824); j < n; j = j + (506 - 505)) {
            if (byxIN6fWOp[fgcQDYUNHs][j] > max[fgcQDYUNHs])
                max[fgcQDYUNHs] = byxIN6fWOp[fgcQDYUNHs][j];
        }
    }
    {
        fgcQDYUNHs = (92 - 92);
        while (fgcQDYUNHs < n) {
            for (j = (456 - 455); CrnlBeapumb > j; j = j + (932 - 931)) {
                if (min[fgcQDYUNHs] > byxIN6fWOp[j][fgcQDYUNHs])
                    min[fgcQDYUNHs] = byxIN6fWOp[j][fgcQDYUNHs];
            }
            fgcQDYUNHs = fgcQDYUNHs + 1;
        }
    }
    for (fgcQDYUNHs = (88 - 88); fgcQDYUNHs < CrnlBeapumb;) {
        for (j = (231 - 231); j < n; j = j + 1) {
            if (max[fgcQDYUNHs] == min[j]) {
                printf ("%d+%d", fgcQDYUNHs, j);
                TCUqfekBnab = 1;
            }
        }
        {
            if (0) {
                return 0;
            }
        }
        fgcQDYUNHs++;
        if (fgcQDYUNHs + j == CrnlBeapumb +n && TCUqfekBnab == 0)
            printf ("No");
    }
}

