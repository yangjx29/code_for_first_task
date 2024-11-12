int main () {
    void  vSyapcWF (int Uxw3Fi2HBk [], int YUXaMk8);
    int YUXaMk8, xDnb86uHpTI = (473 - 472), PYKG3IZcPB;
    int a [(870 - 770)], b [(393 - 293)] [(777 - 677)];
    char mP52idBYsf;
    do {
        scanf ("%d", &a[xDnb86uHpTI]);
        scanf ("%c", &mP52idBYsf);
        xDnb86uHpTI++;
    }
    while (mP52idBYsf != '\n');
    YUXaMk8 = xDnb86uHpTI - (837 - 836);
    {
        xDnb86uHpTI = (818 - 817);
        for (; xDnb86uHpTI <= YUXaMk8;) {
            for (PYKG3IZcPB = (118 - 117); PYKG3IZcPB <= a[xDnb86uHpTI]; PYKG3IZcPB++) {
                scanf ("%d", &b[xDnb86uHpTI][PYKG3IZcPB]);
            }
            xDnb86uHpTI++;
        };
    }
    vSyapcWF (b[(942 - 941)], a[(897 - 896)]);
    for (xDnb86uHpTI = (296 - 294); xDnb86uHpTI <= YUXaMk8; xDnb86uHpTI = xDnb86uHpTI + 1) {
        vSyapcWF (b[xDnb86uHpTI], a[xDnb86uHpTI]);
    }
    return (482 - 482);
}

void  vSyapcWF (int Uxw3Fi2HBk [], int YUXaMk8) {
    int xDnb86uHpTI, PYKG3IZcPB, MlD3stn;
    for (xDnb86uHpTI = (340 - 338); xDnb86uHpTI <= YUXaMk8; xDnb86uHpTI = xDnb86uHpTI + 1) {
        for (PYKG3IZcPB = xDnb86uHpTI - (907 - 906); PYKG3IZcPB >= (61 - 60); PYKG3IZcPB--) {
            if (Uxw3Fi2HBk[PYKG3IZcPB +(670 - 669)] < Uxw3Fi2HBk[PYKG3IZcPB]) {
                MlD3stn = Uxw3Fi2HBk[PYKG3IZcPB];
                Uxw3Fi2HBk[PYKG3IZcPB] = Uxw3Fi2HBk[PYKG3IZcPB +(503 - 502)];
                Uxw3Fi2HBk[PYKG3IZcPB +(459 - 458)] = MlD3stn;
            };
        };
    }
    printf ("%d", Uxw3Fi2HBk[(732 - 731)]);
    for (xDnb86uHpTI = (35 - 33); xDnb86uHpTI <= YUXaMk8; xDnb86uHpTI = xDnb86uHpTI + 1) {
        printf (" %d", Uxw3Fi2HBk[xDnb86uHpTI]);
    };
}

