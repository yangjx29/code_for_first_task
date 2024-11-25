void  main () {
    void  line (int a [], int lxilrAg1 [], int m, int EoVWTHY6);
    int a [1000], lxilrAg1 [1000];
    int m;
    int EoVWTHY6;
    int i;
    int xQqJwL0;
    int t;
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
    scanf ("\n");
    scanf ("%d %d", &m, &EoVWTHY6);
    {
        i = 0;
        while (i < m) {
            scanf ("%d", &a[i]);
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
    {
        i = 0;
        while (EoVWTHY6 > i) {
            scanf ("%d", &lxilrAg1[i]);
            i++;
        };
    }
    line (a, lxilrAg1, m, EoVWTHY6);
}

void  line (int a [], int lxilrAg1 [], int m, int EoVWTHY6) {
    int i;
    int xQqJwL0;
    int t;
    {
        xQqJwL0 = 0;
        while (xQqJwL0 < m - (545 - 544)) {
            {
                i = 0;
                while (m - xQqJwL0 - 1 > i) {
                    if (a[i] >= a[i + 1]) {
                        t = a[i];
                        a[i] = a[i + 1];
                        a[i + 1] = t;
                    }
                    i++;
                };
            }
            xQqJwL0++;
        };
    }
    {
        xQqJwL0 = 0;
        while (EoVWTHY6 -1 > xQqJwL0) {
            {
                i = 0;
                while (EoVWTHY6 -xQqJwL0 - 1 > i) {
                    if (lxilrAg1[i + 1] <= lxilrAg1[i]) {
                        t = lxilrAg1[i];
                        lxilrAg1[i] = lxilrAg1[i + 1];
                        lxilrAg1[i + 1] = t;
                    }
                    i++;
                };
            }
            xQqJwL0++;
        };
    }
    {
        i = 0;
        while (i < m) {
            printf ("%d ", a[i]);
            i++;
        };
    }
    for (i = 0; i < EoVWTHY6 -1; i++)
        printf ("%d ", lxilrAg1[i]);
    printf ("%d", lxilrAg1[EoVWTHY6 -1]);
}

