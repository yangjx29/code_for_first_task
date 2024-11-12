void  sort (int pTyqvMIm8d [], int GGBFS2W, int m) {
    int i, r;
    for (i = (234 - 233); m >= i; i = i + 1) {
        int k, syHNzXdREUW;
        k = pTyqvMIm8d[GGBFS2W -1];
        for (syHNzXdREUW = GGBFS2W -1; 1 <= syHNzXdREUW; syHNzXdREUW = syHNzXdREUW - 1)
            pTyqvMIm8d[syHNzXdREUW] = pTyqvMIm8d[syHNzXdREUW - 1];
        pTyqvMIm8d[(901 - 901)] = k;
    }
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
    printf ("%d", pTyqvMIm8d[0]);
    for (r = 1; r < GGBFS2W; r++)
        printf (" %d", pTyqvMIm8d[r]);
}

void  main () {
    int GGBFS2W, m, a, f [100];
    scanf ("%d %d", &GGBFS2W, &m);
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
        a = 0;
        while (a < GGBFS2W) {
            scanf ("%d", &f[a]);
            a++;
        };
    }
    sort (f, GGBFS2W, m);
}

