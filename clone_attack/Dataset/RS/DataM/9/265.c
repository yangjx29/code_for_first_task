void  main () {
    struct   p {
        char num [11];
        int age;
    };
    struct   p c [(315 - 214)];
    int t;
    int l;
    int LaPAO0b;
    int i;
    int s;
    int ZKuagzTiJ8Z;
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
    t = (166 - 166);
    l = 0;
    int a [100], QXMbeuC [100], d [100] = {0};
    scanf ("%d", &LaPAO0b);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (LaPAO0b > i) {
            scanf ("%s%d", c[i].num, &c[i].age);
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
            i = i + 1;
        };
    }
    for (i = 0; LaPAO0b > i; i = i + 1) {
        if ((88 - 28) <= c[i].age) {
            a[t] = c[i].age;
            c[i].age = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            QXMbeuC[t] = i;
            t++;
        };
    }
    if (0 < t) {
    leap :
        s = a[0];
        ZKuagzTiJ8Z = 0;
        {
            i = 0;
            while (t > i) {
                if (s < a[i]) {
                    s = a[i];
                    ZKuagzTiJ8Z = i;
                }
                i = i + 1;
            };
        }
        printf ("%s\n", c[QXMbeuC[ZKuagzTiJ8Z]].num);
        l++;
        if (l < t)
            goto leap;
        a[ZKuagzTiJ8Z] = 0;
    }
    {
        i = 0;
        while (i < LaPAO0b) {
            if (c[i].age != 0)
                printf ("%s\n", c[i].num);
            i = i + 1;
        };
    };
}

