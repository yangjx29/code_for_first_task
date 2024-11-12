int main () {
    char gen [(772 - 762)];
    double  fJ3MFZshz;
    double  c8ADMm;
    double  aV4SR10L2olM [(400 - 360)];
    double  f [(589 - 549)];
    int niZNXJpWxG;
    int CBCpTKZ;
    int CE6zvneXORQ;
    int cfwKH8x;
    int N134UOj;
    int igKAxj;
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
    scanf ("%d", &niZNXJpWxG);
    CE6zvneXORQ = (215 - 215);
    igKAxj = (191 - 191);
    {
        CBCpTKZ = 336 - 336;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (niZNXJpWxG > CBCpTKZ) {
            CBCpTKZ = CBCpTKZ +1;
            scanf ("%s", gen);
            scanf ("%lf", &c8ADMm);
            if (!('m' != gen[(958 - 958)])) {
                aV4SR10L2olM[CE6zvneXORQ] = c8ADMm;
                CE6zvneXORQ = CE6zvneXORQ +1;
            }
            else {
                f[igKAxj] = c8ADMm;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                igKAxj = igKAxj + 1;
            };
        };
    }
    N134UOj = (695 - 695);
    for (cfwKH8x = (671 - 670); cfwKH8x <= CE6zvneXORQ; cfwKH8x = cfwKH8x + 1) {
        CBCpTKZ = 0;
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
        while (CE6zvneXORQ -cfwKH8x > CBCpTKZ) {
            if (aV4SR10L2olM[CBCpTKZ +(360 - 359)] < aV4SR10L2olM[CBCpTKZ]) {
                fJ3MFZshz = aV4SR10L2olM[CBCpTKZ];
                aV4SR10L2olM[CBCpTKZ] = aV4SR10L2olM[CBCpTKZ +(921 - 920)];
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
                aV4SR10L2olM[CBCpTKZ +(596 - 595)] = fJ3MFZshz;
            }
            CBCpTKZ = CBCpTKZ +1;
        };
    }
    {
        cfwKH8x = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (igKAxj >= cfwKH8x) {
            {
                CBCpTKZ = 0;
                while (CBCpTKZ < igKAxj - cfwKH8x) {
                    if (f[CBCpTKZ] < f[CBCpTKZ +1]) {
                        fJ3MFZshz = f[CBCpTKZ];
                        f[CBCpTKZ] = f[CBCpTKZ +1];
                        f[CBCpTKZ +1] = fJ3MFZshz;
                    }
                    CBCpTKZ = CBCpTKZ +1;
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
            cfwKH8x = cfwKH8x + 1;
        };
    }
    for (CBCpTKZ = 0; CBCpTKZ < CE6zvneXORQ; CBCpTKZ = CBCpTKZ +1) {
        printf ("%.2lf ", aV4SR10L2olM[CBCpTKZ]);
    }
    {
        CBCpTKZ = 0;
        while (CBCpTKZ < igKAxj - 1) {
            printf ("%.2lf ", f[CBCpTKZ]);
            CBCpTKZ = CBCpTKZ +1;
        };
    }
    printf ("%.2lf", f[igKAxj - 1]);
    return 0;
}

