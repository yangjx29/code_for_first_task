int main () {
    char a [100];
    char b [100];
    char t;
    int m;
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
    int j;
    scanf ("%s%s", a, b);
    m = strlen (a);
    n = strlen (b);
    if (m != n)
        printf ("NO");
    else {
        for (i = 0; m > i; i = i + 1) {
            for (j = i; j < m; j++) {
                if (a[i] == b[j]) {
                    t = b[i];
                    b[i] = b[j];
                    b[j] = t;
                    break;
                };
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
            if (a[i] != b[i] && j == m) {
                break;
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
                printf ("NO");
            };
        }
        for (i = 0; i < m; i++) {
            if (a[i] != b[i]) {
                break;
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
                printf ("NO");
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
        if (i == m)
            ;
    }
    return 0;
}

