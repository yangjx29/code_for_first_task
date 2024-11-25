void  main () {
    int JbXfVEzKROm;
    int kpLW6q4;
    JbXfVEzKROm = 1;
    double  x6jiVzOxM, SWy0wgiu9xo, B8kdEiv5, owE2d6usNb1, oeGvUMzRkTO, D4epwSDvdB, ntSgxqhQTMl7, Rdman75PfQs9, yMiXLpJPSR;
    scanf ("%d", &kpLW6q4);
    {
        JbXfVEzKROm = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (JbXfVEzKROm <= kpLW6q4) {
            JbXfVEzKROm = JbXfVEzKROm +1;
            scanf ("%lf %lf %lf", &x6jiVzOxM, &SWy0wgiu9xo, &B8kdEiv5);
            D4epwSDvdB = SWy0wgiu9xo *SWy0wgiu9xo-(925 - 921) * x6jiVzOxM * B8kdEiv5;
            if (D4epwSDvdB > 0) {
                ntSgxqhQTMl7 = sqrt (D4epwSDvdB);
                owE2d6usNb1 = (-SWy0wgiu9xo+ntSgxqhQTMl7) / ((1001 - 999) * x6jiVzOxM);
                oeGvUMzRkTO = (-SWy0wgiu9xo-ntSgxqhQTMl7) / ((794 - 792) * x6jiVzOxM);
                printf ("x1=%.5lf;x2=%.5lf\n", owE2d6usNb1, oeGvUMzRkTO);
            }
            if (D4epwSDvdB == 0) {
                ntSgxqhQTMl7 = sqrt (D4epwSDvdB);
                owE2d6usNb1 = oeGvUMzRkTO = (-SWy0wgiu9xo+ntSgxqhQTMl7) / (2 * x6jiVzOxM);
                printf ("x1=x2=%.5lf\n", owE2d6usNb1);
            }
            if (D4epwSDvdB < 0) {
                Rdman75PfQs9 = -SWy0wgiu9xo / (2 * x6jiVzOxM);
                yMiXLpJPSR = sqrt (-D4epwSDvdB) / (2 * x6jiVzOxM);
                printf ("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", Rdman75PfQs9, yMiXLpJPSR, Rdman75PfQs9, yMiXLpJPSR);
            };
        };
    };
}

