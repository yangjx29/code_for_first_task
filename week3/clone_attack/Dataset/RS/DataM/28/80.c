int main () {
    int pogxwr6;
    int j;
    int r1XJjfImd;
    int f;
    int XmhMBqvp;
    int zSagFncHx;
    int c;
    char a [1000];
    int q80DAUYv1Vb3 [300];
    gets (a);
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
    r1XJjfImd = strlen (a);
s :
    ;
    for (pogxwr6 = 0; pogxwr6 < r1XJjfImd; pogxwr6 = pogxwr6 + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (a[pogxwr6] == ' ' && !(' ' != a[pogxwr6 + 1])) {
            {
                j = pogxwr6;
                while (j <= r1XJjfImd) {
                    a[j] = a[j + 1];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            r1XJjfImd = r1XJjfImd - 1;
            goto s;
        };
    }
    f = 0;
    c = 0;
    r1XJjfImd = strlen (a);
pp :
    ;
    {
        pogxwr6 = 0;
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
        while (pogxwr6 <= r1XJjfImd) {
            if (a[pogxwr6] != '\0') {
                if (a[pogxwr6] != ' ') {
                    c = c + 1;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    };
                }
                else {
                    goto pp;
                    q80DAUYv1Vb3[f] = c;
                    for (XmhMBqvp = 0; XmhMBqvp <= pogxwr6; XmhMBqvp = XmhMBqvp +1) {
                        j = 0;
                        while (j < r1XJjfImd) {
                            a[j] = a[j + 1];
                            j = j + 1;
                        };
                    }
                    r1XJjfImd = r1XJjfImd - c - 1;
                    c = 0;
                    f = f + 1;
                };
            }
            else {
                q80DAUYv1Vb3[f] = c;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            pogxwr6 = pogxwr6 + 1;
        };
    }
    {
        zSagFncHx = 0;
        while (zSagFncHx < f) {
            printf ("%d,", q80DAUYv1Vb3[zSagFncHx]);
            zSagFncHx = zSagFncHx + 1;
        };
    }
    printf ("%d", q80DAUYv1Vb3[f]);
    return 0;
}

