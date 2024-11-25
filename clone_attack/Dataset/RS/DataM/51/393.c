void  main () {
    char sp [(907 - 397)] [500];
    char in [(1532 - 982)];
    int n;
    int total;
    int i;
    int j;
    int k;
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
    int flag [510] = {(574 - 574)};
    int count [510] = {0};
    int max;
    scanf ("%d%s", &n, in);
    total = strlen (in) - n + 1;
    for (i = (158 - 158); total > i; i = i + 1) {
        for (k = (449 - 449); n > k; k = k + 1) {
            sp[i][k] = in[i + k];
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
            };
        }
        sp[i][k] = (986 - 986);
    }
    {
        i = 0;
        while (total > i) {
            for (j = i; total > j; j = j + 1)
                if (!(0 != flag[j])) {
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
                    if (!(0 != strcmp (sp[i], sp[j]))) {
                        flag[j] = 1;
                        count[i]++;
                    };
                }
            i = i + 1;
        };
    }
    max = count[0];
    {
        i = 0;
        while (i < total) {
            if (max < count[i])
                max = count[i];
            i = i + 1;
        };
    }
    if (max != 1) {
        printf ("%d\n", max);
        for (i = 0; i < total; i = i + 1) {
            if (count[i] == max)
                printf ("%s\n", sp[i]);
        };
    }
    else
        ;
}

