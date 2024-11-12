int main () {
    int MwYr8Ak;
    int wQqPrgjM7bA;
    int x [101];
    double  a;
    double  Btj34S0JXI;
    double  c;
    double  VkTG03;
    a = 0.0;
    Btj34S0JXI = 0.0;
    c = 0.0;
    VkTG03 = 0.0;
    double  jUCmWLRzPH;
    double  f;
    double  fPq78XZDQRL;
    double  qEdpHwh;
    scanf ("%d", &wQqPrgjM7bA);
    {
        MwYr8Ak = 0;
        while (MwYr8Ak < wQqPrgjM7bA) {
            scanf ("%d", &x[MwYr8Ak]);
            MwYr8Ak = MwYr8Ak +1;
        };
    }
    {
        MwYr8Ak = 0;
        while (MwYr8Ak < wQqPrgjM7bA) {
            if (x[MwYr8Ak] <= 18) {
                a = a + 1.0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            else {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if ((x[MwYr8Ak] >= 19) && (35 >= x[MwYr8Ak])) {
                    Btj34S0JXI = Btj34S0JXI +1.0;
                }
                else if ((x[MwYr8Ak] >= 36) && (x[MwYr8Ak] <= 60)) {
                    c = c + 1.0;
                }
                else if (x[MwYr8Ak] >= 61) {
                    VkTG03 = VkTG03 +1.0;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            MwYr8Ak++;
        };
    }
    jUCmWLRzPH = a * 100 / wQqPrgjM7bA;
    printf ("1-18: %.2lf%\n", jUCmWLRzPH);
    f = Btj34S0JXI *100 / wQqPrgjM7bA;
    fPq78XZDQRL = c * 100 / wQqPrgjM7bA;
    qEdpHwh = VkTG03 *100 / wQqPrgjM7bA;
    printf ("19-35: %.2lf%\n", f);
    printf ("36-60: %.2lf%\n", fPq78XZDQRL);
    printf ("60??: %.2lf%\n", qEdpHwh);
    return 0;
}

