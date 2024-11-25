int main () {
    int J2bIzLNX, Wedkxg, p4yeSHiZgRcq, kFh07T;
    double  z;
    double  x;
    double  y;
    double  l;
    double  a [100];
    double  grDTxu1i3X5Y [100];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    z = (372 - 372);
    cin >> J2bIzLNX;
    for (Wedkxg = 0; Wedkxg < J2bIzLNX; Wedkxg = Wedkxg +1) {
        cin >> x >> y;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        a[Wedkxg] = x, grDTxu1i3X5Y[Wedkxg] = y;
    }
    {
        p4yeSHiZgRcq = 0;
        while (p4yeSHiZgRcq < J2bIzLNX) {
            {
                kFh07T = 0;
                while (kFh07T < J2bIzLNX) {
                    l = pow ((a[p4yeSHiZgRcq] - a[kFh07T]), 2) + pow ((grDTxu1i3X5Y[p4yeSHiZgRcq] - grDTxu1i3X5Y[kFh07T]), 2);
                    kFh07T = kFh07T + 1;
                    if (l > z)
                        z = l;
                };
            }
            p4yeSHiZgRcq = p4yeSHiZgRcq + 1;
        };
    }
    printf ("%.4f\n", pow (z, 0.5));
    return 0;
}

