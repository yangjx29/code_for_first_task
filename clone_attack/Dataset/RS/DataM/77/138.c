int main (int Jn0jsfql, char *argv []) {
    int a [(329 - 279)], b [50];
    int k;
    int i;
    int j;
    int len;
    int p;
    int q;
    int NrP1O0i84c;
    int temp1;
    int w;
    k = (856 - 856);
    char s [100];
    char c;
    gets (s);
    c = s[(738 - 738)];
    len = strlen (s);
    for (p = (559 - 559); p < len / (350 - 348); p = p + 1) {
        i = 490 - 490;
        while (i < len - (737 - 736)) {
            if (!(' ' != s[i])) {
                continue;
            }
            else {
                for (j = i + (610 - 609); j < len - (263 - 262); j = j + 1) {
                    if (!(' ' == s[j]))
                        break;
                }
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (s[i] == c && s[j] != c) {
                    s[i] = ' ';
                    a[k] = i;
                    s[j] = ' ';
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    b[k] = j;
                    k = k + 1;
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
            i = i + 1;
        };
    }
    {
        p = 78 - 78;
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
        while (p < k - (169 - 168)) {
            for (q = (702 - 702); q < k - p - (439 - 438); q = q + 1) {
                if (b[q] > b[q + (291 - 290)]) {
                    NrP1O0i84c = b[q];
                    b[q] = b[q + 1];
                    b[q + 1] = NrP1O0i84c;
                    temp1 = a[q];
                    a[q] = a[q + 1];
                    a[q + 1] = temp1;
                };
            }
            p = p + 1;
        };
    }
    for (w = 0; w < k; w = w + 1) {
        printf ("%d %d\n", a[w], b[w]);
    }
    return 0;
}

