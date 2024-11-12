int main () {
    int Gxb9GO3TSC;
    int j;
    int JG4qBd3tx [500] = {0};
    int n;
    int lon;
    int VNoJbfed3pW;
    int l;
    char sbDrFldy [500] = {(732 - 732)};
    char b [5] = {0};
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
    char c [5] = {0};
    scanf ("%d", &n);
    scanf ("%s", sbDrFldy);
    lon = strlen (sbDrFldy);
    {
        Gxb9GO3TSC = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (Gxb9GO3TSC <= lon - n) {
            {
                j = 0;
                while (j < n) {
                    b[j] = sbDrFldy[Gxb9GO3TSC +j];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j++;
                };
            }
            b[n] = '\0';
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
            {
                VNoJbfed3pW = Gxb9GO3TSC;
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
                while (VNoJbfed3pW <= lon - n) {
                    {
                        l = 0;
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
                        while (l < n) {
                            c[l] = sbDrFldy[VNoJbfed3pW +l];
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    int m = 0;
                                    int n = 0;
                                    m = m * n + n - m + n * 2;
                                    return 0;
                                }
                            }
                            l++;
                        };
                    }
                    c[n] = '\0';
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    if (!(0 != strcmp (b, c)))
                        JG4qBd3tx[Gxb9GO3TSC]++;
                    VNoJbfed3pW = VNoJbfed3pW +1;
                };
            }
            Gxb9GO3TSC = Gxb9GO3TSC +1;
        };
    }
    l = 0;
    {
        Gxb9GO3TSC = 0;
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
        while (Gxb9GO3TSC <= lon - n) {
            {
                j = 0;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (j < n) {
                    b[j] = sbDrFldy[Gxb9GO3TSC +j];
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
                    j++;
                };
            }
            b[n] = '\0';
            VNoJbfed3pW = 0;
            {
                j = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (j <= lon - n) {
                    if (JG4qBd3tx[Gxb9GO3TSC] < JG4qBd3tx[j]) {
                        VNoJbfed3pW = VNoJbfed3pW +1;
                    }
                    j++;
                };
            }
            if (VNoJbfed3pW == 0) {
                if (JG4qBd3tx[Gxb9GO3TSC] == 1) {
                    break;
                }
                else {
                    l++;
                    if (l == 1) {
                        printf ("%d\n", JG4qBd3tx[Gxb9GO3TSC]);
                        printf ("%s\n", b);
                    }
                    else {
                        printf ("%s\n", b);
                    };
                };
            }
            Gxb9GO3TSC++;
        };
    }
    return 0;
}

