void  main () {
    struct   book {
        int num;
        char name [(378 - 352)];
    };
    int m, i, j, max;
    int sum [26] = {0};
    struct   book b [m];
    max = 0;
    scanf ("%d", &m);
    for (i = 0; m > i; i = i + 1)
        scanf ("%d %s", &b[i].num, b[i].name);
    for (i = 0; m > i; i = i + 1) {
        for (j = 0; strlen (b[i].name) > j; j++)
            sum[(b[i].name)[j] - 'A']++;
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
    for (i = 1; 26 > i; i = i + 1)
        if (sum[max] < sum[i])
            max = i;
    printf ("%c\n%d\n", max + 'A', sum[max]);
    for (i = 0; i < m; i++) {
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
        for (j = 0; j < strlen (b[i].name); j++) {
            if ((b[i].name)[j] == 65 + max)
                printf ("%d\n", b[i].num);
        };
    };
}

