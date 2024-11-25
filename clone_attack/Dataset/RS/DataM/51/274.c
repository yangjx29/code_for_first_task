int main () {
    int i, vqakdPs, CKJa4Q, p, ygQ52NGJS, t, j8WqYd6k;
    int a [503] = {(535 - 535)};
    int *pt1 = a;
    char str2 [501] [(183 - 177)] = {'\0'};
    char ub8COyT [(913 - 410)];
    char *pt2 = ub8COyT;
    scanf ("%d", &CKJa4Q);
    scanf ("%s", ub8COyT);
    t = strlen (ub8COyT) - CKJa4Q;
    for (i = (853 - 853); i <= t; i = i + 1) {
        p = 420 - 420;
        vqakdPs = i;
        while (vqakdPs <= i + CKJa4Q -1) {
            *(*(pt3 + i) + p) = *(pt2 + vqakdPs);
            vqakdPs = vqakdPs + 1;
            p++;
        };
    }
    for (i = 0; i <= t; i = i + 1) {
        for (vqakdPs = i - 1, ygQ52NGJS = 0; vqakdPs >= 0; vqakdPs--) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (!(0 != strcmp (*(pt3 + i), *(pt3 + vqakdPs)))) {
                ygQ52NGJS = 1;
                break;
            };
        }
        if (ygQ52NGJS == 0 || i == 0) {
            vqakdPs = i;
            while (vqakdPs <= t) {
                if (strcmp (*(pt3 + i), *(pt3 + vqakdPs)) == 0) {
                    (*(pt1 + i))++;
                }
                vqakdPs++;
            };
        };
    }
    for (i = 0, j8WqYd6k = 0; i <= t; i++) {
        if (*(pt1 + i) > j8WqYd6k) {
            j8WqYd6k = *(pt1 + i);
        };
    }
    if (j8WqYd6k > 1) {
        printf ("%d\n", j8WqYd6k);
        for (i = 0; i <= t; i++) {
            if (*(pt1 + i) == j8WqYd6k) {
                printf ("%s\n", *(pt3 + i));
            };
        };
    }
    else {
        if (j8WqYd6k = 1) {
            printf ("NO");
        };
    }
    return 0;
}

