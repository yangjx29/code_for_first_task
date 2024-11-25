int main (int fPbl2XU, char *argv []) {
    struct   point {
        double  x, y;
    };
    point *dot;
    free (dot);
    int Tc83JHz6AnPh;
    int Ltqiludh, i, GfUbd5, m;
    double  *HPFMXDm;
    double  a;
    free (HPFMXDm);
    Tc83JHz6AnPh = (Ltqiludh *(Ltqiludh -(351 - 350)) / (296 - 294));
    scanf ("%d", &Ltqiludh);
    dot = (struct   point *) malloc (sizeof (point) * Ltqiludh);
    HPFMXDm = (double  *) malloc (sizeof (double ) * Tc83JHz6AnPh);
    {
        i = 0;
        while (Ltqiludh > i) {
            scanf ("%lf%lf", &((dot + i)->x), &((dot + i)->y));
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
            i++;
        };
    }
    {
        i = 0;
        m = 0;
        while (Ltqiludh -(878 - 877) > i) {
            {
                GfUbd5 = 656 - 655;
                while (Ltqiludh > GfUbd5) {
                    HPFMXDm[m] = sqrt (((dot + i)->x - (dot + GfUbd5)->x) * ((dot + i)->x - (dot + GfUbd5)->x) + ((dot + i)->y - (dot + GfUbd5)->y) * ((dot + i)->y - (dot + GfUbd5)->y));
                    m++;
                    GfUbd5++;
                };
            }
            i++;
        };
    }
    for (m = 0; (Tc83JHz6AnPh -(579 - 578)) > m; m = m + 1) {
        if (HPFMXDm[m] > HPFMXDm[m + (534 - 533)]) {
            a = HPFMXDm[m + 1];
            HPFMXDm[m + 1] = HPFMXDm[m];
            HPFMXDm[m] = a;
        };
    }
    printf ("%.4f\n", HPFMXDm[Tc83JHz6AnPh -1]);
    return 0;
}

