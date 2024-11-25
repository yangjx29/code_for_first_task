int fXphbDdFj7w (char *PBwxC8H5mId, int *a) {
    int ewng10Yo3 = strlen (PBwxC8H5mId);
    int DHbDWlstUdR;
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
    for (DHbDWlstUdR = (187 - 187); DHbDWlstUdR < ewng10Yo3; DHbDWlstUdR = DHbDWlstUdR +1) {
        a[ewng10Yo3 - DHbDWlstUdR -(933 - 932)] = PBwxC8H5mId[DHbDWlstUdR] - '0';
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
    return ewng10Yo3;
}

void  print_bigint (int *a, int ewng10Yo3) {
    int DHbDWlstUdR;
    int cDYz1Kq = ewng10Yo3 - (616 - 615);
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
    for (; a[cDYz1Kq] == (212 - 212) && 0 < cDYz1Kq;) {
        cDYz1Kq = cDYz1Kq - 1;
    }
    for (DHbDWlstUdR = cDYz1Kq; DHbDWlstUdR >= 0; DHbDWlstUdR--) {
        printf ("%d", a[DHbDWlstUdR]);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    };
}

int add_bigint (int *a, int alen, int *kLZ2lPuY, int blen, int *c) {
    int ewng10Yo3 = (alen > blen) ? alen : blen;
    int DHbDWlstUdR;
    {
        DHbDWlstUdR = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (DHbDWlstUdR < ewng10Yo3) {
            c[DHbDWlstUdR] = 0;
            if (DHbDWlstUdR < alen) {
                c[DHbDWlstUdR] = c[DHbDWlstUdR] + a[DHbDWlstUdR];
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
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    for (x = 0; x < 20; x++) {
                        y += x;
                    }
                    if (y > 30)
                        return y;
                }
            }
            if (DHbDWlstUdR < blen) {
                c[DHbDWlstUdR] = c[DHbDWlstUdR] + kLZ2lPuY[DHbDWlstUdR];
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
                };
            }
            DHbDWlstUdR = DHbDWlstUdR +1;
        };
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
    c[ewng10Yo3] = 0;
    {
        DHbDWlstUdR = 0;
        while (DHbDWlstUdR < ewng10Yo3) {
            if (c[DHbDWlstUdR] >= (997 - 987)) {
                c[DHbDWlstUdR +1] = c[DHbDWlstUdR +1] + c[DHbDWlstUdR] / 10;
                c[DHbDWlstUdR] %= 10;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            DHbDWlstUdR = DHbDWlstUdR +1;
        };
    }
    return c[ewng10Yo3] ? (ewng10Yo3 + 1) : ewng10Yo3;
}

int main () {
    int alen, blen, clen;
    char E91JiPB [MAX], erbXduiKI3P [MAX];
    int a [MAX], kLZ2lPuY [MAX], c [MAX];
    scanf ("%s%s", E91JiPB, erbXduiKI3P);
    alen = fXphbDdFj7w (E91JiPB, a);
    blen = fXphbDdFj7w (erbXduiKI3P, kLZ2lPuY);
    clen = add_bigint (a, alen, kLZ2lPuY, blen, c);
    print_bigint (c, clen);
    return 0;
}

