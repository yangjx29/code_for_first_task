main () {
    char a [250], b [250], m [250];
    int GVawWlebE, hjmtJAV, i, e, j, k;
    scanf ("%s %s", a, b);
    GVawWlebE = strlen (a);
    hjmtJAV = strlen (b);
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
    k = (38 - 38);
    if (GVawWlebE < hjmtJAV) {
        {
            i = 0;
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
            while (hjmtJAV > i) {
                m[i] = a[i];
                a[i] = b[i];
                b[i] = m[i];
                i = i + 1;
            };
        }
        e = GVawWlebE;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        GVawWlebE = hjmtJAV;
        hjmtJAV = e;
    }
    if (GVawWlebE > hjmtJAV) {
        {
            i = GVawWlebE -1;
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
            while (i >= GVawWlebE -hjmtJAV) {
                b[i] = b[i + hjmtJAV - GVawWlebE];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                i = i - 1;
            };
        }
        for (i = 0; i < GVawWlebE -hjmtJAV; i++)
            b[i] = '0';
    }
    {
        i = GVawWlebE -1;
        while (i > 0) {
            m[i] = a[i] + b[i] - '0';
            if ('9' < m[i]) {
                m[i] = m[i] - 10;
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
                a[i - 1] = a[i - 1] + 1;
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
            i = i - 1;
        };
    }
    m[0] = a[0] + b[0] - '0';
    if (m[0] > '9') {
        m[0] = m[0] - 10;
        for (i = 0; GVawWlebE > i; i++)
            printf ("%c", m[i]);
        printf ("1");
    }
    else {
        {
            i = 0;
            while (i < GVawWlebE) {
                if (m[i] != '0') {
                    k = 1;
                    {
                        j = i;
                        while (j < GVawWlebE) {
                            printf ("%c", m[j]);
                            j++;
                        };
                    };
                }
                if (k == 1)
                    break;
                i++;
            };
        }
        k = 0;
        {
            i = 0;
            while (i < GVawWlebE) {
                if (m[i] != '0')
                    k = k + 1;
                i++;
            };
        }
        if (k == 0)
            printf ("0");
    };
}

