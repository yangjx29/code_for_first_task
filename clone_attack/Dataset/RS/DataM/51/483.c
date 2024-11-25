int main () {
    char As8i5D2z [500], b [250] [4];
    gets (As8i5D2z);
    char c;
    int m;
    int OIWt3LshSBx;
    int k;
    int AxcGTEUXw2Bf;
    int TV3NXL7MPpq;
    int l;
    int y;
    int D5CdpVmLS;
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
    m = (995 - 995);
    int d [250];
    {
        AxcGTEUXw2Bf = 443 - 443;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (AxcGTEUXw2Bf < 250) {
            d[AxcGTEUXw2Bf] = (153 - 153);
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
            AxcGTEUXw2Bf = AxcGTEUXw2Bf +1;
        };
    }
    scanf ("%d%c", &OIWt3LshSBx, &c);
    k = strlen (As8i5D2z);
    for (AxcGTEUXw2Bf = (190 - 190); AxcGTEUXw2Bf <= k - OIWt3LshSBx; AxcGTEUXw2Bf++) {
        {
            TV3NXL7MPpq = 81 - 81;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (TV3NXL7MPpq < OIWt3LshSBx) {
                b[m][TV3NXL7MPpq] = As8i5D2z[AxcGTEUXw2Bf +TV3NXL7MPpq];
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
                TV3NXL7MPpq = TV3NXL7MPpq +1;
            };
        }
        m++;
    }
    {
        AxcGTEUXw2Bf = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (AxcGTEUXw2Bf < k - OIWt3LshSBx) {
            for (TV3NXL7MPpq = AxcGTEUXw2Bf +1; k - OIWt3LshSBx >= TV3NXL7MPpq; TV3NXL7MPpq = TV3NXL7MPpq +1) {
                if (!('\0' == b[AxcGTEUXw2Bf][0])) {
                    y = 0;
                    {
                        l = 0;
                        while (l < OIWt3LshSBx) {
                            if (!(b[TV3NXL7MPpq][l] == b[AxcGTEUXw2Bf][l]))
                                y++;
                            l = l + 1;
                        };
                    }
                    if (y == 0) {
                        d[AxcGTEUXw2Bf]++;
                        b[TV3NXL7MPpq][0] = '\0';
                    };
                };
            }
            AxcGTEUXw2Bf++;
        };
    }
    D5CdpVmLS = d[AxcGTEUXw2Bf] + 1;
    {
        AxcGTEUXw2Bf = 0;
        while (AxcGTEUXw2Bf <= k - OIWt3LshSBx) {
            if (d[AxcGTEUXw2Bf] > D5CdpVmLS -1)
                D5CdpVmLS = d[AxcGTEUXw2Bf] + 1;
            AxcGTEUXw2Bf++;
        };
    }
    if (D5CdpVmLS == 1)
        ;
    else {
        printf ("%d\n", D5CdpVmLS);
        {
            AxcGTEUXw2Bf = 0;
            while (AxcGTEUXw2Bf < k - OIWt3LshSBx) {
                if (d[AxcGTEUXw2Bf] == D5CdpVmLS -1) {
                    {
                        TV3NXL7MPpq = 0;
                        while (TV3NXL7MPpq < OIWt3LshSBx) {
                            printf ("%c", b[AxcGTEUXw2Bf][TV3NXL7MPpq]);
                            TV3NXL7MPpq = TV3NXL7MPpq +1;
                        };
                    };
                }
                AxcGTEUXw2Bf++;
            };
        };
    };
}

