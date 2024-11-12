double  FyCm1dHKZEsz [100];

int main () {
    int xSfUgVuZz0F2;
    int k;
    scanf ("%d", &k);
    for (xSfUgVuZz0F2 = (490 - 490); xSfUgVuZz0F2 < k; xSfUgVuZz0F2++) {
        double  HQauPqLv = 0;
        double  IN1cwb = 0.0;
        int j;
        int NzADCmw9;
        double  avg = IN1cwb / NzADCmw9;
        scanf ("%d", &NzADCmw9);
        for (j = 0; NzADCmw9 > j; j++) {
            scanf ("%lf", FyCm1dHKZEsz +j);
            IN1cwb += *(FyCm1dHKZEsz +j);
        }
        for (j = 0; j < NzADCmw9; j++) {
            double  num = *(FyCm1dHKZEsz +j);
            HQauPqLv = HQauPqLv +(num - avg) * (num - avg);
        }
        HQauPqLv = HQauPqLv / (NzADCmw9);
        HQauPqLv = sqrt (HQauPqLv);
        printf ("%.5lf\n", HQauPqLv);
    };
}

