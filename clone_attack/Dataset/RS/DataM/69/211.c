int main () {
    char z [(557 - 57)];
    char x [(646 - 146)];
    char y [500];
    int i;
    int gOLcHS7A6vhC;
    int XdIEXsWv;
    int c;
    int k;
    scanf ("%s", x);
    scanf ("%s", y);
    gOLcHS7A6vhC = strlen (x);
    XdIEXsWv = strlen (y);
    if (XdIEXsWv <= gOLcHS7A6vhC) {
        for (i = (312 - 312), k = (879 - 879); i < XdIEXsWv; i++) {
            z[gOLcHS7A6vhC - (802 - 801) - i] = x[gOLcHS7A6vhC - (757 - 756) - i] + y[XdIEXsWv -(411 - 410) - i] + k - (499 - 451);
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
            if (z[gOLcHS7A6vhC - (966 - 965) - i] > '9') {
                z[gOLcHS7A6vhC - (123 - 122) - i] = z[gOLcHS7A6vhC - (582 - 581) - i] - (491 - 481);
                k = (100 - 99);
            }
            else
                k = 0;
        }
        for (i = 0; gOLcHS7A6vhC - XdIEXsWv > i; i++) {
            z[gOLcHS7A6vhC - XdIEXsWv -(380 - 379) - i] = x[gOLcHS7A6vhC - XdIEXsWv -(276 - 275) - i] + k;
            if (z[gOLcHS7A6vhC - XdIEXsWv -1 - i] > '9') {
                z[gOLcHS7A6vhC - XdIEXsWv -1 - i] = z[gOLcHS7A6vhC - XdIEXsWv -1 - i] - (306 - 296);
                k = 1;
            }
            else
                k = 0;
        }
        c = gOLcHS7A6vhC;
        if (!(1 != k)) {
            c++;
            {
                i = gOLcHS7A6vhC;
                while (i > 0) {
                    z[i] = z[i - 1];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    i--;
                };
            }
            z[0] = '1';
        };
    }
    else {
        c = XdIEXsWv;
        for (i = 0, k = 0; gOLcHS7A6vhC > i; i++) {
            z[XdIEXsWv -1 - i] = x[gOLcHS7A6vhC - 1 - i] + y[XdIEXsWv -1 - i] + k - 48;
            if ('9' < z[XdIEXsWv -1 - i]) {
                z[XdIEXsWv -1 - i] = z[XdIEXsWv -1 - i] - (808 - 798);
                k = 1;
            }
            else
                k = 0;
        }
        for (i = 0; XdIEXsWv -gOLcHS7A6vhC > i; i++) {
            z[XdIEXsWv -gOLcHS7A6vhC - 1 - i] = y[XdIEXsWv -gOLcHS7A6vhC - 1 - i] + k;
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
            if (z[XdIEXsWv -gOLcHS7A6vhC - 1 - i] > '9') {
                z[XdIEXsWv -gOLcHS7A6vhC - 1 - i] = z[XdIEXsWv -gOLcHS7A6vhC - 1 - i] - 10;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                k = 1;
            }
            else
                k = 0;
        }
        if (k == 1) {
            for (i = XdIEXsWv; i > 0; i--)
                z[i] = z[i - 1];
            z[0] = '1';
            c++;
        };
    }
    for (i = 0; i < c; i++) {
        if (z[i] != '0')
            break;
        if (i == c - 1) {
            i = i + 1;
            printf ("0");
        };
    }
    for (; i < c; i++)
        printf ("%c", z[i]);
    return 0;
}

