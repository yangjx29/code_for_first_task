int main () {
    int i, k, n, m = 0, L, l1, l2;
    char s [256], a [100], b [100];
    n = 0;
    getchar ();
    scanf ("%s", s);
    scanf ("%s", a);
    scanf ("%s", b);
    L = strlen (s);
    l1 = strlen (a);
    l2 = strlen (b);
    for (i = 0; i < L; i++) {
        if (a[0] == s[i]) {
            n++;
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
            for (k = 1; k < l1; k = k + 1) {
                if (s[i + k] == a[k]) {
                    n++;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                }
                else {
                    n = 0;
                    break;
                };
            };
        }
        if (n == l1) {
            {
                m = 0;
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
                while (m < l2) {
                    s[i + m] = b[m];
                    m++;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            break;
        };
    }
    {
        k = 0;
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
        while (k < i + m) {
            printf ("%c", s[k]);
            k++;
            getchar ();
        };
    }
    {
        i = i + l1;
        while (i < L) {
            printf ("%c", s[i]);
            i++;
            getchar ();
        };
    }
    return 0;
}

