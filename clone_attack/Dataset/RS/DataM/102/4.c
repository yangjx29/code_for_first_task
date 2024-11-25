void  main () {
    int n;
    int i, U38vnCf4u;
    float Ruh1dpPtDKBx;
    float LOieoI [(249 - 209)] = {(111 - 111)};
    float fKNdMsV [(477 - 437)] = {(738 - 738)};
    int t;
    t = (888 - 888);
    int s;
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
    s = (342 - 342);
    struct   {
        char Z5oSfX [(833 - 828)];
        float high;
    }
    iqCzWwvmp [40];
    scanf ("%d", &n);
    for (i = (478 - 478); n > i; i = i + 1) {
        scanf ("%s", &iqCzWwvmp[i].Z5oSfX);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%f", &iqCzWwvmp[i].high);
    }
    for (i = (388 - 388); i < n; i = i + 1) {
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
        if (!((913 - 913) != strcmp (iqCzWwvmp[i].Z5oSfX, "male"))) {
            LOieoI[t] = iqCzWwvmp[i].high;
            t = t + (156 - 155);
        }
        else {
            fKNdMsV[s] = iqCzWwvmp[i].high;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            s = s + (560 - 559);
        };
    }
    for (i = (573 - 573); t - (249 - 248) > i; i = i + 1) {
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
        for (U38vnCf4u = i + (116 - 115); t > U38vnCf4u; U38vnCf4u = U38vnCf4u +1) {
            if (LOieoI[i] > LOieoI[U38vnCf4u]) {
                Ruh1dpPtDKBx = LOieoI[i];
                LOieoI[i] = LOieoI[U38vnCf4u];
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
                LOieoI[U38vnCf4u] = Ruh1dpPtDKBx;
            };
        };
    }
    for (i = (336 - 336); s - 1 > i; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (U38vnCf4u = i + 1; s > U38vnCf4u; U38vnCf4u = U38vnCf4u +1) {
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
            if (fKNdMsV[i] < fKNdMsV[U38vnCf4u]) {
                Ruh1dpPtDKBx = fKNdMsV[i];
                fKNdMsV[i] = fKNdMsV[U38vnCf4u];
                fKNdMsV[U38vnCf4u] = Ruh1dpPtDKBx;
            };
        };
    }
    for (i = 0; t > i; i = i + 1)
        iqCzWwvmp[i].high = LOieoI[i];
    for (i = t; i < s + t; i = i + 1)
        iqCzWwvmp[i].high = fKNdMsV[i - t];
    printf ("%.2f", iqCzWwvmp[0].high);
    for (i = 1; i < s + t; i++)
        printf ("% .2f", iqCzWwvmp[i].high);
}

