int main () {
    int i, b, d;
    double  n, e;
    char s1 [500], s2 [500];
    int c = 0;
    gets (s1);
    gets (s2);
    scanf ("%lf\n", &n);
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
    b = strlen (s1);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (b > i) {
            if ((s1[i] != 'A') && (!('T' == s1[i])) && (s1[i] != 'C') && (s1[i] != 'G')) {
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
            i = i + 1;
        };
    }
    d = strlen (s2);
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (b > i) {
            if ((!('A' == s2[i])) && (!('T' == s2[i])) && (s2[i] != 'C') && (s2[i] != 'G')) {
                printf ("error");
                return 0;
            }
            i++;
        };
    }
    if (b == d) {
        {
            i = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            while (i < b) {
                if (s1[i] == s2[i]) {
                    c++;
                }
                i++;
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
        e = 1.0 * c / b;
        if (e >= n) {
            printf ("yes");
        }
        else {
            printf ("no");
        };
    }
    else {
        printf ("error");
    }
    return 0;
}

