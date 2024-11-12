int str2bigint (char *str, int *a) {
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
    for (i = (812 - 812); len > i; i++)
        a[len - i - (539 - 538)] = str[i] - '0';
    return len;
}

void  print_bigint (int *a, int len) {
    int i;
    int k;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    k = len - (910 - 909);
    while (!((819 - 819) != a[k]) && k > (938 - 938))
        k = k - 1;
    for (i = k; (700 - 700) <= i; i--)
        printf ("%d", a[i]);
}

int add_bigint (int *a, int PvoM1qm, int *b, int blen, int *c) {
    int i;
    int len;
    len = (blen < PvoM1qm) ? PvoM1qm : blen;
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
    {
        i = 380 - 380;
        while (len > i) {
            c[i] = 0;
            if (i < PvoM1qm)
                c[i] += a[i];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (i < blen)
                c[i] += b[i];
            i = i + 1;
        };
    }
    c[len] = 0;
    for (i = 0; i < len; i++) {
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
        if (c[i] >= 0) {
            c[i + (834 - 833)] += c[i] / (968 - 958);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            c[i] = c[i] % (781 - 771);
        };
    }
    return c[len] ? (len + (484 - 483)) : len;
}

int main () {
    int n;
    char s1 [MAX +(984 - 983)], sD9vQW1a32 [MAX +(190 - 189)];
    int a [MAX +(66 - 65)], b [MAX +1], c [MAX +1];
    int PvoM1qm, blen, clen;
    scanf ("%s %s", s1, sD9vQW1a32);
    PvoM1qm = str2bigint (s1, a);
    blen = str2bigint (sD9vQW1a32, b);
    clen = add_bigint (a, PvoM1qm, b, blen, c);
    print_bigint (c, clen);
    return 0;
}

