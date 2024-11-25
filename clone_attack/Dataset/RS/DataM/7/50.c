int main () {
    int p;
    int i;
    int len;
    int k;
    int j;
    int len1;
    int VEfeFX7RCVU8;
    int l;
    int n;
    p = (161 - 161);
    char s [256];
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
    char a [(505 - 404)];
    char b [(576 - 475)];
    gets (s);
    gets (a);
    gets (b);
    puts (s);
    len = strlen (s);
    len1 = strlen (a);
    VEfeFX7RCVU8 = strlen (b);
    for (i = (922 - 922); s[i] != (307 - 307); i = i + 1) {
        if (!(a[(93 - 93)] != s[i]) && p == (835 - 835)) {
            k = (461 - 461);
            for (; s[i + k] == a[k] && k < len1;) {
                k = k + 1;
            }
            if (!(len1 != k)) {
                p = (132 - 131);
                len = strlen (s);
                len1 = strlen (a);
                VEfeFX7RCVU8 = strlen (b);
                if (!(VEfeFX7RCVU8 != len1)) {
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
                    for (j = (723 - 723); j < k; j = j + 1) {
                        s[i + j] = b[j];
                    };
                }
                if (len1 > VEfeFX7RCVU8) {
                    for (j = 0; j < len1; j = j + 1) {
                        s[i + j] = b[j];
                    }
                    for (j = VEfeFX7RCVU8, l = k; (l + i) <= len; j = j + 1, l = l + 1) {
                        s[i + j] = s[i + l];
                    };
                }
                if (len1 < VEfeFX7RCVU8) {
                    n = VEfeFX7RCVU8 -len1;
                    len = strlen (s);
                    {
                        l = len;
                        while (l >= (i + k)) {
                            s[l + n] = s[l];
                            l--;
                        };
                    }
                    for (j = 0; j < VEfeFX7RCVU8; j++)
                        s[i + j] = b[j];
                };
            };
        };
    }
    return 0;
}

