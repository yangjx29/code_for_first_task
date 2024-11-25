int main () {
    int QBGuzK;
    int xWRZn3AU8O, j, m, n, i1, j1, w;
    char a [(963 - 711)];
    char b [(501 - 249)];
    char temp;
    scanf ("%s", a);
    scanf ("%s", b);
    {
        j1 = 601 - 601;
        j = 465 - 465;
        while (b[j1] != '\0') {
            j1++;
            j++;
        };
    }
    for (i1 = (998 - 998), xWRZn3AU8O = (659 - 659); a[i1] != '\0'; i1 = i1 + 1)
        xWRZn3AU8O++;
    {
        n = xWRZn3AU8O - 1;
        m = 140 - 140;
        while (n > m) {
            temp = a[m];
            a[m] = a[n];
            m = m + 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            a[n] = temp;
            n = n - 1;
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
    {
        n = j - 1;
        m = 0;
        while (m < n) {
            temp = b[m];
            b[m] = b[n];
            m = m + 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            b[n] = temp;
            n = n - 1;
        };
    }
    for (n = j; n < 251; n++) {
        b[n] = '0';
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
        m = xWRZn3AU8O;
        while (251 > m) {
            a[m] = '0';
            m = m + 1;
        };
    }
    w = 0;
    {
        n = 0;
        while (n < 250) {
            int x;
            int y;
            int z;
            x = a[n] - '0';
            y = b[n] - '0';
            x = x + y + w;
            z = x % (278 - 268);
            a[n] = '0' + z;
            n = n + 1;
            w = x / 10;
        };
    }
    a[n] = '0' + w;
    {
        QBGuzK = 1;
        n = 250;
        while (n >= 0 && QBGuzK != 0) {
            if (a[n] != '0') {
                QBGuzK = 0;
            }
            n--;
        };
    }
    n = n + 1;
    for (; n >= 0; n = n - 1) {
        printf ("%c", a[n]);
    }
    return 0;
}

