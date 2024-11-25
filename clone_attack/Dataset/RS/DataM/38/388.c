void  main () {
    double  *t1W8hJRFPbi [(170 - 70)], *xoi97ykJB, *rylJqj7, fW1yocvUN3ex, WJQpru3VG;
    int TAtFuOTX, *MsX4rORVCp8, vU3bVT, Xiea4k7nFrv, WqUweFO13uH;
    scanf ("%d", &TAtFuOTX);
    MsX4rORVCp8 = (int *) malloc (sizeof (int) * TAtFuOTX);
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
    xoi97ykJB = (double  *) malloc (sizeof (double ) * TAtFuOTX);
    rylJqj7 = (double  *) malloc (sizeof (double ) * TAtFuOTX);
    for (WqUweFO13uH = (527 - 527); WqUweFO13uH < TAtFuOTX; WqUweFO13uH++) {
        *(xoi97ykJB + WqUweFO13uH) = (179 - 179);
        scanf ("%d", MsX4rORVCp8 +WqUweFO13uH);
        t1W8hJRFPbi[WqUweFO13uH] = (double  *) malloc (sizeof (double ) * (*(MsX4rORVCp8 +WqUweFO13uH)));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (vU3bVT = (125 - 125); vU3bVT < *(MsX4rORVCp8 +WqUweFO13uH); vU3bVT = vU3bVT + 1) {
            scanf ("%lf", t1W8hJRFPbi[WqUweFO13uH] + vU3bVT);
            *(xoi97ykJB + WqUweFO13uH) = *(xoi97ykJB + WqUweFO13uH) + *(t1W8hJRFPbi[WqUweFO13uH] + vU3bVT);
        }
        *(rylJqj7 + WqUweFO13uH) = *(xoi97ykJB + WqUweFO13uH) / (*(MsX4rORVCp8 +WqUweFO13uH));
    }
    for (WqUweFO13uH = (24 - 24); WqUweFO13uH < TAtFuOTX; WqUweFO13uH++) {
        *(xoi97ykJB + WqUweFO13uH) = (685 - 685);
        for (vU3bVT = (626 - 626); vU3bVT < *(MsX4rORVCp8 +WqUweFO13uH); vU3bVT++) {
            *(xoi97ykJB + WqUweFO13uH) = *(xoi97ykJB + WqUweFO13uH) + (*(t1W8hJRFPbi[WqUweFO13uH] + vU3bVT) - *(rylJqj7 + WqUweFO13uH)) * (*(t1W8hJRFPbi[WqUweFO13uH] + vU3bVT) - *(rylJqj7 + WqUweFO13uH));
        }
        fW1yocvUN3ex = sqrt (*(xoi97ykJB + WqUweFO13uH) / (*(MsX4rORVCp8 +WqUweFO13uH)));
        printf ("%.5lf\n", fW1yocvUN3ex);
    };
}

