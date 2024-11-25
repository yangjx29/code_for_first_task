int f (char c) {
    int w;
    if ('0' <= c && c <= '9') {
        w = c - '0';
        return w;
    }
    if (c >= 'a' && 'z' >= c) {
        w = c - 'a' + 10;
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
        return w;
    }
    if (c >= 'A' && 'Z' >= c) {
        w = c - 'A' + 10;
        return w;
    };
}

char g (int a) {
    char c;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    if (0 <= a && 9 > a) {
        c = a + '0';
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
        return c;
    }
    if (a >= 10) {
        c = a - 10 + 'A';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        return c;
    };
}

int main () {
    char n [10];
    int a, b, i, j, l, x;
    long  sum = 0, y;
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
    scanf ("%d %s %d", &a, n, &b);
    if (a == b)
        printf ("%s\n", n);
    else {
        l = strlen (n);
        for (i = 0; i < l; i = i + 1) {
            x = f (n[i]);
            y = (long ) pow (a, l - i - 1);
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
            sum = sum + x * y;
        }
        if (sum == 0)
            ;
        else {
            long  z;
            char m [50];
            l = (int) (log (sum) / log (b));
            for (i = 0; i <= l; i++) {
                if (i == l) {
                    z = sum;
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
                    m[i] = g (z);
                }
                else {
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    for (j = 1; j <= b; j = j + 1) {
                        z = j * pow (b, l - i);
                        if (z > sum) {
                            z = (j - 1) * pow (b, l - i);
                            m[i] = g (j - 1);
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    int m = 0;
                                    int n = 0;
                                    m = m * n + n - m + n * 2;
                                    return 0;
                                }
                            }
                            sum = sum - z;
                            break;
                        };
                    };
                };
            }
            for (i = 0; i <= l; i++)
                printf ("%c", m[i]);
            printf ("\n");
        };
    }
    return 0;
}

