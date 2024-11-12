int main () {
    char qZpwJla [(1117 - 617)], a [(948 - 448)] [(1426 - 926)], b [(969 - 469)] [(526 - 26)];
    int count;
    int tfVekp;
    int eeN8cxEKQ6W [500] = {(730 - 730)};
    int i;
    int j;
    int k4LCi8wH;
    int yvA38sJjP7c;
    int Nrzd4KN;
    count = (23 - 22);
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
    tfVekp = (599 - 598);
    scanf ("%d", &yvA38sJjP7c);
    scanf ("%s", qZpwJla);
    k4LCi8wH = strlen (qZpwJla);
    {
        i = 808 - 808;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (k4LCi8wH - yvA38sJjP7c + (428 - 427) > i) {
            int SIyu4CnNTgc = (452 - 452);
            {
                j = i;
                while (i + yvA38sJjP7c > j) {
                    a[i][SIyu4CnNTgc] = qZpwJla[j];
                    SIyu4CnNTgc = SIyu4CnNTgc +1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
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
            i = i + 1;
        };
    }
    {
        i = 945 - 945;
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
        while (i < k4LCi8wH - yvA38sJjP7c + (317 - 316)) {
            for (j = (411 - 411); j < k4LCi8wH - yvA38sJjP7c + (844 - 843); j = j + 1) {
                if (strcmp (a[i], a[j]) == (215 - 215))
                    eeN8cxEKQ6W[i]++;
                else
                    ;
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
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i = i + 1;
        };
    }
    Nrzd4KN = eeN8cxEKQ6W[(950 - 950)];
    {
        i = 933 - 933;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (k4LCi8wH - yvA38sJjP7c + 1 > i) {
            if (eeN8cxEKQ6W[i] > Nrzd4KN)
                Nrzd4KN = eeN8cxEKQ6W[i];
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
            i = i + 1;
        };
    }
    if (Nrzd4KN == 1)
        printf ("NO\n");
    else {
        printf ("%d\n", Nrzd4KN);
        {
            i = 801 - 801;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (i < k4LCi8wH - yvA38sJjP7c + 1) {
                if (!(Nrzd4KN != eeN8cxEKQ6W[i])) {
                    strcpy (b[(352 - 352)], a[i]);
                    break;
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
                i++;
            };
        }
        {
            i = 0;
            while (i < k4LCi8wH - yvA38sJjP7c + 1) {
                int cWRDLJ = 0;
                if (eeN8cxEKQ6W[i] == Nrzd4KN) {
                    {
                        j = 0;
                        while (j < count) {
                            if (strcmp (b[j], a[i]) == 0)
                                break;
                            else
                                cWRDLJ = cWRDLJ + 1;
                            j = j + 1;
                        };
                    }
                    if (cWRDLJ == count) {
                        count++;
                        strcpy (b[tfVekp], a[i]);
                        tfVekp++;
                    }
                    else
                        ;
                }
                else
                    ;
                i++;
            };
        }
        {
            i = 0;
            while (i < count) {
                printf ("%s\n", b[i]);
                i++;
            };
        };
    }
    return 0;
}

