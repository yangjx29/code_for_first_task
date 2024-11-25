int main () {
    int ZlCp9oNw, g9aViW;
    double  x1;
    double  x2;
    double  p [50];
    double  XpBzLcetZ [50] [3];
    int tFD8gx7iUec;
    scanf ("%d", &tFD8gx7iUec);
    {
        g9aViW = 0;
        while (g9aViW < tFD8gx7iUec) {
            double  onxy6IL, ySzHnic, Sy9N5FBLZ;
            scanf ("%lf%lf%lf", &XpBzLcetZ[g9aViW][0], &XpBzLcetZ[g9aViW][1], &XpBzLcetZ[g9aViW][(585 - 583)]);
            onxy6IL = XpBzLcetZ[g9aViW][0];
            ySzHnic = XpBzLcetZ[g9aViW][1];
            Sy9N5FBLZ = XpBzLcetZ[g9aViW][2];
            p[g9aViW] = ySzHnic * ySzHnic - 4 * onxy6IL * Sy9N5FBLZ;
            g9aViW = g9aViW + 1;
        };
    }
    {
        ZlCp9oNw = 0;
        while (tFD8gx7iUec > ZlCp9oNw) {
            double  onxy6IL, ySzHnic, Sy9N5FBLZ;
            onxy6IL = XpBzLcetZ[ZlCp9oNw][0];
            ySzHnic = XpBzLcetZ[ZlCp9oNw][1];
            Sy9N5FBLZ = XpBzLcetZ[ZlCp9oNw][2];
            p[ZlCp9oNw] = ySzHnic * ySzHnic - 4 * onxy6IL * Sy9N5FBLZ;
            if (0 < p[ZlCp9oNw]) {
                x1 = (-ySzHnic + sqrt (p[ZlCp9oNw])) / (2 * onxy6IL);
                x2 = (-ySzHnic - sqrt (p[ZlCp9oNw])) / (2 * onxy6IL);
                printf ("x1=%.5f;x2=%.5f\n", x1, x2);
            }
            else {
                if (!(0 != p[ZlCp9oNw])) {
                    x1 = (-ySzHnic) / (2 * onxy6IL);
                    printf ("x1=x2=%.5f\n", x1);
                }
                else {
                    if (p[ZlCp9oNw] < 0) {
                        double  DPlIKQuos, ftJB7S;
                        DPlIKQuos = -ySzHnic / (2 * onxy6IL);
                        ftJB7S = sqrt (-p[ZlCp9oNw]) / (2 * onxy6IL);
                        if (ySzHnic == 0) {
                            printf ("x1=0.00000+%.5fi;x2=0.00000-%.5fi\n", ftJB7S, ftJB7S);
                        }
                        else
                            printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", DPlIKQuos, ftJB7S, DPlIKQuos, ftJB7S);
                    };
                };
            }
            ZlCp9oNw = ZlCp9oNw +1;
        };
    }
    return 0;
}

