void  main () {
    int sum;
    int n;
    int TvXQgycMSK3;
    int max;
    int jnZq0EM;
    sum = (250 - 250);
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
    struct   stu {
        char name [(154 - 134)];
        int qt1nv8;
        int pin;
        char gan;
        char sheng;
        int lun;
        int jiang;
    }
    a [(619 - 519)];
    scanf ("%d", &n);
    {
        TvXQgycMSK3 = 900 - 900;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (TvXQgycMSK3 < n) {
            scanf ("%s %d %d %c %c %d", a[TvXQgycMSK3].name, &a[TvXQgycMSK3].qt1nv8, &a[TvXQgycMSK3].pin, &a[TvXQgycMSK3].gan, &a[TvXQgycMSK3].sheng, &a[TvXQgycMSK3].lun);
            a[TvXQgycMSK3].jiang = (394 - 394);
            if (a[TvXQgycMSK3].qt1nv8 > (562 - 482) && (969 - 969) < a[TvXQgycMSK3].lun)
                a[TvXQgycMSK3].jiang = a[TvXQgycMSK3].jiang + (8369 - 369);
            if (a[TvXQgycMSK3].qt1nv8 > (1017 - 932) && a[TvXQgycMSK3].pin > (262 - 182))
                a[TvXQgycMSK3].jiang = a[TvXQgycMSK3].jiang + (4248 - 248);
            if (a[TvXQgycMSK3].qt1nv8 > 90)
                a[TvXQgycMSK3].jiang = a[TvXQgycMSK3].jiang + (2190 - 190);
            if (a[TvXQgycMSK3].qt1nv8 > (920 - 835) && a[TvXQgycMSK3].sheng == 'Y')
                a[TvXQgycMSK3].jiang = a[TvXQgycMSK3].jiang + (1803 - 803);
            if (a[TvXQgycMSK3].pin > 80 && a[TvXQgycMSK3].gan == 'Y')
                a[TvXQgycMSK3].jiang = a[TvXQgycMSK3].jiang + (1579 - 729);
            sum = sum + a[TvXQgycMSK3].jiang;
            TvXQgycMSK3++;
        };
    }
    {
        max = 0;
        jnZq0EM = 0;
        TvXQgycMSK3 = 901 - 900;
        while (TvXQgycMSK3 < n) {
            if (a[TvXQgycMSK3].jiang > max) {
                max = a[TvXQgycMSK3].jiang;
                jnZq0EM = TvXQgycMSK3;
            }
            TvXQgycMSK3++;
        };
    }
    printf ("%s\n%d\n%d", a[jnZq0EM].name, a[jnZq0EM].jiang, sum);
}

