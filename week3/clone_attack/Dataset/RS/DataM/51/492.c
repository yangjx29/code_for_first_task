main () {
    char s [501], a [501] [6];
    gets (s);
    int da;
    int i;
    int YqOgZA4wBotE;
    int x;
    int len;
    int n;
    int bwMNJ8Y9s [501];
    YqOgZA4wBotE = 0;
    x = 0;
    len = strlen (s);
    scanf ("%d\n", &n);
    {
        i = 0;
        while (i <= len - n) {
            bwMNJ8Y9s[i] = (743 - 742);
            i = i + 1;
        };
    }
    while (len - n >= YqOgZA4wBotE) {
        i = 0;
        while (i < n) {
            a[YqOgZA4wBotE][i] = s[x];
            x++;
            i++;
        }
        YqOgZA4wBotE++;
        x = YqOgZA4wBotE;
    }
    {
        i = 1;
        while (i <= len - n) {
            if (strcmp (a[0], a[i]) == 0)
                bwMNJ8Y9s[0]++;
            i++;
        };
    }
    da = bwMNJ8Y9s[0];
    {
        i = 1;
        while (i <= len - n) {
            {
                YqOgZA4wBotE = i + 1;
                while (YqOgZA4wBotE <= len - n) {
                    if (strcmp (a[i], a[YqOgZA4wBotE]) == 0)
                        bwMNJ8Y9s[i]++;
                    YqOgZA4wBotE++;
                };
            }
            i++;
        };
    }
    for (i = 0; i <= len - n; i++)
        if (bwMNJ8Y9s[i] > da)
            da = bwMNJ8Y9s[i];
    if (da <= 1)
        ;
    else {
        printf ("%d\n", da);
        {
            YqOgZA4wBotE = 0;
            while (YqOgZA4wBotE <= len - n) {
                if (bwMNJ8Y9s[YqOgZA4wBotE] == da)
                    puts (a[YqOgZA4wBotE]);
                YqOgZA4wBotE++;
            };
        };
    };
}

