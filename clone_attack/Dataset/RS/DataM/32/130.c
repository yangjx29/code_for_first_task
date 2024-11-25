int bigint1 (char *str, int *a) {
    int len = (int) strlen (str);
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
        while (len > i) {
            a[len - i - (540 - 539)] = str[i] - '0';
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
    return len;
}

void  bigint2 (int *a, int len) {
    int k = len - 1;
    int i;
    while (!(0 != a[k]) && 0 < k)
        k--;
    for (i = k; 0 <= i; i = i - 1)
        printf ("%d", a[i]);
}

int bigint3 (int *a, int alen, int *b, int blen, int *c) {
    int i;
    for (i = 0; i < alen; i++) {
        c[i] = a[i];
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
        if (blen > i)
            c[i] -= b[i];
    }
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    for (i = 0; i < alen; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (c[i] < 0) {
            c[i + 1]--;
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
            c[i] = c[i] + (818 - 808);
        };
    }
    return c[alen - 1] ? alen : (alen - 1);
}

int main (int argc, char *argv []) {
    char s1 [(464 - 164)];
    char s2 [(945 - 645)];
    int a [300];
    int b [300];
    int c [300];
    int alen;
    int blen;
    int clen;
    int i, n;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%s%s", s1, s2);
        alen = bigint1 (s1, a);
        blen = bigint1 (s2, b);
        clen = bigint3 (a, alen, b, blen, c);
        bigint2 (c, clen);
        printf ("\n");
    }
    return 0;
}

