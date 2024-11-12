void  main () {
    int n3Flsp7hvU1;
    int Y4pRoL;
    char *xhkis0yRjYMx;
    char *S3KPjGwln, *qEKBq0ba5U1N;
    char bbCDdPuKk [200];
    gets (bbCDdPuKk);
    char vHdpVjC1lu [200];
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
    S3KPjGwln = bbCDdPuKk;
    n3Flsp7hvU1 = strlen (bbCDdPuKk);
    xhkis0yRjYMx = vHdpVjC1lu;
    {
        Y4pRoL = 0;
        while (n3Flsp7hvU1 - 1 > Y4pRoL) {
            Y4pRoL++;
            S3KPjGwln++;
            qEKBq0ba5U1N = S3KPjGwln +1;
            *xhkis0yRjYMx = *S3KPjGwln+*qEKBq0ba5U1N;
            xhkis0yRjYMx++;
        };
    }
    *xhkis0yRjYMx = *S3KPjGwln+*bbCDdPuKk;
    xhkis0yRjYMx = vHdpVjC1lu;
    {
        Y4pRoL = 0;
        while (n3Flsp7hvU1 > Y4pRoL) {
            Y4pRoL++;
            printf ("%c", *xhkis0yRjYMx);
            xhkis0yRjYMx++;
        };
    };
}

