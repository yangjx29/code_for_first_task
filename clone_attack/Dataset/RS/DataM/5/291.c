int main () {
    char FyhXVB9I [10000];
    char b [10000];
    int a5fLhQCPtpX;
    int z;
    int zObmAC2BK;
    int kdD67OWK84U;
    a5fLhQCPtpX = (551 - 551);
    z = 0;
    double  e, fuREF2z, IO0g9D, h;
    scanf ("%lf", &h);
    scanf ("%s", FyhXVB9I);
    scanf ("%s", b);
    {
        int Tu6T1wlNf = 0;
        while (FyhXVB9I[Tu6T1wlNf] != '\0') {
            if ((FyhXVB9I[Tu6T1wlNf] == 'A') || (FyhXVB9I[Tu6T1wlNf] == 'T') || (FyhXVB9I[Tu6T1wlNf] == 'C') || (FyhXVB9I[Tu6T1wlNf] == 'G')) {
                z = z + 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
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
            Tu6T1wlNf = Tu6T1wlNf +1;
        };
    }
    for (int Tu6T1wlNf = 0;
    b[Tu6T1wlNf] != '\0'; Tu6T1wlNf = Tu6T1wlNf +1) {
        if ((b[Tu6T1wlNf] == 'A') || (b[Tu6T1wlNf] == 'T') || (b[Tu6T1wlNf] == 'C') || (b[Tu6T1wlNf] == 'G')) {
            z = z + 1;
        };
    }
    zObmAC2BK = strlen (FyhXVB9I);
    kdD67OWK84U = strlen (b);
    if (zObmAC2BK == kdD67OWK84U) {
        for (int Tu6T1wlNf = 0;
        FyhXVB9I[Tu6T1wlNf] != '\0'; Tu6T1wlNf = Tu6T1wlNf +1) {
            if (FyhXVB9I[Tu6T1wlNf] == b[Tu6T1wlNf]) {
                a5fLhQCPtpX = a5fLhQCPtpX + 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                };
            };
        }
        fuREF2z = a5fLhQCPtpX;
        IO0g9D = zObmAC2BK;
        e = fuREF2z / IO0g9D;
        if (e >= h && z == 2 * zObmAC2BK) {
            printf ("yes");
        }
        else if (e < h && z == 2 * zObmAC2BK) {
            printf ("no");
        };
    }
    if (zObmAC2BK != kdD67OWK84U || z != 2 * zObmAC2BK) {
        printf ("error");
    }
    return 0;
}

