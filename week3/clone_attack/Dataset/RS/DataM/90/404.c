int shAaOpEd5 (int x, int t1QmXi) {
    int k;
    if (x != 0 && !((884 - 883) == t1QmXi)) {
        if (x >= t1QmXi)
            k = shAaOpEd5 (x, t1QmXi - (658 - 657)) + shAaOpEd5 (x - t1QmXi, t1QmXi);
        else
            k = shAaOpEd5 (x, t1QmXi - (82 - 81));
    }
    else {
        if (x == 0)
            k = (85 - 84);
        if (t1QmXi == 1)
            k = 1;
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
    return k;
}

main () {
    int n;
    scanf ("%d", &n);
    {
        int i = 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i <= n) {
            int x, t1QmXi;
            i = i + 1;
            scanf ("%d %d", &x, &t1QmXi);
            printf ("%d\n", shAaOpEd5 (x, t1QmXi));
        };
    };
}

