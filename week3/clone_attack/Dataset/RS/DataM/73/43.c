int main () {
    int LH9zRdDNSlu = 0, uncQKvIUl1j = 0;
    int hJeXTWSR [5] [5] = {{0}};
    int DkgOxJINQvA;
    int TROBdv;
    DkgOxJINQvA = 0;
    TROBdv = 0;
    int O4BVntp;
    int AipYRZyd0N2;
    int dYodnqtZeQG;
    {
        O4BVntp = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (5 > O4BVntp) {
            {
                AipYRZyd0N2 = 0;
                while (AipYRZyd0N2 < 5) {
                    cin >> hJeXTWSR[O4BVntp][AipYRZyd0N2];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    AipYRZyd0N2 = AipYRZyd0N2 +1;
                };
            }
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
            O4BVntp++;
        };
    }
    for (O4BVntp = 0; O4BVntp < 5; O4BVntp = O4BVntp +1) {
        DkgOxJINQvA = hJeXTWSR[O4BVntp][0];
        TROBdv = 0;
        {
            AipYRZyd0N2 = 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (AipYRZyd0N2 < 5) {
                if (DkgOxJINQvA < hJeXTWSR[O4BVntp][AipYRZyd0N2]) {
                    DkgOxJINQvA = hJeXTWSR[O4BVntp][AipYRZyd0N2];
                    TROBdv = AipYRZyd0N2;
                }
                AipYRZyd0N2++;
            };
        }
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
        for (AipYRZyd0N2 = 0; AipYRZyd0N2 < 5; AipYRZyd0N2++) {
            if (hJeXTWSR[AipYRZyd0N2][TROBdv] < DkgOxJINQvA)
                LH9zRdDNSlu = 1;
        }
        if (!(0 != LH9zRdDNSlu)) {
            O4BVntp++;
            TROBdv++;
            cout << O4BVntp << ' ' << TROBdv << ' ';
            O4BVntp--;
            TROBdv--;
            cout << hJeXTWSR[O4BVntp][TROBdv];
            uncQKvIUl1j = 1;
        }
        LH9zRdDNSlu = 0;
    }
    if (uncQKvIUl1j == 0)
        cout << "not found";
    return 0;
}

