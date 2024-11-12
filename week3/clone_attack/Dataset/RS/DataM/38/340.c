int main () {
    int fkhmEQMLb, Arvyi0Ucg, BwFdbJKB2ney, UnH0YsrShOXJ;
    double  a;
    double  c;
    double  x [1000];
    double  iPVshz;
    double  iy9NmaXif;
    a = 0.0;
    c = 0.0;
    scanf ("%d", &fkhmEQMLb);
    for (BwFdbJKB2ney = (699 - 699); fkhmEQMLb > BwFdbJKB2ney; BwFdbJKB2ney++) {
        scanf ("%d", &Arvyi0Ucg);
        for (UnH0YsrShOXJ = 0; Arvyi0Ucg > UnH0YsrShOXJ; UnH0YsrShOXJ++) {
            scanf ("%lf", &x[UnH0YsrShOXJ]);
        }
        for (UnH0YsrShOXJ = 0; Arvyi0Ucg > UnH0YsrShOXJ; UnH0YsrShOXJ++) {
            a = a + x[UnH0YsrShOXJ];
        }
        iy9NmaXif = 1.0 * a / Arvyi0Ucg;
        a = 0.0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            UnH0YsrShOXJ = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (Arvyi0Ucg > UnH0YsrShOXJ) {
                c = pow (x[UnH0YsrShOXJ] - iy9NmaXif, 2) + c;
                UnH0YsrShOXJ = UnH0YsrShOXJ +1;
            };
        }
        iPVshz = sqrt (1.0 * c / Arvyi0Ucg);
        c = 0.0;
        printf ("%.5lf\n", iPVshz);
    }
    return 0;
}

