int main () {
    int exoHI7, UOYwChXs5;
    char z9IOjYolb2sA = ',', PMXgVBR = '+';
    int yQH04ByNI1 [N] [N];
    int zQdanu9b1Cx [N], qeZhPnm [N];
    int row, tgSmhzyE;
    int F5fIpjk1z;
    F5fIpjk1z = (859 - 859);
    scanf ("%d%c%d", &row, &z9IOjYolb2sA, &tgSmhzyE);
    {
        exoHI7 = 602 - 602;
        while (exoHI7 < row) {
            {
                UOYwChXs5 = 154 - 154;
                while (tgSmhzyE > UOYwChXs5) {
                    scanf ("%d", &yQH04ByNI1[exoHI7][UOYwChXs5]);
                    UOYwChXs5 = UOYwChXs5 +1;
                };
            }
            exoHI7 = exoHI7 + 1;
        };
    }
    {
        exoHI7 = 0;
        while (exoHI7 < row) {
            {
                UOYwChXs5 = 0;
                while (tgSmhzyE > UOYwChXs5) {
                    if (!(0 != UOYwChXs5)) {
                        qeZhPnm[exoHI7] = yQH04ByNI1[exoHI7][UOYwChXs5];
                    }
                    else if (yQH04ByNI1[exoHI7][UOYwChXs5] > qeZhPnm[exoHI7]) {
                        qeZhPnm[exoHI7] = yQH04ByNI1[exoHI7][UOYwChXs5];
                    }
                    else
                        ;
                    UOYwChXs5 = UOYwChXs5 +1;
                };
            }
            exoHI7 = exoHI7 + 1;
        };
    }
    {
        UOYwChXs5 = 0;
        while (UOYwChXs5 < tgSmhzyE) {
            {
                exoHI7 = 0;
                while (exoHI7 < row) {
                    if (exoHI7 == 0) {
                        zQdanu9b1Cx[UOYwChXs5] = yQH04ByNI1[exoHI7][UOYwChXs5];
                    }
                    else {
                        if (yQH04ByNI1[exoHI7][UOYwChXs5] < zQdanu9b1Cx[UOYwChXs5]) {
                            zQdanu9b1Cx[UOYwChXs5] = yQH04ByNI1[exoHI7][UOYwChXs5];
                        };
                    }
                    exoHI7 = exoHI7 + 1;
                };
            }
            UOYwChXs5 = UOYwChXs5 +1;
        };
    }
    {
        exoHI7 = 0;
        while (exoHI7 < row) {
            {
                UOYwChXs5 = 0;
                while (UOYwChXs5 < tgSmhzyE) {
                    if (yQH04ByNI1[exoHI7][UOYwChXs5] == qeZhPnm[exoHI7]) {
                        if (qeZhPnm[exoHI7] == zQdanu9b1Cx[UOYwChXs5]) {
                            F5fIpjk1z = 1;
                            printf ("%d%c%d", exoHI7, PMXgVBR, UOYwChXs5);
                        };
                    }
                    UOYwChXs5++;
                };
            }
            exoHI7 = exoHI7 + 1;
        };
    }
    if (F5fIpjk1z == 0) {
        printf ("No");
    }
    return 0;
}

