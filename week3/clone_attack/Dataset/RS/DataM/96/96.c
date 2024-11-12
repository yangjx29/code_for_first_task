main () {
    int i, b, JZyGAz6eK, UoxDmKe;
    char T1QvBP [100], FnBNbEP [100];
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
    gets (T1QvBP);
    if (!('\0' != T1QvBP[1])) {
        printf ("%c", T1QvBP[0]);
        printf ("0\n");
    }
    else if (!('\0' != T1QvBP[2]) && !(1 != T1QvBP[0] - '0')) {
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
        if (3 > T1QvBP[1] - '0') {
            printf ("%c", T1QvBP[0]);
            printf ("%c", T1QvBP[1]);
            printf ("0\n");
        }
        else {
            printf ("%d", T1QvBP[1] - '0' - 3);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            printf ("1\n");
        };
    }
    else {
        i = 0;
        b = T1QvBP[i] - '0';
        while (T1QvBP[i] != '\0') {
            JZyGAz6eK = b / 13;
            UoxDmKe = b % 13;
            b = UoxDmKe *10 + (T1QvBP[i + 1] - '0');
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            FnBNbEP[i] = JZyGAz6eK +'0';
            i = i + 1;
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
        if (!('0' != FnBNbEP[0]) && !('0' == FnBNbEP[1])) {
            i = 1;
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
            while ('0' <= FnBNbEP[i] && FnBNbEP[i] <= '9') {
                printf ("%c", FnBNbEP[i]);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                i = i + 1;
            };
        }
        else {
            if (FnBNbEP[0] == '0' && FnBNbEP[1] == '0') {
                i = 2;
                while (FnBNbEP[i] >= '0' && FnBNbEP[i] <= '9') {
                    printf ("%c", FnBNbEP[i]);
                    i = i + 1;
                };
            }
            else {
                i = 0;
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
                while (FnBNbEP[i] >= '0' && FnBNbEP[i] <= '9') {
                    printf ("%c", FnBNbEP[i]);
                    i++;
                };
            };
        }
        printf ("\n%d", UoxDmKe);
    };
}

