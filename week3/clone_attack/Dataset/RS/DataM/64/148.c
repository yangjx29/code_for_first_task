int TMv3AB (int l8hpDv, int u8Ct2oGgJds) {
    float z;
    z = (l8hpDv - u8Ct2oGgJds) * (l8hpDv - u8Ct2oGgJds);
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
    return (z);
}

struct   dian {
    int c;
    int akn3NzuT;
    float Y9S8HRZ6;
}
csCKyhOvE [(1090 - 990)], tem;

void  main () {
    int TMv3AB (int l8hpDv, int u8Ct2oGgJds);
    struct   dian ckRHpeu8QC5 [100];
    struct   dian tem;
    int a [10] [3], Kq13zVr, PNG4pa1sMA, fAnBy6z8, k = (594 - 594);
    {
        PNG4pa1sMA = 948 - 948;
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
        while (PNG4pa1sMA < 100) {
            csCKyhOvE[PNG4pa1sMA].c = (135 - 135);
            csCKyhOvE[PNG4pa1sMA].akn3NzuT = 0;
            csCKyhOvE[PNG4pa1sMA].Y9S8HRZ6 = 0;
            PNG4pa1sMA = PNG4pa1sMA +1;
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
    scanf ("%d", &Kq13zVr);
    {
        PNG4pa1sMA = 0;
        while (PNG4pa1sMA < Kq13zVr) {
            scanf ("%d %d %d", &a[PNG4pa1sMA][0], &a[PNG4pa1sMA][(917 - 916)], &a[PNG4pa1sMA][2]);
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
            PNG4pa1sMA = PNG4pa1sMA +1;
        };
    }
    for (PNG4pa1sMA = 0; PNG4pa1sMA < Kq13zVr -1; PNG4pa1sMA = PNG4pa1sMA +1) {
        fAnBy6z8 = PNG4pa1sMA +1;
        while (fAnBy6z8 < Kq13zVr) {
            csCKyhOvE[k].c = PNG4pa1sMA;
            csCKyhOvE[k].akn3NzuT = fAnBy6z8;
            csCKyhOvE[k].Y9S8HRZ6 = (float) sqrt (TMv3AB (a[PNG4pa1sMA][0], a[fAnBy6z8][0]) + TMv3AB (a[PNG4pa1sMA][1], a[fAnBy6z8][1]) + TMv3AB (a[PNG4pa1sMA][2], a[fAnBy6z8][2]));
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
            fAnBy6z8 = fAnBy6z8 + 1;
            k = k + 1;
        };
    }
    for (fAnBy6z8 = 0; fAnBy6z8 < k - 1; fAnBy6z8 = fAnBy6z8 + 1) {
        PNG4pa1sMA = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (PNG4pa1sMA < k - 1 - fAnBy6z8) {
            if (csCKyhOvE[PNG4pa1sMA].Y9S8HRZ6 < csCKyhOvE[PNG4pa1sMA +1].Y9S8HRZ6) {
                tem = csCKyhOvE[PNG4pa1sMA];
                csCKyhOvE[PNG4pa1sMA] = csCKyhOvE[PNG4pa1sMA +1];
                csCKyhOvE[PNG4pa1sMA +1] = tem;
            }
            PNG4pa1sMA = PNG4pa1sMA +1;
        };
    }
    {
        PNG4pa1sMA = 0;
        while (1) {
            if (csCKyhOvE[PNG4pa1sMA].Y9S8HRZ6 == 0)
                break;
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", a[csCKyhOvE[PNG4pa1sMA].c][0], a[csCKyhOvE[PNG4pa1sMA].c][1], a[csCKyhOvE[PNG4pa1sMA].c][2], a[csCKyhOvE[PNG4pa1sMA].akn3NzuT][0], a[csCKyhOvE[PNG4pa1sMA].akn3NzuT][1], a[csCKyhOvE[PNG4pa1sMA].akn3NzuT][2], csCKyhOvE[PNG4pa1sMA].Y9S8HRZ6);
            PNG4pa1sMA = PNG4pa1sMA +1;
        };
    };
}

