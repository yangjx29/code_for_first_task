int main () {
    int j;
    int k;
    j = 0;
    k = 0;
    char d [101] = {0};
    char c [101] = {0};
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
    scanf ("\n");
    int t;
    int n;
    int i;
    scanf ("%d", &n);
    for (i = 0; n > i; i++) {
        {
            j = 0;
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
            while (j < 101) {
                c[j] = 0;
                d[j] = 0;
                j++;
            };
        }
        scanf ("%s", c);
        t = strlen (c);
        {
            j = 0;
            while (t > j) {
                d[j] = c[j];
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
                j++;
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
        for (j = 0; j < t; j++) {
            if (!('(' == c[j]) && !(')' == c[j]))
                c[j] = ' ';
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (!(')' != c[j])) {
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
                for (k = j - 1; 0 <= k; k--) {
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    if (c[k] == '(') {
                        c[k] = ' ';
                        c[j] = ' ';
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
                        break;
                    };
                };
            };
        }
        printf ("%s", d);
        for (j = 0; j < t; j++) {
            if (c[j] == '(') {
                c[j] = '$';
            }
            else {
                if (c[j] == ')') {
                    c[j] = '?';
                };
            };
        }
        printf ("%s", c);
    }
    return 0;
}

