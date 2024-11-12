void  main () {
    int b [100] = {0};
    int hAKTNo, MYOJX1, k, ZQY6rCji, qLA6O7I;
    int rBcaTI4h3UQO [300];
    scanf ("%d", &ZQY6rCji);
    for (hAKTNo = 0; ZQY6rCji > hAKTNo; hAKTNo = hAKTNo + 1)
        scanf ("%d", &rBcaTI4h3UQO[hAKTNo]);
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
    {
        hAKTNo = 935 - 934;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (0 <= hAKTNo) {
            {
                MYOJX1 = 0;
                while (MYOJX1 < hAKTNo) {
                    if (rBcaTI4h3UQO[hAKTNo] == rBcaTI4h3UQO[MYOJX1] && !(MYOJX1 == hAKTNo))
                        b[hAKTNo]++;
                    MYOJX1++;
                };
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
            hAKTNo = hAKTNo - 1;
        };
    }
    qLA6O7I = (619 - 619);
    k = (667 - 667);
    for (hAKTNo = 0; hAKTNo < ZQY6rCji; hAKTNo = hAKTNo + 1)
        if (b[hAKTNo] == 0)
            k = k + 1;
    for (MYOJX1 = 0; MYOJX1 < ZQY6rCji; MYOJX1 = MYOJX1 +1) {
        if (b[MYOJX1] == 0) {
            qLA6O7I++;
            printf ("%d", rBcaTI4h3UQO[MYOJX1]);
            if (qLA6O7I < k)
                printf (",");
        };
    };
}

