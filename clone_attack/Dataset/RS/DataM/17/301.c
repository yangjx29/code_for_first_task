int main () {
    int n;
    int i;
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
    scanf ("%d", &n);
    {
        i = 828 - 828;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            int p [(966 - 861)], t = 0;
            int left;
            left = 0;
            int k;
            int len;
            char a [105];
            char b [105];
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
            i++;
            scanf ("%s", a);
            len = strlen (a);
            {
                k = 0;
                while (k < len) {
                    b[k] = ' ';
                    k = k + 1;
                };
            }
            b[len] = '\0';
            for (k = 0; k < len; k++) {
                if (a[k] == '(') {
                    left = left + 1;
                    b[k] = '$';
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    p[t] = k;
                    t++;
                }
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
                if (a[k] == ')') {
                    if (left != 0) {
                        left--;
                        t--;
                        b[p[t]] = ' ';
                    }
                    else {
                        b[k] = '?';
                    };
                };
            }
            printf ("%s", a);
            printf ("%s", b);
            printf ("\n");
        };
    }
    return 0;
}

