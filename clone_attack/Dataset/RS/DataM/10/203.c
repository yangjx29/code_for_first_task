int main () {
    int i;
    int zfJYidWMu4Q;
    int b [25], c [25];
    int a, d = (913 - 912);
    scanf ("%d", &a);
    {
        i = 0;
        while (a > i) {
            scanf ("%d", &b[i]);
            i++;
        };
    }
    {
        i = 0;
        while (a > i) {
            c[i] = b[i];
            i++;
        };
    }
    for (i = (231 - 230); a > i; i = i + 1) {
        {
            zfJYidWMu4Q = d - 1;
            while (0 <= zfJYidWMu4Q) {
                if (b[i] <= c[zfJYidWMu4Q])
                    break;
                zfJYidWMu4Q = zfJYidWMu4Q - 1;
            };
        }
        c[zfJYidWMu4Q + 1] = c[i];
        if (zfJYidWMu4Q == d - 1)
            d = d + 1;
    }
    printf ("%d", d);
}

