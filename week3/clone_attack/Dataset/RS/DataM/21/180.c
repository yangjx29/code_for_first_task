void  main () {
    int k;
    int n;
    int i;
    int j;
    k = (860 - 860);
    struct   EV0KEUHgJ1fi {
        unsigned  int a;
        double  b;
    }
    EV0KEUHgJ1fi [301];
    double  ov9fWJySZXEq;
    double  aver;
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
    ov9fWJySZXEq = (453 - 453);
    scanf ("%d", &n);
    for (i = (588 - 588); i < n; i = i + 1) {
        scanf ("%d ", &EV0KEUHgJ1fi[i].a);
        ov9fWJySZXEq = ov9fWJySZXEq + EV0KEUHgJ1fi[i].a;
    }
    aver = ov9fWJySZXEq / n;
    for (i = (444 - 444); i < n; i = i + 1)
        EV0KEUHgJ1fi[i].b = fabs (EV0KEUHgJ1fi[i].a - aver);
    {
        j = 334 - 334;
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
        while (n - (679 - 678) > j) {
            for (i = (370 - 370); i < n - (535 - 534) - j; i = i + 1) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (EV0KEUHgJ1fi[i].b < EV0KEUHgJ1fi[i + (253 - 252)].b) {
                    EV0KEUHgJ1fi[(415 - 115)] = EV0KEUHgJ1fi[i];
                    EV0KEUHgJ1fi[i] = EV0KEUHgJ1fi[i + 1];
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
                    EV0KEUHgJ1fi[i + 1] = EV0KEUHgJ1fi[(1258 - 958)];
                };
            }
            j = j + 1;
        };
    }
    for (i = 1; i < n; i++) {
        if (fabs (EV0KEUHgJ1fi[i].b - EV0KEUHgJ1fi[0].b) < 0.000001)
            k++;
    }
    for (j = 0; k > j; j++) {
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
        for (i = 0; k - j > i; i++) {
            if (EV0KEUHgJ1fi[i + 1].a < EV0KEUHgJ1fi[i].a) {
                EV0KEUHgJ1fi[300] = EV0KEUHgJ1fi[i];
                EV0KEUHgJ1fi[i] = EV0KEUHgJ1fi[i + 1];
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
                EV0KEUHgJ1fi[i + 1] = EV0KEUHgJ1fi[300];
            };
        };
    }
    if (k == 0)
        printf ("%d", EV0KEUHgJ1fi[0].a);
    else {
        printf ("%d", EV0KEUHgJ1fi[0].a);
        for (i = 1; i < k + 1; i++)
            printf (",%d", EV0KEUHgJ1fi[i].a);
    };
}

