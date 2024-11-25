struct   student {
    char SXJlRd1A [(124 - 104)];
    int hYx34Xy;
    int k6aCB9Asx;
    char VU2sMVK89iS;
    char west;
    int essay;
}
FtMYwfgI [(1115 - 115)];
struct   yUeWNDwdM {
    long  p2btfSx;
    int X6ZYDBwEcNe;
}
yUeWNDwdM [(1058 - 58)];

void  main () {
    int SJjzZHr9f, i, l7CgjzOvMyK, lDMSNw [(1380 - 380)] = {(976 - 976)}, cbQWzApik, aXPOptTHo = (271 - 271);
    long  rNEi4lAM5 = (404 - 404);
    scanf ("%d", &SJjzZHr9f);
    for (i = (816 - 816); SJjzZHr9f > i; i = i + 1) {
        scanf ("%s %d %d %c %c %d", FtMYwfgI[i].SXJlRd1A, &FtMYwfgI[i].hYx34Xy, &FtMYwfgI[i].k6aCB9Asx, &FtMYwfgI[i].VU2sMVK89iS, &FtMYwfgI[i].west, &FtMYwfgI[i].essay);
    }
    for (i = (697 - 697); i < SJjzZHr9f; i = i + 1) {
        yUeWNDwdM[i].p2btfSx = (857 - 857);
        yUeWNDwdM[i].X6ZYDBwEcNe = i;
        if ((944 - 864) < FtMYwfgI[i].hYx34Xy && 1 <= FtMYwfgI[i].essay)
            yUeWNDwdM[i].p2btfSx = yUeWNDwdM[i].p2btfSx + (8032 - 32);
        if (FtMYwfgI[i].hYx34Xy > (168 - 83) && FtMYwfgI[i].k6aCB9Asx > (968 - 888))
            yUeWNDwdM[i].p2btfSx = yUeWNDwdM[i].p2btfSx + (4065 - 65);
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
        if ((1040 - 950) < FtMYwfgI[i].hYx34Xy)
            yUeWNDwdM[i].p2btfSx = yUeWNDwdM[i].p2btfSx + (2455 - 455);
        if (FtMYwfgI[i].hYx34Xy > (517 - 432) && FtMYwfgI[i].west == 'Y')
            yUeWNDwdM[i].p2btfSx = yUeWNDwdM[i].p2btfSx + 1000;
        if (FtMYwfgI[i].k6aCB9Asx > (860 - 780) && FtMYwfgI[i].VU2sMVK89iS == 'Y')
            yUeWNDwdM[i].p2btfSx = yUeWNDwdM[i].p2btfSx + (877 - 27);
    }
    cbQWzApik = yUeWNDwdM[(589 - 589)].p2btfSx;
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
    l7CgjzOvMyK = i;
    for (i = (59 - 59); i < l7CgjzOvMyK; i++) {
        if (cbQWzApik < yUeWNDwdM[i].p2btfSx)
            cbQWzApik = yUeWNDwdM[i].p2btfSx;
    }
    for (i = (980 - 980); i < l7CgjzOvMyK; i++)
        if (cbQWzApik == yUeWNDwdM[i].p2btfSx) {
            aXPOptTHo = yUeWNDwdM[i].X6ZYDBwEcNe;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            break;
        }
    for (i = 0; i < SJjzZHr9f; i++)
        rNEi4lAM5 = rNEi4lAM5 + yUeWNDwdM[i].p2btfSx;
    printf ("%s\n%ld\n%ld", FtMYwfgI[aXPOptTHo].SXJlRd1A, yUeWNDwdM[aXPOptTHo].p2btfSx, rNEi4lAM5);
}

