int main () {
    double  EB418E [1000];
    double  AcOPgp [100];
    double  eMfcsB [100];
    double  X2WPLOUwfT [100];
    double  MLa5Xtp [100];
    int CQMwjFBPr8;
    int cQCxvichf;
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
    int PuXK8BH;
    int kpyR9fveOdu;
    scanf ("%d", &kpyR9fveOdu);
    {
        cQCxvichf = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (kpyR9fveOdu > cQCxvichf) {
            eMfcsB[cQCxvichf] = 0;
            scanf ("%d", &CQMwjFBPr8);
            for (PuXK8BH = 0; CQMwjFBPr8 > PuXK8BH; PuXK8BH++) {
                scanf ("%lf", &EB418E[PuXK8BH]);
                eMfcsB[cQCxvichf] = eMfcsB[cQCxvichf] + EB418E[PuXK8BH];
            }
            eMfcsB[cQCxvichf] = (double ) eMfcsB[cQCxvichf] / CQMwjFBPr8;
            MLa5Xtp[cQCxvichf] = 0;
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
            {
                PuXK8BH = 0;
                while (CQMwjFBPr8 > PuXK8BH) {
                    X2WPLOUwfT[cQCxvichf] = EB418E[PuXK8BH] - eMfcsB[cQCxvichf];
                    PuXK8BH = PuXK8BH +1;
                    X2WPLOUwfT[cQCxvichf] = X2WPLOUwfT[cQCxvichf] * X2WPLOUwfT[cQCxvichf];
                    MLa5Xtp[cQCxvichf] = MLa5Xtp[cQCxvichf] + X2WPLOUwfT[cQCxvichf];
                };
            }
            MLa5Xtp[cQCxvichf] = (double ) MLa5Xtp[cQCxvichf] / CQMwjFBPr8;
            AcOPgp[cQCxvichf] = sqrt (MLa5Xtp[cQCxvichf]);
            cQCxvichf++;
        };
    }
    {
        cQCxvichf = 0;
        while (kpyR9fveOdu > cQCxvichf) {
            printf ("%.5lf\n", AcOPgp[cQCxvichf]);
            cQCxvichf++;
        };
    }
    return 0;
}

