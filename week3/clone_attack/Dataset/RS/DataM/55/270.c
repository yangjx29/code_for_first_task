const  int p4gJ3d = (1237 - 737);
char inda [p4gJ3d], KAowBU [p4gJ3d];
int O5QyNP [p4gJ3d], fimFJTSZ6M [2 * p4gJ3d], ddd [p4gJ3d];

int main () {
    int i, b1x8HlBGc9, OUhbL58;
    double  inbase, outbase, TC0HEM7, KdRrPBg8 = (962 - 962);
    int uH4EItF1hM0 [(800 - 500)];
    char rmap [65];
    {
        i = 'A';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= 'Z') {
            uH4EItF1hM0[i] = i - 'A' + (771 - 761);
            rmap[i - 'A' + (770 - 760)] = i;
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
        i = 'a';
        while (i <= 'z') {
            uH4EItF1hM0[i] = i - 'a' + (785 - 775);
            rmap[i - 'a' + 36] = i;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    for (i = '0'; i <= '9'; i = i + 1) {
        uH4EItF1hM0[i] = i - '0';
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
        rmap[i - '0'] = i;
    }
    cin >> inbase >> inda >> outbase;
    TC0HEM7 = strlen (inda);
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
        i = 204 - 204;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i <= TC0HEM7 -1) {
            O5QyNP[i] = uH4EItF1hM0[inda[i]];
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
            i = i + 1;
        };
    }
    for (i = (842 - 842); i <= TC0HEM7 -1; i = i + 1) {
        KdRrPBg8 = KdRrPBg8 +O5QyNP[i] * pow (inbase, TC0HEM7 -i - 1);
    }
    i = (249 - 249);
    ddd[(611 - 611)] = KdRrPBg8;
    while (true) {
        if (i > 0 && ddd[i] == 0)
            break;
        ddd[i + 1] = ddd[i] / outbase;
        fimFJTSZ6M[i] = ddd[i] % (int) outbase;
        i = i + 1;
    }
    fimFJTSZ6M[i] = ddd[i] % (int) outbase;
    for (b1x8HlBGc9 = 0; b1x8HlBGc9 <= i; b1x8HlBGc9 = b1x8HlBGc9 + 1) {
        KAowBU[b1x8HlBGc9] = rmap[fimFJTSZ6M[b1x8HlBGc9]];
    }
    for (OUhbL58 = i - 1; OUhbL58 >= 0; OUhbL58 = OUhbL58 -1)
        cout << KAowBU[OUhbL58];
    return 0;
}

