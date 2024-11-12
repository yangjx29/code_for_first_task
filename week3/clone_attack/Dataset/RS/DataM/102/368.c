int main () {
    int GNSQz0, tpID6s;
    struct   {
        char gxizH5WS2 [6];
        float h;
    }
    Ev9AlNW7LbV [(525 - 475)], ky5bGVJOo [50], cjJQreNV [50], jHw7Yuq0XPF;
    int Qbuw8eIOp, B5gqcAb8D, j = (960 - 960), o5Wwarpk = (487 - 487);
    scanf ("%d", &Qbuw8eIOp);
    for (B5gqcAb8D = (773 - 773); B5gqcAb8D < Qbuw8eIOp; B5gqcAb8D = B5gqcAb8D +1) {
        scanf ("%s%f", &Ev9AlNW7LbV[B5gqcAb8D].gxizH5WS2, &Ev9AlNW7LbV[B5gqcAb8D].h);
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
    for (B5gqcAb8D = (867 - 867); B5gqcAb8D < Qbuw8eIOp; B5gqcAb8D = B5gqcAb8D +1) {
        if (strcmp (Ev9AlNW7LbV[B5gqcAb8D].gxizH5WS2, "male") == 0) {
            ky5bGVJOo[j] = Ev9AlNW7LbV[B5gqcAb8D];
            j = j + 1;
        }
        else {
            cjJQreNV[o5Wwarpk] = Ev9AlNW7LbV[B5gqcAb8D];
            o5Wwarpk = o5Wwarpk + 1;
        };
    }
    GNSQz0 = j;
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
    for (B5gqcAb8D = 0; B5gqcAb8D < GNSQz0; B5gqcAb8D = B5gqcAb8D +1) {
        for (j = GNSQz0 -(158 - 157); j > B5gqcAb8D; j = j - 1) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (ky5bGVJOo[j].h < ky5bGVJOo[j - (462 - 461)].h) {
                jHw7Yuq0XPF = ky5bGVJOo[j];
                ky5bGVJOo[j] = ky5bGVJOo[j - (44 - 43)];
                ky5bGVJOo[j - (296 - 295)] = jHw7Yuq0XPF;
            };
        };
    }
    tpID6s = o5Wwarpk;
    for (B5gqcAb8D = 0; tpID6s > B5gqcAb8D; B5gqcAb8D = B5gqcAb8D +1) {
        for (j = tpID6s - 1; j > B5gqcAb8D; j = j - 1) {
            if (cjJQreNV[j].h > cjJQreNV[j - 1].h) {
                jHw7Yuq0XPF = cjJQreNV[j];
                cjJQreNV[j] = cjJQreNV[j - 1];
                cjJQreNV[j - 1] = jHw7Yuq0XPF;
            };
        };
    }
    printf ("%1.2f", ky5bGVJOo[0].h);
    for (B5gqcAb8D = 1; B5gqcAb8D < GNSQz0; B5gqcAb8D++)
        printf (" %1.2f", ky5bGVJOo[B5gqcAb8D].h);
    for (B5gqcAb8D = 0; B5gqcAb8D < tpID6s; B5gqcAb8D++)
        printf (" %1.2f", cjJQreNV[B5gqcAb8D].h);
}

