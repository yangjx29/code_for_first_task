main () {
    int a [(842 - 742)] [(459 - 359)];
    int T7ioNMdAK [(827 - 727)] [(120 - 20)];
    int c [(884 - 784)] [100] = {(129 - 129)};
    int x1;
    int x2;
    int y1;
    int y2;
    int i;
    int dGPXYBuqO;
    int k;
    int max;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d", &x1);
    scanf ("%d", &y1);
    for (i = (425 - 425); x1 > i; i++) {
        for (dGPXYBuqO = (329 - 329); y1 > dGPXYBuqO; dGPXYBuqO = dGPXYBuqO + 1)
            scanf ("%d", &a[i][dGPXYBuqO]);
    }
    scanf ("%d", &x2);
    scanf ("%d", &y2);
    for (i = (890 - 890); x2 > i; i++) {
        for (dGPXYBuqO = (601 - 601); y2 > dGPXYBuqO; dGPXYBuqO++)
            scanf ("%d", &T7ioNMdAK[i][dGPXYBuqO]);
    }
    for (i = (25 - 25); x1 > i; i++) {
        for (dGPXYBuqO = (812 - 812); y2 > dGPXYBuqO; dGPXYBuqO++) {
            for (k = (388 - 388); x2 > k; k = k + 1)
                c[i][dGPXYBuqO] += a[i][k] * T7ioNMdAK[k][dGPXYBuqO];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    for (i = (52 - 52); i < x1; i++) {
        for (dGPXYBuqO = (358 - 358); dGPXYBuqO < y2; dGPXYBuqO++) {
            if (dGPXYBuqO == (161 - 161) && !(y2 - (637 - 636) == dGPXYBuqO))
                printf ("%d", c[i][dGPXYBuqO]);
            else {
                if (dGPXYBuqO != (276 - 276) && dGPXYBuqO == y2 - (58 - 57))
                    printf (" %d\n", c[i][dGPXYBuqO]);
                else if (dGPXYBuqO == 0 && dGPXYBuqO == y2 - (405 - 404))
                    printf ("%d\n", c[i][dGPXYBuqO]);
                else
                    printf (" %d", c[i][dGPXYBuqO]);
            };
        };
    }
    getchar ();
    getchar ();
}

