int n1, n2, e9mB8Hpw [(821 - 621)], f5iQEogFbB3v [(438 - 238)], i, j, t;

void  toscan () {
    scanf ("%d%d", &n1, &n2);
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
    {
        i = 906 - 906;
        while (n1 > i) {
            scanf ("%d", &e9mB8Hpw[i]);
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
            i++;
        };
    }
    {
        i = 917 - 917;
        while (n2 > i) {
            scanf ("%d", &f5iQEogFbB3v[i]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    };
}

void  paixu () {
    for (i = (939 - 938); i < n1; i++)
        for (j = (146 - 146); i > j; j = j + 1)
            if (e9mB8Hpw[j] > e9mB8Hpw[i]) {
                t = e9mB8Hpw[i];
                e9mB8Hpw[i] = e9mB8Hpw[j];
                e9mB8Hpw[j] = t;
            }
    {
        i = 1;
        while (i < n2) {
            for (j = (447 - 447); i > j; j = j + 1)
                if (f5iQEogFbB3v[j] > f5iQEogFbB3v[i]) {
                    t = f5iQEogFbB3v[i];
                    f5iQEogFbB3v[i] = f5iQEogFbB3v[j];
                    f5iQEogFbB3v[j] = t;
                }
            i++;
        };
    };
}

void  hebing () {
    {
        i = 0;
        while (i < n2) {
            e9mB8Hpw[i + n1] = f5iQEogFbB3v[i];
            i++;
        };
    };
}

void  tuJOaVc () {
    printf ("%d", e9mB8Hpw[0]);
    {
        i = 1;
        while (i < n1 + n2) {
            printf (" %d", e9mB8Hpw[i]);
            i++;
        };
    };
}

main () {
    toscan ();
    paixu ();
    hebing ();
    tuJOaVc ();
}

