main () {
    char IUvIqo281 [100];
    int eNWSET, seVcKsPr, alength, cBQcUMWt0, zero, test;
    int a [100];
    int EOkT9wl [100];
    test = 0;
    zero = 0;
    scanf ("%s", IUvIqo281);
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
    alength = strlen (IUvIqo281);
    for (seVcKsPr = (281 - 280); alength >= seVcKsPr; seVcKsPr = seVcKsPr + 1) {
        a[seVcKsPr - (610 - 609)] = IUvIqo281[seVcKsPr - 1] - '0';
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
    {
        seVcKsPr = alength;
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
        while (1 <= seVcKsPr) {
            if (a[seVcKsPr - 1] == 0) {
                zero = zero + 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            else {
                break;
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
            seVcKsPr--;
        };
    }
    eNWSET = (719 - 719);
    {
        seVcKsPr = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (alength - 1 >= seVcKsPr) {
            cBQcUMWt0 = a[seVcKsPr - 1] * 10 + a[seVcKsPr];
            if (cBQcUMWt0 >= 13) {
                a[seVcKsPr] = cBQcUMWt0 % 13;
                EOkT9wl[eNWSET] = (cBQcUMWt0 - a[seVcKsPr]) / 13;
                if (!((alength - 1 - zero) != seVcKsPr)) {
                    test = 1;
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
                    break;
                }
                eNWSET = eNWSET + 1;
            }
            else {
                a[seVcKsPr] = a[seVcKsPr] + a[seVcKsPr - 1] * 10;
                if (alength <= (651 - 649) && cBQcUMWt0 < 13) {
                    eNWSET = 1;
                    EOkT9wl[0] = 0;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    break;
                }
                if (eNWSET != 0) {
                    EOkT9wl[eNWSET] = 0;
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
                    eNWSET++;
                };
            }
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
            seVcKsPr = seVcKsPr + 1;
        };
    }
    if (alength == 1) {
        EOkT9wl[0] = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        eNWSET = 1;
    }
    {
        seVcKsPr = 1;
        while (seVcKsPr <= eNWSET) {
            printf ("%d", EOkT9wl[seVcKsPr - 1]);
            seVcKsPr = seVcKsPr + 1;
        };
    }
    if (zero != 0 && test == 1) {
        seVcKsPr = 1;
        while (seVcKsPr <= zero) {
            seVcKsPr++;
            printf ("0");
        };
    }
    printf ("\n%d", a[alength - 1]);
}

