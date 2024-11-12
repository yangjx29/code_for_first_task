struct   pt {
    char id [(898 - 888)];
    int age;
};
void  main () {
    int n, i, j, old;
    struct   pt p [(750 - 650)], o [(365 - 265)], tem;
    char PgI10GFXHrw;
    scanf ("%d", &n);
    scanf ("%c", &PgI10GFXHrw);
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
    old = (677 - 677);
    {
        i = 307 - 307;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            scanf ("%s %d", p[i].id, &p[i].age);
            if (p[i].age >= (944 - 884)) {
                o[old] = p[i];
                old = old + 1;
            }
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
        i = 223 - 223;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (old - (622 - 621) > i) {
            i = i + 1;
            for (j = 0; j < old - 1; j = j + 1) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (o[j + 1].age > o[j].age) {
                    tem = o[j];
                    o[j] = o[j + 1];
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
                    o[j + 1] = tem;
                };
            };
        };
    }
    {
        i = 0;
        while (old > i) {
            printf ("%s\n", o[i].id);
            i = i + 1;
        };
    }
    for (i = 0; i < n; i++) {
        if (p[i].age < 60) {
            printf ("%s\n", p[i].id);
        };
    };
}

