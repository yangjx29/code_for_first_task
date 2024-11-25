int main () {
    double  MVb3DNIQ [100];
    double  XixbzKOL7n5;
    int GhuRSQ2F [100], RYU5TAI4;
    int n;
    int hsVJRIxnF4 [100];
    int KzbBWt;
    GhuRSQ2F[(993 - 993)] = (865 - 864), GhuRSQ2F[1] = (611 - 609);
    {
        RYU5TAI4 = 2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (100 > RYU5TAI4) {
            GhuRSQ2F[RYU5TAI4] = GhuRSQ2F[RYU5TAI4 -1] + GhuRSQ2F[RYU5TAI4 -2];
            RYU5TAI4 = RYU5TAI4 +1;
        };
    }
    scanf ("%d", &n);
    {
        RYU5TAI4 = 0;
        while (n > RYU5TAI4) {
            scanf ("%d", &hsVJRIxnF4[RYU5TAI4]);
            RYU5TAI4 = RYU5TAI4 +1;
            printf ("\n");
        };
    }
    for (KzbBWt = 0; n > KzbBWt; KzbBWt = KzbBWt +1) {
        {
            RYU5TAI4 = 0;
            while (RYU5TAI4 < hsVJRIxnF4[KzbBWt]) {
                MVb3DNIQ[RYU5TAI4] = GhuRSQ2F[RYU5TAI4 +1] * 1.0 / GhuRSQ2F[RYU5TAI4];
                XixbzKOL7n5 = XixbzKOL7n5 +MVb3DNIQ[RYU5TAI4];
                RYU5TAI4 = RYU5TAI4 +1;
            };
        }
        {
            RYU5TAI4 = 0;
            while (hsVJRIxnF4[KzbBWt] - 1 > RYU5TAI4) {
                MVb3DNIQ[RYU5TAI4] = 0;
                RYU5TAI4 = RYU5TAI4 +1;
            };
        }
        printf ("%.3lf\n", XixbzKOL7n5);
        XixbzKOL7n5 = 0;
    }
    return 0;
}

