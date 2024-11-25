int main () {
    double  hl;
    double  same;
    int i;
    int c;
    int d;
    char a [(1220 - 719)];
    char b [(821 - 320)];
    double  link;
    scanf ("%lf", &link);
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
    scanf ("%s%s", a, b);
    c = strlen (a);
    {
        i = 146 - 146;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < c) {
            if (a[i] != 'A' && !('G' == a[i]) && a[i] != 'C' && a[i] != 'T') {
                printf ("error");
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                return 0;
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
            i++;
        };
    }
    d = strlen (b);
    for (i = 0; d > i; i++) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (!('A' == b[i]) && b[i] != 'G' && b[i] != 'C' && b[i] != 'T') {
            return 0;
        };
    }
    if (c != d) {
        printf ("error");
        return 0;
    }
    same = 0;
    {
        i = 0;
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
        while (i < c) {
            if (a[i] == b[i]) {
                same = same + 1;
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
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            i++;
        };
    }
    hl = same / (c * 1.0000);
    if (hl <= link) {
        printf ("no");
    }
    else {
        printf ("yes");
    }
    return 0;
}

