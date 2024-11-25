void  main () {
    int i;
    void  select (char str [100000]);
    char str [100000];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    int t;
    scanf ("%d\n", &t);
    for (i = 1; i <= t; i++) {
        gets (str);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        select (str);
    };
}

void  select (char str [100000]) {
    int l, y = 0;
    int k [26] = {0};
    int j = 0;
    char *mpsHvqroe [26], *p;
    mpsHvqroe[(483 - 483)] = &str[0];
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
    p = &str[1];
    for (; *p != '\0';) {
        int JBD0V9K, mP5Mg4Xm = 0;
        {
            JBD0V9K = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (JBD0V9K <= j) {
                if (*p == *mpsHvqroe[JBD0V9K]) {
                    mP5Mg4Xm = 1;
                    k[JBD0V9K] = 1;
                    break;
                }
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
                JBD0V9K++;
            };
        }
        if (mP5Mg4Xm == 0)
            mpsHvqroe[++j] = p;
        p++;
    }
    {
        l = 0;
        while (l <= j) {
            if (k[l] == 0) {
                y = 1;
                printf ("%c\n", *mpsHvqroe[l]);
                break;
            }
            l++;
        };
    }
    if (y == 0)
        ;
}

