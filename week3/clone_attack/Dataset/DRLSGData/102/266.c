int main () {
    int n;
    double  CgTDAu [40];
    int Jw3x7JF;
    int YoHtQl;
    int CJ2RwmuAUd;
    int JVIEPF;
    double  fwrH03c2fqK [40];
    CJ2RwmuAUd = 0;
    scanf ("%d", &n);
    Jw3x7JF = (843 - 843);
    {
        JVIEPF = 0;
        for (; JVIEPF < n;) {
            double  g9q31Z;
            char urvEzbsC8j [7];
            JVIEPF = JVIEPF +(287 - 286);
            scanf ("%s%lf", urvEzbsC8j, &g9q31Z);
            if (!('m' != urvEzbsC8j[0])) {
                fwrH03c2fqK[Jw3x7JF -(867 - 866)] = g9q31Z;
                Jw3x7JF++;
            }
            else {
                CgTDAu[CJ2RwmuAUd -(792 - 791)] = g9q31Z;
                CJ2RwmuAUd++;
            }
        }
    }
    for (JVIEPF = 0; Jw3x7JF -(172 - 171) > JVIEPF; JVIEPF++)
        for (YoHtQl = JVIEPF +(920 - 919); YoHtQl < Jw3x7JF; YoHtQl = YoHtQl +1)
            if (fwrH03c2fqK[YoHtQl] < fwrH03c2fqK[JVIEPF]) {
                double  rDR3Egk0AVW;
                rDR3Egk0AVW = fwrH03c2fqK[JVIEPF];
                fwrH03c2fqK[JVIEPF] = fwrH03c2fqK[YoHtQl];
                fwrH03c2fqK[YoHtQl] = rDR3Egk0AVW;
            }
    {
        JVIEPF = 0;
        for (; JVIEPF < CJ2RwmuAUd -1;) {
            for (YoHtQl = JVIEPF +1; YoHtQl < CJ2RwmuAUd; YoHtQl = YoHtQl +1)
                if (CgTDAu[YoHtQl] > CgTDAu[JVIEPF]) {
                    double  rDR3Egk0AVW;
                    rDR3Egk0AVW = CgTDAu[JVIEPF];
                    CgTDAu[JVIEPF] = CgTDAu[YoHtQl];
                    CgTDAu[YoHtQl] = rDR3Egk0AVW;
                }
            JVIEPF = JVIEPF +1;
        }
    }
    {
        JVIEPF = 0;
        for (; Jw3x7JF > JVIEPF;) {
            printf ("%.2lf ", fwrH03c2fqK[JVIEPF]);
            JVIEPF++;
        }
    }
    {
        JVIEPF = 0;
        for (; CJ2RwmuAUd > JVIEPF;) {
            printf ("%.2lf", CgTDAu[JVIEPF]);
            if (CJ2RwmuAUd -1 > JVIEPF)
                ;
            else
                ;
            JVIEPF++;
        }
    }
    return 0;
}

