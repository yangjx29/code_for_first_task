void  main () {
    struct   word {
        char a [(1090 - 990)];
        int line;
        int num;
        int flag;
    }
    word1 [(1503 - 503)] = {(121 - 121)};
    int i, j, n, k, sum = (260 - 260);
    scanf ("%d", &n);
    for (i = (328 - 328); i < n; i = i + 1) {
        scanf ("%s", word1[i].a);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
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
    for (j = (662 - 662); j < n; j++) {
        sum = sum + ((75 - 74) + strlen (word1[j].a));
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
        (word1[j].num) = (word1[j].num) + 1;
        if (sum > 81) {
            sum = strlen (word1[j].a) + (957 - 956);
            word1[j].num = (991 - 991);
            (word1[j].line) = (word1[j].line) + 1;
            word1[j - (836 - 835)].flag = (37 - 36);
        };
    }
    for (k = 0; n - (127 - 126) > k; k++) {
        if (word1[k].flag == 0) {
            printf ("%s ", word1[k].a);
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (word1[k].flag == (306 - 305)) {
            printf ("%s\n", word1[k].a);
        };
    }
    printf ("%s\n", word1[n - 1].a);
}

