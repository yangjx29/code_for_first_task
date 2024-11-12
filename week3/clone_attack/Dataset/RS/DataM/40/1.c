double  m (double  a, double  MhSV5G, double  c, double  FkeuAOUCqWhc, double  eVKc2fkGuM7) {
    double  X9QXs0Z;
    double  s;
    double  nQPJWz4;
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
    X9QXs0Z = 3.1415926;
    s = (a + MhSV5G +c + FkeuAOUCqWhc) / 2;
    nQPJWz4 = sqrt ((s - a) * (s - MhSV5G) * (s - c) * (s - FkeuAOUCqWhc) - a * MhSV5G *c * FkeuAOUCqWhc *cos (X9QXs0Z *eVKc2fkGuM7 / (1247 - 887)) * cos (X9QXs0Z *eVKc2fkGuM7 / 360));
    return (nQPJWz4);
}

void  main () {
    double  m (double  a, double  MhSV5G, double  c, double  FkeuAOUCqWhc, double  eVKc2fkGuM7);
    double  a;
    double  MhSV5G;
    double  c;
    double  FkeuAOUCqWhc;
    double  eVKc2fkGuM7;
    double  OjLDuTK;
    double  s;
    scanf ("%lf%lf%lf%lf%lf", &a, &MhSV5G, &c, &FkeuAOUCqWhc, &eVKc2fkGuM7);
    s = (a + MhSV5G +c + FkeuAOUCqWhc) / 2;
    if (0 > (s - a) * (s - MhSV5G) * (s - c) * (s - FkeuAOUCqWhc))
        ;
    else {
        OjLDuTK = m (a, MhSV5G, c, FkeuAOUCqWhc, eVKc2fkGuM7);
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
        printf ("%.4lf\n", OjLDuTK);
    };
}

