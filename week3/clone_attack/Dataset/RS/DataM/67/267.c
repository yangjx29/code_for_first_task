int main () {
    int AKGTQRnHN, lc, EJCm4pedXv, ShdQOBeUP;
    float OnSt18q7;
    float tqAZTFYCUKLe;
    scanf ("%d", &AKGTQRnHN);
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
    scanf ("%d%d", &lc, &EJCm4pedXv);
    OnSt18q7 = 1.0 * EJCm4pedXv / lc;
    {
        ShdQOBeUP = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (ShdQOBeUP < AKGTQRnHN -1) {
            ShdQOBeUP++;
            lc = 0;
            EJCm4pedXv = 0;
            scanf ("%d%d", &lc, &EJCm4pedXv);
            tqAZTFYCUKLe = 0;
            tqAZTFYCUKLe = 1.0 * EJCm4pedXv / lc;
            if ((tqAZTFYCUKLe - OnSt18q7) > (32.05 - 32.0)) {
                printf ("better\n");
            }
            else if ((OnSt18q7 -tqAZTFYCUKLe) > 0.05) {
                printf ("worse\n");
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            else if ((tqAZTFYCUKLe - OnSt18q7) <= 0.05 && (OnSt18q7 -tqAZTFYCUKLe) <= 0.05) {
                printf ("same\n");
            };
        };
    }
    return 0;
}

