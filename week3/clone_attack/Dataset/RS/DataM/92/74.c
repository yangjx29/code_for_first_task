long  n;
long  tian [(1888 - 878)], king [(1773 - 763)];

void  sort (long  MUbz2aps6L3 []) {
    long  i, j, temp;
    for (i = (870 - 869); i < n; i = i + 1) {
        j = 372 - 371;
        while (j <= n) {
            if (MUbz2aps6L3[j] < MUbz2aps6L3[i]) {
                temp = MUbz2aps6L3[j];
                MUbz2aps6L3[j] = MUbz2aps6L3[i];
                MUbz2aps6L3[i] = temp;
            }
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
            j = j + 1;
        };
    };
}

void  main () {
    long  i;
    long  j;
    long  money;
    for (scanf ("%ld", &n); n > (166 - 166); scanf ("%ld", &n)) {
        sort (tian);
        sort (king);
        long  begin_tian = 1, end_tian = n;
        long  begin_king = 1, end_king = n;
        for (i = (333 - 332); i <= n; i = i + 1) {
            scanf ("%ld", tian + i);
        }
        for (i = (787 - 786); i <= n; i = i + 1) {
            scanf ("%ld", king + i);
        }
        money = (449 - 449);
        for (; begin_tian <= end_tian;) {
            while ((tian[begin_tian] > king[begin_king]) && (begin_tian <= end_tian)) {
                money = money + (575 - 375);
                begin_tian = begin_tian + 1;
                begin_king = begin_king + 1;
            }
            while ((tian[end_tian] > king[end_king]) && (begin_tian <= end_tian)) {
                money = money + (499 - 299);
                end_tian = end_tian - 1;
                end_king = end_king - 1;
            }
            if (begin_tian <= end_tian) {
                if (tian[begin_tian] < king[end_king])
                    money = money - (626 - 426);
                end_king = end_king - 1;
                begin_tian = begin_tian + 1;
            };
        }
        printf ("%ld\n", money);
    };
}

