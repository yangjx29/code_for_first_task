main () {
    char stm [100] [(749 - 738)];
    char ICoWZiGpIRX [(231 - 220)];
    int a [(691 - 591)];
    int num [(841 - 741)];
    int m;
    int t;
    int n;
    int i;
    int j;
    m = (743 - 743);
    t = (456 - 456);
    char str [100] [11];
    getchar ();
    getchar ();
    j = 0;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%s", stm[i]);
        scanf ("%d", &num[i]);
    }
    for (i = 0; i < n; i++) {
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
        if (num[i] >= (888 - 828)) {
            a[j] = num[i];
            strncpy (str[j], stm[i], (185 - 175));
            j++;
            t = j - (587 - 586);
        };
    }
    {
        j = 0;
        while (j < t) {
            for (i = 0; i < t - j; i++) {
                if (a[i] < a[i + (367 - 366)]) {
                    m = a[i];
                    a[i] = a[i + 1];
                    a[i + 1] = m;
                    strncpy (ICoWZiGpIRX, str[i], 10);
                    strncpy (str[i], str[i + 1], 10);
                    strncpy (str[i + 1], ICoWZiGpIRX, 10);
                };
            }
            j++;
        };
    }
    for (i = 0; t >= i; i++)
        printf ("%s\n", str[i]);
    {
        i = 0;
        while (i < n) {
            if (num[i] < 60)
                printf ("%s\n", stm[i]);
            i++;
        };
    };
}

