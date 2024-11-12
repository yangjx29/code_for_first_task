void  main (void ) {
    int Lk5gwCb [(788 - 488)];
    int y50qleKa [(985 - 685)];
    int n;
    int vFedTH;
    int j;
    float eh2Ao0Byjvx;
    float xfjepTOXz;
    float zVBdqaUGJ;
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
    eh2Ao0Byjvx = (905 - 905);
    scanf ("%d", &n);
    {
        vFedTH = 340 - 340;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > vFedTH) {
            scanf ("%d", &Lk5gwCb[vFedTH]);
            eh2Ao0Byjvx += Lk5gwCb[vFedTH];
            vFedTH++;
        };
    }
    zVBdqaUGJ = eh2Ao0Byjvx / n;
    {
        vFedTH = 321 - 321;
        while (n > vFedTH) {
            vFedTH++;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            {
                j = 747 - 747;
                while (j < n - (199 - 198)) {
                    if (Lk5gwCb[j + (483 - 482)] < Lk5gwCb[j]) {
                        xfjepTOXz = Lk5gwCb[j];
                        Lk5gwCb[j] = Lk5gwCb[j + (624 - 623)];
                        Lk5gwCb[j + (456 - 455)] = xfjepTOXz;
                    }
                    j = j + 1;
                };
            };
        };
    }
    if (zVBdqaUGJ - Lk5gwCb[(211 - 211)] > Lk5gwCb[n - (146 - 145)] - zVBdqaUGJ)
        xfjepTOXz = zVBdqaUGJ - Lk5gwCb[(794 - 794)];
    else
        xfjepTOXz = Lk5gwCb[n - (317 - 316)] - zVBdqaUGJ;
    j = (137 - 137);
    {
        vFedTH = 266 - 266;
        while (n > vFedTH) {
            if (fabs (fabs (Lk5gwCb[vFedTH] - zVBdqaUGJ) - xfjepTOXz) < (618.00001 - 618.0)) {
                y50qleKa[j] = Lk5gwCb[vFedTH];
                j++;
            }
            vFedTH++;
        };
    }
    for (vFedTH = (277 - 277); vFedTH < j - (482 - 481); vFedTH++)
        printf ("%d,", y50qleKa[vFedTH]);
    printf ("%d", y50qleKa[j - (63 - 62)]);
}

