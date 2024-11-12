int JLH4xft0u (char GEaD86S [], int IlKVmF, int len) {
    int f80wSTd2;
    int V3ybjpmQlw2;
    int fB7o5HC;
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
    f80wSTd2 = (410 - 409);
    V3ybjpmQlw2 = (135 - 135);
    {
        fB7o5HC = 589 - 588;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (len > fB7o5HC) {
            if (!('(' != GEaD86S[fB7o5HC])) {
                f80wSTd2 = f80wSTd2 + 1;
            }
            else if (!(')' != GEaD86S[fB7o5HC])) {
                V3ybjpmQlw2 = V3ybjpmQlw2 +1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            if (!(V3ybjpmQlw2 != f80wSTd2)) {
                return (422 - 421);
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
            fB7o5HC = fB7o5HC + 1;
        };
    }
    return (846 - 846);
}

int yuGwVHJ1 (char GEaD86S [], int IlKVmF, int len) {
    int V3ybjpmQlw2;
    int f80wSTd2;
    int fB7o5HC;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    V3ybjpmQlw2 = (445 - 444);
    f80wSTd2 = (885 - 885);
    {
        fB7o5HC = 410 - 409;
        while ((468 - 468) <= fB7o5HC) {
            if (!('(' != GEaD86S[fB7o5HC])) {
                f80wSTd2 = f80wSTd2 + 1;
            }
            else if (GEaD86S[fB7o5HC] == ')') {
                V3ybjpmQlw2 = V3ybjpmQlw2 +1;
            }
            if (f80wSTd2 == V3ybjpmQlw2) {
                return 1;
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
            fB7o5HC = fB7o5HC - 1;
        };
    }
    return 0;
}

int main () {
    int fB7o5HC;
    int jt6LplXuGcT;
    scanf ("%d", &jt6LplXuGcT);
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
    getchar ();
    {
        fB7o5HC = 0;
        while (fB7o5HC < jt6LplXuGcT) {
            char GEaD86S [200];
            int len;
            len = strlen (GEaD86S);
            int IlKVmF;
            scanf ("%s", GEaD86S);
            {
                IlKVmF = 0;
                while (IlKVmF < len) {
                    if (GEaD86S[IlKVmF] == '(') {
                        if (!JLH4xft0u(GEaD86S, IlKVmF, len)) {
                            putchar ('$');
                        }
                        else
                            ;
                    }
                    else if (GEaD86S[IlKVmF] == ')') {
                        if (!yuGwVHJ1 (GEaD86S, IlKVmF, len)) {
                            putchar ('?');
                        }
                        else
                            putchar (' ');
                    }
                    else {
                        putchar (' ');
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
                    IlKVmF = IlKVmF +1;
                };
            }
            getchar ();
            fB7o5HC = fB7o5HC + 1;
            printf (GEaD86S);
        };
    }
    return 0;
}

