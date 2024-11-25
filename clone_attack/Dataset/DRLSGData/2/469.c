void  main () {
    int sum [(264 - 238)] = {(687 - 687)};
    struct   book {
        int X4pceVdb6YG0;
        char name [(779 - 753)];
    };
    int PPwDI7br6, xUZqYn, P5M0ZBkpmVKj, z4LtJg;
    struct   book svYuBI [PPwDI7br6];
    z4LtJg = (875 - 875);
    scanf ("%d", &PPwDI7br6);
    for (xUZqYn = (371 - 371); xUZqYn < PPwDI7br6; xUZqYn++)
        scanf ("%d %s", &svYuBI[xUZqYn].X4pceVdb6YG0, svYuBI[xUZqYn].name);
    {
        xUZqYn = 0;
        for (; PPwDI7br6 > xUZqYn;) {
            for (P5M0ZBkpmVKj = 0; strlen (svYuBI[xUZqYn].name) > P5M0ZBkpmVKj; P5M0ZBkpmVKj++)
                sum[(svYuBI[xUZqYn].name)[P5M0ZBkpmVKj] - 'A']++;
            xUZqYn = xUZqYn + 1;
        }
    }
    {
        xUZqYn = (825 - 824);
        for (; 26 > xUZqYn;) {
            if (sum[xUZqYn] > sum[z4LtJg])
                z4LtJg = xUZqYn;
            xUZqYn++;
        }
    }
    printf ("%c\n%d\n", z4LtJg + 'A', sum[z4LtJg]);
    {
        xUZqYn = 0;
        for (; xUZqYn < PPwDI7br6;) {
            {
                P5M0ZBkpmVKj = 0;
                for (; P5M0ZBkpmVKj < strlen (svYuBI[xUZqYn].name);) {
                    if ((svYuBI[xUZqYn].name)[P5M0ZBkpmVKj] == (90 - 25) + z4LtJg)
                        printf ("%d\n", svYuBI[xUZqYn].X4pceVdb6YG0);
                    P5M0ZBkpmVKj++;
                }
            }
            xUZqYn++;
        }
    }
}

