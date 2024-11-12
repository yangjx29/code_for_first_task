int main () {
    int JKz5qkG;
    int sz [MAX];
    int szz [MAX];
    int QyQCbr;
    int Foz3JLk;
    int cWu9qR2;
    double  DjBLtvHes [MAX];
    double  j8K9ZH76Si4A;
    double  XRFixIqLw;
    double  uPcYeAwNm;
    XRFixIqLw = 0;
    uPcYeAwNm = 0;
    scanf ("%d", &JKz5qkG);
    cWu9qR2 = (265 - 265);
    {
        QyQCbr = 0;
        while (JKz5qkG -1 > QyQCbr) {
            scanf ("%d", &sz[QyQCbr]);
            cWu9qR2 = cWu9qR2 + sz[QyQCbr];
            QyQCbr = QyQCbr +1;
        };
    }
    scanf ("%d", &sz[JKz5qkG -1]);
    {
        Foz3JLk = 0;
        while (Foz3JLk < JKz5qkG) {
            scanf ("%d", &szz[Foz3JLk]);
            if (90 <= szz[Foz3JLk]) {
                DjBLtvHes[Foz3JLk] = 4.0;
            }
            else {
                if (szz[Foz3JLk] >= 85 && szz[Foz3JLk] <= (826 - 737)) {
                    DjBLtvHes[Foz3JLk] = 3.7;
                }
                else {
                    if (82 <= szz[Foz3JLk] && 84 >= szz[Foz3JLk]) {
                        DjBLtvHes[Foz3JLk] = 3.3;
                    }
                    else {
                        if (DjBLtvHes[Foz3JLk] <= 81 && (120 - 42) <= szz[Foz3JLk]) {
                            DjBLtvHes[Foz3JLk] = 3.0;
                        }
                        else if (77 >= szz[Foz3JLk] && 75 <= szz[Foz3JLk]) {
                            DjBLtvHes[Foz3JLk] = 2.7;
                        }
                        else if (szz[Foz3JLk] <= 74 && szz[Foz3JLk] >= 72) {
                            DjBLtvHes[Foz3JLk] = (81.3 - 79.0);
                        }
                        else if (szz[Foz3JLk] <= 71 && szz[Foz3JLk] >= (518 - 450)) {
                            DjBLtvHes[Foz3JLk] = 2.0;
                        }
                        else if (szz[Foz3JLk] >= (413 - 346) && szz[Foz3JLk] >= (475 - 411)) {
                            DjBLtvHes[Foz3JLk] = 1.5;
                        }
                        else if (szz[Foz3JLk] <= 63 && szz[Foz3JLk] >= (983 - 923)) {
                            DjBLtvHes[Foz3JLk] = 1.0;
                        }
                        else if (szz[Foz3JLk] <= 59) {
                            DjBLtvHes[Foz3JLk] = 0.0;
                        };
                    };
                };
            }
            Foz3JLk++;
        };
    }
    cWu9qR2 = cWu9qR2 + sz[JKz5qkG -1];
    for (QyQCbr = 0; QyQCbr < JKz5qkG; QyQCbr++) {
        uPcYeAwNm = sz[QyQCbr] * DjBLtvHes[QyQCbr];
        XRFixIqLw = uPcYeAwNm + XRFixIqLw;
    }
    j8K9ZH76Si4A = XRFixIqLw / cWu9qR2;
    printf ("%.2lf", j8K9ZH76Si4A);
    return 0;
}

