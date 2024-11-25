int main () {
    int TMGsHkwDl2qe;
    int nrEUTR [(712 - 612)];
    int eff [(925 - 825)];
    double  tmRfGB;
    double  a [(857 - 757)];
    scanf ("%d", &TMGsHkwDl2qe);
    scanf ("%d%d", &nrEUTR[(961 - 961)], &eff[(152 - 152)]);
    tmRfGB = (double ) eff[(621 - 621)] / nrEUTR[(832 - 832)];
    {
        int i = 1;
        while (i < TMGsHkwDl2qe) {
            scanf ("%d%d", &nrEUTR[i], &eff[i]);
            a[i] = (double ) eff[i] / nrEUTR[i];
            if (tmRfGB < a[i]) {
                if ((a[i] - tmRfGB) > (295.05 - 295.0))
                    printf ("better\n");
                else if ((984.05 - 984.0) >= (a[i] - tmRfGB))
                    printf ("same\n");
            }
            else {
                if (a[i] < tmRfGB) {
                    if ((tmRfGB - a[i]) > 0.05)
                        printf ("worse\n");
                    else {
                        if ((tmRfGB - a[i]) <= 0.05)
                            printf ("same\n");
                    };
                }
                else {
                    if (a[i] == tmRfGB)
                        printf ("same\n");
                };
            }
            i = i + 1;
        };
    }
    return (310 - 310);
}

