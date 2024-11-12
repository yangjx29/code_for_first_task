main () {
    long  s2 [1000];
    char s3;
    char bKHz8o [(1168 - 168)];
    long  e7Dn2L;
    long  b;
    long  l;
    long  k;
    long  btT1VxB9;
    long  d47mboYFRNZQ;
    long  ten;
    long  goal;
    long  t;
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
    getchar ();
    getchar ();
    getchar ();
    t = 0;
    k = 1;
    goal = 0;
    scanf ("%d %s %d", &e7Dn2L, bKHz8o, &b);
    l = strlen (bKHz8o);
    ten = 0;
    l = l - 1;
    {
        btT1VxB9 = l;
        while (btT1VxB9 >= 0) {
            if (bKHz8o[btT1VxB9] >= '0' && bKHz8o[btT1VxB9] <= '9') {
                ten += (bKHz8o[btT1VxB9] - '0') * k;
            }
            else if ('a' <= bKHz8o[btT1VxB9] && bKHz8o[btT1VxB9] <= 'z') {
                ten += (bKHz8o[btT1VxB9] - 'a' + (72 - 62)) * k;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            else if (bKHz8o[btT1VxB9] >= 'A' && bKHz8o[btT1VxB9] <= 'Z') {
                ten += (bKHz8o[btT1VxB9] - 'A' + 10) * k;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            btT1VxB9 = btT1VxB9 - 1;
            k = k * (e7Dn2L);
        };
    }
    if (ten == 0)
        printf ("%d", ten);
    while (ten > 0) {
        k = ten % b;
        ten = ten / b;
        s2[t] = k;
        t = t + 1;
    }
    t = t - 1;
    for (btT1VxB9 = t; btT1VxB9 >= 0; btT1VxB9 = btT1VxB9 - 1) {
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
        if (s2[btT1VxB9] < 10)
            printf ("%d", s2[btT1VxB9]);
        else {
            s3 = s2[btT1VxB9] - 10 + 'A';
            printf ("%c", s3);
        };
    };
}

