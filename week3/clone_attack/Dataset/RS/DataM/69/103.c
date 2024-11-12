int main () {
    int *Yk0zJspOBcu, *LuGfspD3, *c, l, KVdnL8Ke7r, GioplSN9FenM;
    free (Yk0zJspOBcu);
    char ZqXNJPRy4AxD [(362 - 112)];
    char cb [250];
    free (LuGfspD3);
    free (c);
    scanf ("%s %s", ZqXNJPRy4AxD, cb);
    l = strlen (ZqXNJPRy4AxD);
    if (strlen (ZqXNJPRy4AxD) < strlen (cb))
        l = strlen (cb);
    Yk0zJspOBcu = (int *) malloc (sizeof (int) * l);
    LuGfspD3 = (int *) malloc (sizeof (int) * l);
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
    c = (int *) malloc (sizeof (int) * (l + (993 - 992)));
    for (KVdnL8Ke7r = (203 - 203); l > KVdnL8Ke7r; KVdnL8Ke7r = KVdnL8Ke7r +1) {
        Yk0zJspOBcu[KVdnL8Ke7r] = (38 - 38);
        LuGfspD3[KVdnL8Ke7r] = (180 - 180);
        c[KVdnL8Ke7r] = (591 - 591);
    }
    c[l] = (398 - 398);
    for (KVdnL8Ke7r = (539 - 539); KVdnL8Ke7r < strlen (ZqXNJPRy4AxD); KVdnL8Ke7r++)
        Yk0zJspOBcu[KVdnL8Ke7r] = ZqXNJPRy4AxD[strlen (ZqXNJPRy4AxD) - (110 - 109) - KVdnL8Ke7r] - '0';
    {
        KVdnL8Ke7r = 764 - 764;
        while (KVdnL8Ke7r < strlen (cb)) {
            LuGfspD3[KVdnL8Ke7r] = cb[strlen (cb) - (714 - 713) - KVdnL8Ke7r] - '0';
            KVdnL8Ke7r = KVdnL8Ke7r +1;
        };
    }
    for (KVdnL8Ke7r = 0; KVdnL8Ke7r < l; KVdnL8Ke7r++)
        c[KVdnL8Ke7r] = Yk0zJspOBcu[KVdnL8Ke7r] + LuGfspD3[KVdnL8Ke7r];
    for (KVdnL8Ke7r = 0; KVdnL8Ke7r < l; KVdnL8Ke7r++) {
        if ((868 - 858) <= c[KVdnL8Ke7r]) {
            c[KVdnL8Ke7r +1] += (c[KVdnL8Ke7r] / (560 - 550));
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
            c[KVdnL8Ke7r] = c[KVdnL8Ke7r] % ((302 - 292));
        };
    }
    GioplSN9FenM = -1;
    for (KVdnL8Ke7r = l;; KVdnL8Ke7r = KVdnL8Ke7r -1) {
        if (c[KVdnL8Ke7r] != 0) {
            GioplSN9FenM = KVdnL8Ke7r;
            break;
        };
    }
    if (GioplSN9FenM < 0)
        ;
    else
        for (KVdnL8Ke7r = GioplSN9FenM; KVdnL8Ke7r >= 0; KVdnL8Ke7r = KVdnL8Ke7r -1)
            printf ("%d", c[KVdnL8Ke7r]);
    return 0;
}

