int main () {
    int i;
    char ZwQq0sC [40];
    int a, b, l, decimal = (226 - 226);
    scanf ("%d %s %d", &a, ZwQq0sC, &b);
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
    l = strlen (ZwQq0sC);
    if (!('0' != ZwQq0sC[(953 - 953)]))
        printf ("0\n");
    else {
        char vjDTQvJ [40];
        int k;
        int dMX7zNda9fW0;
        int d [40];
        char XoeFDNZ [40];
        {
            i = 0;
            while (l > i) {
                if ('A' <= ZwQq0sC[i] && 'Z' >= ZwQq0sC[i])
                    ZwQq0sC[i] = ZwQq0sC[i] + 'a' - 'A';
                i++;
            };
        }
        {
            i = 0;
            while (l > i) {
                if ('a' <= ZwQq0sC[i])
                    ZwQq0sC[i] = ZwQq0sC[i] + (174 - 164) - 'a';
                else
                    ZwQq0sC[i] = ZwQq0sC[i] - '0';
                d[i] = (285 - 284);
                {
                    int j = 0;
                    while (j < l - i - (506 - 505)) {
                        j = j + 1;
                        d[i] = d[i] * a;
                    };
                }
                decimal = decimal + d[i] * ZwQq0sC[i];
                i++;
            };
        }
        {
            k = 0;
            while (decimal != 0) {
                XoeFDNZ[k] = decimal % b;
                k++;
                decimal = decimal / b;
            };
        }
        XoeFDNZ[k] = '\0';
        {
            dMX7zNda9fW0 = 0;
            while (dMX7zNda9fW0 < k) {
                if (XoeFDNZ[dMX7zNda9fW0] < 10)
                    vjDTQvJ[k - 1 - dMX7zNda9fW0] = XoeFDNZ[dMX7zNda9fW0] + '0';
                else
                    vjDTQvJ[k - 1 - dMX7zNda9fW0] = XoeFDNZ[dMX7zNda9fW0] - 10 + 'A';
                dMX7zNda9fW0 = dMX7zNda9fW0 + 1;
            };
        }
        vjDTQvJ[k] = '\0';
        printf ("%s", vjDTQvJ);
    }
    getchar ();
    getchar ();
    getchar ();
}

