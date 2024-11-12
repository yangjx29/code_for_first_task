void  main () {
    int P8Qf3DL, FtmS0KuI, ls1HvwXJ;
    struct   point {
        float ganQFdo;
        float L2cQhBI;
    }
    e2qCQoe [(963 - 913)];
    double  wWj9bZB, ZugbHwNY = (247 - 247);
    scanf ("%d", &P8Qf3DL);
    for (FtmS0KuI = (814 - 814); FtmS0KuI < P8Qf3DL; FtmS0KuI = FtmS0KuI +1)
        scanf ("%f %f", &e2qCQoe[FtmS0KuI].ganQFdo, &e2qCQoe[FtmS0KuI].L2cQhBI);
    for (FtmS0KuI = (441 - 441); FtmS0KuI < P8Qf3DL; FtmS0KuI = FtmS0KuI +1) {
        for (ls1HvwXJ = (50 - 49); P8Qf3DL -FtmS0KuI > ls1HvwXJ; ls1HvwXJ = ls1HvwXJ + 1) {
            wWj9bZB = ((double ) e2qCQoe[FtmS0KuI].ganQFdo - (double ) e2qCQoe[FtmS0KuI +ls1HvwXJ].ganQFdo) * ((double ) e2qCQoe[FtmS0KuI].ganQFdo - (double ) e2qCQoe[FtmS0KuI +ls1HvwXJ].ganQFdo) + ((double ) e2qCQoe[FtmS0KuI].L2cQhBI - (double ) e2qCQoe[FtmS0KuI +ls1HvwXJ].L2cQhBI) * ((double ) e2qCQoe[FtmS0KuI].L2cQhBI - (double ) e2qCQoe[FtmS0KuI +ls1HvwXJ].L2cQhBI);
            if (wWj9bZB > ZugbHwNY)
                ZugbHwNY = wWj9bZB;
        };
    }
    printf ("%.4f\n", sqrt (ZugbHwNY));
}

