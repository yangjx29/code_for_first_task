int main () {
    int XG1YsCVFzR;
    int FygTZHmsJY3F;
    int VQhSqg;
    int k;
    int uisMyrDj3J [100];
    int svf4HAazFGur [100] [100];
    int PkjIlb8;
    int Tsj9NbqVHIQr;
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
    int p;
    int UvHPnuwYL;
    scanf ("%d", &XG1YsCVFzR);
    for (FygTZHmsJY3F = 0; XG1YsCVFzR > FygTZHmsJY3F; FygTZHmsJY3F = FygTZHmsJY3F +1) {
        uisMyrDj3J[FygTZHmsJY3F] = 0;
        scanf ("%d%d", &PkjIlb8, &Tsj9NbqVHIQr);
        {
            VQhSqg = 0;
            while (VQhSqg < PkjIlb8) {
                {
                    k = 0;
                    while (Tsj9NbqVHIQr > k) {
                        scanf ("%d", &svf4HAazFGur[VQhSqg][k]);
                        k++;
                    };
                }
                VQhSqg = VQhSqg +1;
            };
        }
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
            p = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (Tsj9NbqVHIQr -1 > p) {
                uisMyrDj3J[FygTZHmsJY3F] = uisMyrDj3J[FygTZHmsJY3F] + svf4HAazFGur[0][p];
                p = p + 1;
            };
        }
        {
            UvHPnuwYL = 0;
            while (PkjIlb8 -1 > UvHPnuwYL) {
                uisMyrDj3J[FygTZHmsJY3F] = uisMyrDj3J[FygTZHmsJY3F] + svf4HAazFGur[UvHPnuwYL][Tsj9NbqVHIQr -1];
                UvHPnuwYL = UvHPnuwYL +1;
            };
        }
        {
            p = Tsj9NbqVHIQr -1;
            while (p > 0) {
                uisMyrDj3J[FygTZHmsJY3F] = uisMyrDj3J[FygTZHmsJY3F] + svf4HAazFGur[PkjIlb8 -1][p];
                p = p - 1;
            };
        }
        {
            UvHPnuwYL = PkjIlb8 -1;
            while (UvHPnuwYL > 0) {
                uisMyrDj3J[FygTZHmsJY3F] = uisMyrDj3J[FygTZHmsJY3F] + svf4HAazFGur[UvHPnuwYL][0];
                UvHPnuwYL = UvHPnuwYL -1;
            };
        };
    }
    for (FygTZHmsJY3F = 0; FygTZHmsJY3F < XG1YsCVFzR; FygTZHmsJY3F++) {
        printf ("%d\n", uisMyrDj3J[FygTZHmsJY3F]);
    }
    return 0;
}

