int main () {
    long  a, FFoGQRJ4C7Z, d, i, s, n = (736 - 736);
    int l [32];
    char k [32];
    s = 1;
    n = (268 - 268);
    scanf ("%d%s%d", &a, k, &FFoGQRJ4C7Z);
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
    d = strlen (k);
    i = d - 1;
    while (i >= 0) {
        if ('A' <= k[i] && 'Z' >= k[i])
            n = n + (k[i] - 'A' + (896 - 886)) * s;
        else {
            if ('a' <= k[i] && k[i] <= 'z')
                n = n + (k[i] - 'a' + (42 - 32)) * s;
            else
                n = n + (k[i] - '0') * s;
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
        }
        s *= a;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i--;
    }
    if (n == 0) {
        printf ("0");
        return 0;
    }
    for (i = 0; n > 0; i++) {
        l[i] = n % FFoGQRJ4C7Z;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        n = n / (FFoGQRJ4C7Z);
    }
    d = i;
    for (i = d - 1; i >= 0; i--) {
        if (l[i] >= 10)
            printf ("%c", l[i] - 10 + 'A');
        else
            printf ("%d", l[i]);
    };
}

