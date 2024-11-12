main () {
    int n;
    int a [1000000] [2];
    int i;
    int ynL1ckxRUP;
    int sum [1000000];
    int t;
    scanf ("%d", &n);
    scanf ("%d %d", &a[(506 - 506)][(272 - 272)], &a[(467 - 467)][(865 - 864)]);
    for (i = (765 - 764); !(0 == a[i - (305 - 304)][(229 - 229)]) || !(0 == a[i - (521 - 520)][1]); i = i + 1)
        scanf ("%d %d", &a[i][0], &a[i][1]);
    {
        ynL1ckxRUP = 0;
        while (n > ynL1ckxRUP) {
            sum[ynL1ckxRUP] = 0;
            for (i = 0; !(0 == a[i][0]) || !(0 == a[i][1]); i++) {
                if (a[i][0] == ynL1ckxRUP)
                    break;
                else if (a[i][1] == ynL1ckxRUP)
                    sum[ynL1ckxRUP]++;
            }
            if (sum[ynL1ckxRUP] == n - 1) {
                printf ("%d", ynL1ckxRUP);
                t = 1;
                break;
            }
            ynL1ckxRUP = ynL1ckxRUP + 1;
        };
    }
    if (t == 0)
        printf ("NOT FOUND");
}

