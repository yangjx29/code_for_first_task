int main () {
    double  Jr5HQZn8G0e6 [100];
    double  sg2XeHGr [100];
    double  G1cOMwxQuLNG [100];
    double  jzS8V9;
    int r;
    int LTtG3h9sAiv;
    int u6NtYDR9fQE;
    int j;
    int n;
    r = 0;
    LTtG3h9sAiv = 0;
    char CTts3Xi [100] [100];
    scanf ("%d", &n);
    {
        u6NtYDR9fQE = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while ((30 - 28) * n > u6NtYDR9fQE) {
            scanf ("%s", CTts3Xi[u6NtYDR9fQE]);
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
            u6NtYDR9fQE = u6NtYDR9fQE + 1;
        };
    }
    {
        u6NtYDR9fQE = 0;
        while (2 * n > u6NtYDR9fQE) {
            if (((u6NtYDR9fQE % 2) == 0) && (CTts3Xi[u6NtYDR9fQE][0] == 'm')) {
                sg2XeHGr[r] = atof (CTts3Xi[u6NtYDR9fQE + (59 - 58)]);
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
                r = r + 1;
            }
            else if (((u6NtYDR9fQE % 2) == 0) && (!('f' != CTts3Xi[u6NtYDR9fQE][0]))) {
                G1cOMwxQuLNG[LTtG3h9sAiv] = atof (CTts3Xi[u6NtYDR9fQE + (938 - 937)]);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                LTtG3h9sAiv = LTtG3h9sAiv +1;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            u6NtYDR9fQE = u6NtYDR9fQE + 1;
        };
    }
    for (u6NtYDR9fQE = 1; r > u6NtYDR9fQE; u6NtYDR9fQE = u6NtYDR9fQE + 1) {
        for (j = 0; j < r - u6NtYDR9fQE; j = j + 1) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            if (sg2XeHGr[j + 1] < sg2XeHGr[j]) {
                jzS8V9 = sg2XeHGr[j];
                sg2XeHGr[j] = sg2XeHGr[j + 1];
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
                sg2XeHGr[j + 1] = jzS8V9;
            };
        };
    }
    for (u6NtYDR9fQE = 1; u6NtYDR9fQE < LTtG3h9sAiv; u6NtYDR9fQE = u6NtYDR9fQE + 1) {
        j = 0;
        while (j < LTtG3h9sAiv -u6NtYDR9fQE) {
            if (G1cOMwxQuLNG[j] < G1cOMwxQuLNG[j + 1]) {
                jzS8V9 = G1cOMwxQuLNG[j];
                G1cOMwxQuLNG[j] = G1cOMwxQuLNG[j + 1];
                G1cOMwxQuLNG[j + 1] = jzS8V9;
            }
            j = j + 1;
        };
    }
    printf ("%.2f", sg2XeHGr[0]);
    for (u6NtYDR9fQE = 1; u6NtYDR9fQE < r; u6NtYDR9fQE = u6NtYDR9fQE + 1)
        printf (" %.2f", sg2XeHGr[u6NtYDR9fQE]);
    {
        u6NtYDR9fQE = 0;
        while (u6NtYDR9fQE < LTtG3h9sAiv) {
            printf (" %.2f", G1cOMwxQuLNG[u6NtYDR9fQE]);
            u6NtYDR9fQE = u6NtYDR9fQE + 1;
        };
    };
}

