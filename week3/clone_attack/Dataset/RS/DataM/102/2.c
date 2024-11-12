int main () {
    double  eDNSgBGrPIp;
    double  a [81] = {0};
    int n, lMeF6nR, tNBRKMkQJ, cwcDpC0og9jz, DNg2bpUM7;
    char xiOGkmg1 [41] [7];
    cin >> n;
    for (cwcDpC0og9jz = (749 - 748); n >= cwcDpC0og9jz; cwcDpC0og9jz = cwcDpC0og9jz + 1) {
        cin >> xiOGkmg1[cwcDpC0og9jz] >> a[cwcDpC0og9jz];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    lMeF6nR = 1;
    tNBRKMkQJ = 0;
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
    for (cwcDpC0og9jz = 1; n >= cwcDpC0og9jz; cwcDpC0og9jz = cwcDpC0og9jz + 1) {
        if (!('m' != xiOGkmg1[cwcDpC0og9jz][0])) {
            a[lMeF6nR + n] = a[cwcDpC0og9jz];
            lMeF6nR = lMeF6nR + 1;
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
        if (!('f' != xiOGkmg1[cwcDpC0og9jz][0])) {
            a[2 * n - tNBRKMkQJ] = a[cwcDpC0og9jz];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            tNBRKMkQJ = tNBRKMkQJ + 1;
        };
    }
    for (cwcDpC0og9jz = 1 + n; lMeF6nR + n - 1 >= cwcDpC0og9jz; cwcDpC0og9jz = cwcDpC0og9jz + 1) {
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
        for (DNg2bpUM7 = lMeF6nR + n - 1; DNg2bpUM7 > cwcDpC0og9jz; DNg2bpUM7--) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (a[DNg2bpUM7] < a[DNg2bpUM7 -1]) {
                eDNSgBGrPIp = a[DNg2bpUM7];
                a[DNg2bpUM7] = a[DNg2bpUM7 -1];
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
                a[DNg2bpUM7 -1] = eDNSgBGrPIp;
            };
        };
    }
    for (cwcDpC0og9jz = lMeF6nR + n; cwcDpC0og9jz <= 2 * n; cwcDpC0og9jz++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (DNg2bpUM7 = 2 * n; DNg2bpUM7 > cwcDpC0og9jz; DNg2bpUM7--) {
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
            if (a[DNg2bpUM7] > a[DNg2bpUM7 -1]) {
                eDNSgBGrPIp = a[DNg2bpUM7];
                a[DNg2bpUM7] = a[DNg2bpUM7 -1];
                a[DNg2bpUM7 -1] = eDNSgBGrPIp;
            };
        };
    }
    {
        cwcDpC0og9jz = n + 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (cwcDpC0og9jz < 2 * n) {
            cout << fixed;
            cout << setprecision (2) << a[cwcDpC0og9jz] << " ";
            cwcDpC0og9jz = cwcDpC0og9jz + 1;
        };
    }
    cout << fixed;
    cout << setprecision (2) << a[2 * n];
    return 0;
}

