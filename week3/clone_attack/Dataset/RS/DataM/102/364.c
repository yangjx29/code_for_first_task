int main () {
    char zvWHA6k [10];
    double  jfEMXSAiQ5s [41];
    double  rrjSisTB [41];
    int i, IR2rXKil, YQdLW2 = 0, tF72xwCYMJzd = 0, GrUHpy;
    scanf ("%d", &GrUHpy);
    for (i = 0; GrUHpy > i; i = i + 1) {
        scanf ("%s", zvWHA6k);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(4 != strlen (zvWHA6k))) {
            scanf ("%lf", &jfEMXSAiQ5s[YQdLW2]);
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
            YQdLW2 = YQdLW2 +1;
        }
        if (strlen (zvWHA6k) == 6) {
            scanf ("%lf", &rrjSisTB[tF72xwCYMJzd]);
            tF72xwCYMJzd = tF72xwCYMJzd + 1;
        };
    }
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
    for (i = YQdLW2 -1; i > 0; i = i - 1) {
        for (IR2rXKil = 0; i > IR2rXKil; IR2rXKil = IR2rXKil +1) {
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
            if (jfEMXSAiQ5s[IR2rXKil] > jfEMXSAiQ5s[IR2rXKil +1]) {
                double  Ta8rsLQDUgC;
                Ta8rsLQDUgC = jfEMXSAiQ5s[IR2rXKil +1];
                jfEMXSAiQ5s[IR2rXKil +1] = jfEMXSAiQ5s[IR2rXKil];
                jfEMXSAiQ5s[IR2rXKil] = Ta8rsLQDUgC;
            };
        };
    }
    for (i = 0; tF72xwCYMJzd - 1 > i; i = i + 1) {
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
        for (IR2rXKil = tF72xwCYMJzd - 1; IR2rXKil > 0; IR2rXKil = IR2rXKil -1) {
            if (rrjSisTB[IR2rXKil -1] < rrjSisTB[IR2rXKil]) {
                double  Ta8rsLQDUgC;
                Ta8rsLQDUgC = rrjSisTB[IR2rXKil -1];
                rrjSisTB[IR2rXKil -1] = rrjSisTB[IR2rXKil];
                rrjSisTB[IR2rXKil] = Ta8rsLQDUgC;
            };
        };
    }
    IR2rXKil = 0;
    for (i = YQdLW2; i <= (YQdLW2 +tF72xwCYMJzd - 1); i = i + 1) {
        jfEMXSAiQ5s[i] = rrjSisTB[IR2rXKil];
        IR2rXKil = IR2rXKil +1;
    }
    printf ("%.2lf", jfEMXSAiQ5s[0]);
    for (i = 1; i <= (YQdLW2 +tF72xwCYMJzd - 1); i = i + 1) {
        printf (" %.2lf", jfEMXSAiQ5s[i]);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    return 0;
}

