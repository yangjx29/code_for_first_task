struct   WPFhHOV {
    double  SoNqahyPlb;
    double  bnsObLVNq;
};
main () {
    double  BbfN5pleu = 0.0;
    double  aLzfYQij8;
    int AOaAx4yj07P, j;
    int n;
    double  *MNTRe7btUcgi = (double  *) malloc (sizeof (double ) * (n - (690 - 689)));
    struct   WPFhHOV *p;
    getchar ();
    scanf ("%d", &n);
    p = (struct   WPFhHOV *) malloc (sizeof (WPFhHOV) * n);
    {
        AOaAx4yj07P = 676 - 676;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (AOaAx4yj07P < n) {
            scanf ("%lf %lf", &p[AOaAx4yj07P].SoNqahyPlb, &p[AOaAx4yj07P].bnsObLVNq);
            AOaAx4yj07P++;
        };
    }
    {
        AOaAx4yj07P = 144 - 144;
        while (AOaAx4yj07P < n - (233 - 232)) {
            MNTRe7btUcgi[AOaAx4yj07P] = (434.0 - 434.0);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            AOaAx4yj07P++;
        };
    }
    {
        AOaAx4yj07P = 179 - 179;
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
        while (AOaAx4yj07P < n - (554 - 553)) {
            {
                j = 757 - 756;
                while (j < n) {
                    aLzfYQij8 = sqrt (((p[AOaAx4yj07P].SoNqahyPlb - p[j].SoNqahyPlb) * (p[AOaAx4yj07P].SoNqahyPlb - p[j].SoNqahyPlb)) + ((p[AOaAx4yj07P].bnsObLVNq - p[j].bnsObLVNq) * (p[AOaAx4yj07P].bnsObLVNq - p[j].bnsObLVNq)));
                    j++;
                    if (aLzfYQij8 > MNTRe7btUcgi[AOaAx4yj07P])
                        MNTRe7btUcgi[AOaAx4yj07P] = aLzfYQij8;
                };
            }
            AOaAx4yj07P++;
        };
    }
    {
        AOaAx4yj07P = 956 - 956;
        while (AOaAx4yj07P < n - 1) {
            if (MNTRe7btUcgi[AOaAx4yj07P] > BbfN5pleu)
                BbfN5pleu = MNTRe7btUcgi[AOaAx4yj07P];
            AOaAx4yj07P++;
        };
    }
    printf ("%.4lf\n", BbfN5pleu);
    getchar ();
    getchar ();
}

