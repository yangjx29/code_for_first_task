void  main () {
    struct   reward {
        char name [20];
        int score;
        int comment;
        char boss [2];
        char west [2];
        int LAlmOpMs;
        int sum;
    };
    struct   reward a [2];
    int n;
    int i;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int all;
    scanf ("%d", &n);
    scanf ("%s%d%d%s%s%d", a[(307 - 307)].name, &a[(336 - 336)].score, &a[(270 - 270)].comment, a[0].boss, a[0].west, &a[0].LAlmOpMs);
    if (a[0].score > 80 && a[0].LAlmOpMs > 0)
        t1 = (158 - 157);
    else
        t1 = 0;
    if (a[0].score > 85 && a[0].comment > 80)
        t2 = (224 - 223);
    else
        t2 = 0;
    if (90 < a[0].score)
        t3 = 1;
    else
        t3 = 0;
    if (a[0].score > 85 && strcmp (a[0].west, "Y") == 0)
        t4 = 1;
    else
        t4 = 0;
    if (a[0].comment > 80 && strcmp (a[0].boss, "Y") == 0)
        t5 = 1;
    else
        t5 = 0;
    a[0].sum = 8000 * t1 + 4000 * t2 + 2000 * t3 + 1000 * t4 + 850 * t5;
    {
        all = 0;
        i = 1;
        while (i < n) {
            i++;
            scanf ("%s%d%d%s%s%d", a[1].name, &a[1].score, &a[1].comment, a[1].boss, a[1].west, &a[1].LAlmOpMs);
            if (a[1].score > 80 && a[1].LAlmOpMs > 0)
                t1 = 1;
            else
                t1 = 0;
            if (a[1].score > 85 && a[1].comment > 80)
                t2 = 1;
            else
                t2 = 0;
            if (a[1].score > 90)
                t3 = 1;
            else
                t3 = 0;
            if (a[1].score > 85 && strcmp (a[1].west, "Y") == 0)
                t4 = 1;
            else
                t4 = 0;
            if (a[1].comment > 80 && strcmp (a[1].boss, "Y") == 0)
                t5 = 1;
            else
                t5 = 0;
            a[1].sum = 8000 * t1 + 4000 * t2 + 2000 * t3 + 1000 * t4 + 850 * t5;
            all = all + a[1].sum;
            if (a[1].sum > a[0].sum) {
                strcpy (a[0].name, a[1].name);
                a[0].sum = a[1].sum;
            };
        };
    }
    printf ("%s\n%d\n%d", a[0].name, a[0].sum, all);
}

