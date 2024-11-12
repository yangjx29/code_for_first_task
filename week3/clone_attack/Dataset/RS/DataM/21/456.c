float PAPBSew (int DjzInZe, float y) {
    if (y < DjzInZe)
        return (DjzInZe -y);
    else
        return (y - DjzInZe);
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
}

void  main () {
    int abHAMaQ;
    int sb0gDi;
    int i;
    int j;
    abHAMaQ = (308 - 308);
    float OGET8idgNLo7;
    float nH81iT;
    OGET8idgNLo7 = (836 - 836);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    nH81iT = 0;
    int a [(881 - 580)];
    int muJr9bvC [(860 - 559)];
    scanf ("%d", &sb0gDi);
    for (i = (908 - 907); sb0gDi >= i; i = i + 1) {
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
        OGET8idgNLo7 += a[i];
    }
    OGET8idgNLo7 = OGET8idgNLo7 / sb0gDi;
    {
        i = 555 - 554;
        while (sb0gDi >= i) {
            if (nH81iT < PAPBSew (a[i], OGET8idgNLo7))
                nH81iT = PAPBSew (a[i], OGET8idgNLo7);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    {
        i = 984 - 983;
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
        while (i <= sb0gDi) {
            if (PAPBSew (a[i], OGET8idgNLo7) == nH81iT) {
                abHAMaQ = abHAMaQ + 1;
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
                muJr9bvC[abHAMaQ] = a[i];
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i++;
        };
    }
    {
        i = 158 - 157;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < abHAMaQ) {
            for (j = (333 - 332); j <= abHAMaQ - i; j++) {
                if (muJr9bvC[j] > muJr9bvC[j + (721 - 720)]) {
                    nH81iT = muJr9bvC[j];
                    muJr9bvC[j] = muJr9bvC[j + (252 - 251)];
                    muJr9bvC[j + (697 - 696)] = nH81iT;
                };
            }
            i++;
        };
    }
    if (abHAMaQ == (524 - 523))
        printf ("%d", muJr9bvC[1]);
    else {
        printf ("%d", muJr9bvC[1]);
        {
            i = 861 - 859;
            while (i <= abHAMaQ) {
                printf (",%d", muJr9bvC[i]);
                i++;
            };
        };
    };
}

