void  main () {
    char a [(521 - 270)] = {'\0'}, b [251] = {'\0'}, c [(1000 - 748)] = {'\0'};
    int t;
    int PsrGnO;
    int nSEoAc9;
    int len [2];
    int dJOwyu;
    t = (54 - 54);
    scanf ("%s%s", a, b);
    len[(781 - 781)] = strlen (a);
    len[(675 - 674)] = strlen (b);
    if (len[(79 - 79)] == (981 - 980) && len[(376 - 375)] == (840 - 839))
        if (a[(72 - 72)] == '0' && b[(963 - 963)] == '0')
            printf ("0");
    {
        dJOwyu = 251;
        nSEoAc9 = 1;
        PsrGnO = 419 - 419;
        while (PsrGnO >= 0 && 0 <= nSEoAc9) {
            if ((776 - 767) < a[PsrGnO] - (119 - 71) + b[nSEoAc9] - (283 - 235) + t && a[PsrGnO] - (1010 - 962) + b[nSEoAc9] - (691 - 643) + t < (481 - 461)) {
                c[dJOwyu] = a[PsrGnO] - 48 + b[nSEoAc9] - 10 + t;
                t = 1;
            }
            else {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (a[PsrGnO] - 48 + b[nSEoAc9] - 48 + t >= 20) {
                    c[dJOwyu] = a[PsrGnO] - 48 + b[nSEoAc9] - 20 + t;
                    t = 2;
                }
                else {
                    c[dJOwyu] = a[PsrGnO] - 48 + b[nSEoAc9] + t;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    t = 0;
                };
            }
            dJOwyu = dJOwyu - 1;
            nSEoAc9 = nSEoAc9 - 1;
            PsrGnO--;
        };
    }
    if (nSEoAc9 >= 0) {
        for (; nSEoAc9 >= 0; dJOwyu = dJOwyu - 1, nSEoAc9--) {
            if (t + b[nSEoAc9] - 48 > 9) {
                c[dJOwyu] = b[nSEoAc9] + t - 10;
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
                t = 1;
            }
            else {
                c[dJOwyu] = b[nSEoAc9] + t;
                t = 0;
            };
        };
    }
    else {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (PsrGnO >= 0) {
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
            for (; PsrGnO >= 0; dJOwyu--, PsrGnO--) {
                if (t + a[PsrGnO] - 48 > 9) {
                    c[dJOwyu] = a[PsrGnO] + t - 10;
                    t = 1;
                }
                else {
                    c[dJOwyu] = a[PsrGnO] + t;
                    t = 0;
                };
            };
        };
    }
    if (t > 0) {
        c[dJOwyu] = t + 48;
        dJOwyu = dJOwyu - 1;
    }
    {
        nSEoAc9 = dJOwyu + 1;
        while (nSEoAc9 < 252) {
            if (c[nSEoAc9] != 48)
                break;
            nSEoAc9++;
        };
    }
    for (PsrGnO = nSEoAc9; PsrGnO < 252; PsrGnO = PsrGnO +1)
        printf ("%c", c[PsrGnO]);
}

