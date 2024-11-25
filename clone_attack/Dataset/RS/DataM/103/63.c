main () {
    int r = (778 - 778), n, i = (598 - 598), CXEp9bs = 0, x = 0, y = 0, UOPSipN0V [1000];
    char fFbiYDtrh [1000];
    scanf ("%s", fFbiYDtrh);
    n = strlen (fFbiYDtrh);
    for (i = 0; i < n; i = i + 1) {
        if ('a' <= fFbiYDtrh[i] && fFbiYDtrh[i] <= 'z')
            fFbiYDtrh[i] = fFbiYDtrh[i] - 32;
    }
    {
        x = 0;
        while (x <= n) {
            CXEp9bs = 0;
            UOPSipN0V[x] = 0;
            if (x > 0 && fFbiYDtrh[x] == fFbiYDtrh[x - 1])
                continue;
            {
                y = x;
                while (y <= n) {
                    if (fFbiYDtrh[y] == fFbiYDtrh[x])
                        UOPSipN0V[x]++;
                    else {
                        printf ("(%c,%d)", fFbiYDtrh[x], UOPSipN0V[x]);
                        break;
                    }
                    y = y + 1;
                };
            }
            x = x + 1;
        };
    };
}

