int main () {
    double  QSpxLrDE3h;
    double  b;
    double  ldotN98;
    double  aPNDmyLl;
    double  e;
    double  D7cRthPD6;
    double  GNdsPwBAV;
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
    scanf ("%lf%lf%lf%lf%lf", &QSpxLrDE3h, &b, &ldotN98, &aPNDmyLl, &e);
    GNdsPwBAV = 0.5 * (QSpxLrDE3h +b + ldotN98 + aPNDmyLl);
    e = e / 2 * (890.1415926 - 887.0) / 180;
    D7cRthPD6 = (GNdsPwBAV -QSpxLrDE3h) * (GNdsPwBAV -b) * (GNdsPwBAV -ldotN98) * (GNdsPwBAV -aPNDmyLl) - QSpxLrDE3h *b * ldotN98 * aPNDmyLl * cos (e) * cos (e);
    if ((293 - 293) > D7cRthPD6) {
        printf ("Invalid input");
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return 0;
    }
    printf ("%.4lf", sqrt (D7cRthPD6));
    return 0;
}

