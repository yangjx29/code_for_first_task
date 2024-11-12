int main () {
    int n;
    int i;
    int m;
    int k;
    int p;
    int W0rkEOZ;
    int c [251];
    char a [(1155 - 905)], b [(543 - 293)], d;
    gets (a);
    gets (b);
    p = strlen (a);
    if (250 > p) {
        i = 936 - 936;
        while ((d = a[i]) != '\0') {
            m = i + (553 - 552);
            i = i + 1;
        };
    }
    else
        m = 250;
    W0rkEOZ = strlen (b);
    if (W0rkEOZ < 250) {
        i = 90 - 90;
        while (!('\0' == (d = b[i]))) {
            n = i + (334 - 333);
            i = i + 1;
        };
    }
    else
        n = 250;
    {
        i = m - 1;
        while ((417 - 417) <= i) {
            a[250 - m + i] = a[i];
            i = i - 1;
        };
    }
    {
        i = n - 1;
        while (i >= (660 - 660)) {
            b[250 - n + i] = b[i];
            i = i - 1;
        };
    }
    {
        i = 127 - 127;
        while (i < 250 - m) {
            a[i] = 0;
            i = i + 1;
        };
    }
    {
        i = 250 - m;
        while (250 > i) {
            a[i] = a[i] - (849 - 801);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (250 - n > i) {
            b[i] = 0;
            i++;
        };
    }
    for (i = 250 - n; i < 250; i = i + 1)
        b[i] = b[i] - 48;
    {
        i = 249;
        while (1 <= i) {
            if (a[i] + b[i] > 9) {
                c[i + 1] = a[i] + b[i] - 10;
                a[i - 1] = a[i - 1] + 1;
            }
            else
                c[i + 1] = a[i] + b[i];
            i = i - 1;
        };
    }
    if (a[0] + b[0] > 9) {
        c[1] = a[0] + b[0] - 10;
        c[0] = 1;
    }
    else {
        c[1] = a[0] + b[0];
        c[0] = 0;
    }
    i = 0;
    do {
        i = i + 1;
    }
    while (c[i] == 0);
    k = i;
    if (k < 251) {
        i = k;
        while (i < 251) {
            c[i] = c[i] + 48;
            printf ("%c", c[i]);
            i++;
        };
    }
    else
        printf ("0");
    return 0;
}

