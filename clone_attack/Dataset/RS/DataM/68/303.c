int sushu (long  n) {
    long  i;
    if (!(3 != n) || !(5 != n) || !(7 != n))
        return 0;
    else {
        {
            i = 3;
            while (sqrt (n) >= i) {
                if (!(0 != n % i))
                    break;
                i++;
            };
        }
        if (i > sqrt (n))
            return 0;
        else
            return 1;
    };
}

main () {
    long  i;
    long  GgTtNLbPOQ;
    long  n;
    scanf ("%ld", &n);
    for (i = 6; i <= n; i = i + 2) {
        for (GgTtNLbPOQ = 3; GgTtNLbPOQ <= i / 2; GgTtNLbPOQ = GgTtNLbPOQ +2) {
            if (sushu (GgTtNLbPOQ) == 0 && sushu (i - GgTtNLbPOQ) == 0) {
                printf ("%d=%d+%d\n", i, GgTtNLbPOQ, i - GgTtNLbPOQ);
                break;
            };
        };
    };
}

