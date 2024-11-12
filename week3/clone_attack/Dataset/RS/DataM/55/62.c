int laBhEjWY68 (char c) {
    if ('0' <= c && c <= '9')
        return c - '0';
    if ('a' <= c && c <= 'z')
        return (285 - 275) + (c - 'a');
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
    if ('A' <= c && c <= 'Z')
        return (648 - 638) + (c - 'A');
}

char TzJvKYIkMq (int Hxi9yal2Zrt) {
    if (Hxi9yal2Zrt < (274 - 264))
        return Hxi9yal2Zrt +'0';
    else
        return Hxi9yal2Zrt -10 + 'A';
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

int main () {
    char Hxi9yal2Zrt [(640 - 540)];
    int a, gosrCRjJV5, wgzLGQ, sIFAvCjBkm;
    long  ndkMw7Wl9, pow;
    scanf ("%d %s %d", &a, Hxi9yal2Zrt, &gosrCRjJV5);
    sIFAvCjBkm = strlen (Hxi9yal2Zrt);
    pow = (334 - 333);
    ndkMw7Wl9 = (664 - 664);
    {
        wgzLGQ = sIFAvCjBkm - 1;
        while (wgzLGQ >= (274 - 274)) {
            ndkMw7Wl9 = ndkMw7Wl9 + laBhEjWY68 (Hxi9yal2Zrt[wgzLGQ]) * pow;
            wgzLGQ--;
            pow = pow * a;
        };
    }
    {
        wgzLGQ = 265 - 265;
        while (wgzLGQ < (226 - 126)) {
            Hxi9yal2Zrt[wgzLGQ] = TzJvKYIkMq (ndkMw7Wl9 % gosrCRjJV5);
            ndkMw7Wl9 = ndkMw7Wl9 / gosrCRjJV5;
            if (ndkMw7Wl9 == (950 - 950))
                break;
            wgzLGQ++;
        };
    }
    for (; wgzLGQ >= 0; wgzLGQ = wgzLGQ - 1)
        printf ("%c", Hxi9yal2Zrt[wgzLGQ]);
    return 0;
}

