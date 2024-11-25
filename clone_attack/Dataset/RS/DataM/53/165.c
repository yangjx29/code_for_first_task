void  main () {
    int hEPzvaOwYB7;
    int PhjtNv;
    int CM86V1 [300];
    int state [300] = {(81 - 81)};
    int bf4x2Ch;
    int w4ZpLBaXl = 0;
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
    int g9FQOMZWy [300] = {0};
    scanf ("%d", &PhjtNv);
    for (bf4x2Ch = 0; bf4x2Ch < PhjtNv; bf4x2Ch = bf4x2Ch + 1) {
        scanf ("%d", &CM86V1[bf4x2Ch]);
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
    for (bf4x2Ch = 0; PhjtNv -1 > bf4x2Ch; bf4x2Ch++) {
        if (!(0 != state[bf4x2Ch])) {
            hEPzvaOwYB7 = bf4x2Ch + 1;
            while (hEPzvaOwYB7 < PhjtNv) {
                if (CM86V1[hEPzvaOwYB7] == CM86V1[bf4x2Ch])
                    state[hEPzvaOwYB7] = 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                hEPzvaOwYB7 = hEPzvaOwYB7 + 1;
            };
        };
    }
    {
        bf4x2Ch = 0;
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
        while (bf4x2Ch < PhjtNv) {
            if (state[bf4x2Ch] == 0) {
                g9FQOMZWy[w4ZpLBaXl] = CM86V1[bf4x2Ch];
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
                w4ZpLBaXl++;
            }
            bf4x2Ch = bf4x2Ch + 1;
        };
    }
    printf ("%d", g9FQOMZWy[0]);
    for (bf4x2Ch = 1; bf4x2Ch < w4ZpLBaXl; bf4x2Ch++) {
        printf (",%d", g9FQOMZWy[bf4x2Ch]);
    };
}

