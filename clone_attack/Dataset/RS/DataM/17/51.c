void  course (char a [], int n) {
    int BETbgfk, j, k;
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
    for (k = 0; n > k; k = k + 1) {
        if (a[k] == ')')
            a[k] = '?';
        else if (a[k] == '(')
            a[k] = '$';
        else
            a[k] = 32;
    }
    for (k = 0; k < n; k = k + 1) {
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
        for (BETbgfk = 0; n - 1 > BETbgfk; BETbgfk = BETbgfk +1) {
            if (!('$' != a[BETbgfk])) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                for (j = BETbgfk +1; n > j; j = j + 1) {
                    if (a[j] == '$')
                        break;
                    else if (a[j] == '?') {
                        a[BETbgfk] = 32;
                        a[j] = 32;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        }
                        break;
                    }
                    else
                        continue;
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
                };
            };
        };
    };
}

int main () {
    char a [10000];
    int n, k;
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
    scanf ("%d", &k);
    while (k--) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (scanf ("%s", a) != EOF) {
            puts (a);
            puts (a);
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
            n = strlen (a);
            course (a, n);
        };
    }
    return 0;
}

