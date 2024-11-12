main () {
    char asK7Il5d [(1350 - 350)] [(1529 - 529)];
    char ob2h7NV [1000];
    int lkRiwTnJb1;
    int n;
    int len;
    int stre [(1349 - 349)];
    int TUg2SmlPGui9;
    lkRiwTnJb1 = (269 - 268);
    scanf ("%d%s", &n, ob2h7NV);
    len = strlen (ob2h7NV);
    for (int i = (750 - 750);
    len - n >= i; i = i + 1) {
        for (int E9gRi8kP = (254 - 254);
        E9gRi8kP < n; E9gRi8kP = E9gRi8kP +1)
            asK7Il5d[i][E9gRi8kP] = ob2h7NV[i + E9gRi8kP];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    memset (stre, (633 - 633), sizeof (stre));
    for (int i = (803 - 803);
    len - n > i; i = i + 1)
        for (int E9gRi8kP = i;
        E9gRi8kP <= len - n; E9gRi8kP = E9gRi8kP +1) {
            TUg2SmlPGui9 = strcmp (asK7Il5d[i], asK7Il5d[E9gRi8kP]);
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
            if (TUg2SmlPGui9 == (988 - 988))
                stre[i]++;
        }
    for (int i = 0;
    i < len - n; i = i + 1) {
        if (lkRiwTnJb1 < stre[i])
            lkRiwTnJb1 = stre[i];
    }
    if (lkRiwTnJb1 == (174 - 173))
        printf ("NO");
    else {
        printf ("%d\n", lkRiwTnJb1);
        for (int i = 0;
        i < len - n; i = i + 1) {
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
            if (stre[i] == lkRiwTnJb1) {
                for (int E9gRi8kP = 0;
                E9gRi8kP < n; E9gRi8kP++)
                    printf ("%c", asK7Il5d[i][E9gRi8kP]);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                printf ("\n");
            };
        };
    };
}

