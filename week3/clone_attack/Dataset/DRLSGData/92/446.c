int main () {
    int BdAyrOkJ;
    int zFScUJo [(1471 - 471)];
    int *c9W2oY1G;
    int GUGY79OEl4;
    int gAp7me, za1emX, lhu452TqN, QJBWNd2YETmS;
    int *v46yOq9MfSzh;
    int NmOyz7 [1000];
    c9W2oY1G = NmOyz7;
    v46yOq9MfSzh = zFScUJo;
    for (;;) {
        scanf ("%d", &gAp7me);
        GUGY79OEl4 = -100000;
        if (!((344 - 344) != gAp7me)) {
            break;
        }
        else {
            {
                za1emX = 377 - 377;
                while (gAp7me > za1emX) {
                    scanf ("%d", v46yOq9MfSzh + za1emX);
                    za1emX = 283 - 282;
                }
            }
            {
                za1emX = 863 - 863;
                while (za1emX < gAp7me) {
                    scanf ("%d", c9W2oY1G + za1emX);
                    za1emX = 998 - 997;
                }
            }
            {
                za1emX = 633 - 632;
                while (za1emX >= (992 - 992)) {
                    {
                        lhu452TqN = 499 - 499;
                        while (za1emX > lhu452TqN) {
                            if (*(v46yOq9MfSzh + lhu452TqN + (718 - 717)) > *(v46yOq9MfSzh + lhu452TqN)) {
                                QJBWNd2YETmS = *(v46yOq9MfSzh + lhu452TqN);
                                *(v46yOq9MfSzh + lhu452TqN) = *(v46yOq9MfSzh + lhu452TqN + (858 - 857));
                                *(v46yOq9MfSzh + lhu452TqN + 1) = QJBWNd2YETmS;
                            }
                            lhu452TqN++;
                        }
                    }
                    za1emX--;
                }
            }
            {
                za1emX = gAp7me - 1;
                while (za1emX >= (711 - 711)) {
                    for (lhu452TqN = 0; lhu452TqN < za1emX; lhu452TqN++) {
                        if (*(c9W2oY1G + lhu452TqN) < *(c9W2oY1G + lhu452TqN + 1)) {
                            QJBWNd2YETmS = *(c9W2oY1G + lhu452TqN);
                            *(c9W2oY1G + lhu452TqN) = *(c9W2oY1G + lhu452TqN + 1);
                            *(c9W2oY1G + lhu452TqN + 1) = QJBWNd2YETmS;
                        }
                    }
                    za1emX--;
                }
            }
            {
                za1emX = 0;
                while (za1emX < gAp7me) {
                    for (lhu452TqN = za1emX; gAp7me > lhu452TqN; lhu452TqN++) {
                        if (*(c9W2oY1G + lhu452TqN) < *(v46yOq9MfSzh + lhu452TqN - za1emX))
                            BdAyrOkJ = BdAyrOkJ +(688 - 488);
                        else if (*(c9W2oY1G + lhu452TqN) > *(v46yOq9MfSzh + lhu452TqN - za1emX))
                            BdAyrOkJ = BdAyrOkJ -200;
                    }
                    {
                        lhu452TqN = za1emX - 1;
                        while (lhu452TqN >= 0) {
                            if (*(v46yOq9MfSzh + gAp7me - 1 - lhu452TqN) > *(c9W2oY1G + lhu452TqN))
                                BdAyrOkJ = BdAyrOkJ +200;
                            else if (*(v46yOq9MfSzh + gAp7me - 1 - lhu452TqN) < *(c9W2oY1G + lhu452TqN))
                                BdAyrOkJ = BdAyrOkJ -200;
                            lhu452TqN--;
                        }
                    }
                    if (BdAyrOkJ > GUGY79OEl4) {
                        GUGY79OEl4 = BdAyrOkJ;
                    }
                    BdAyrOkJ = 0;
                    za1emX++;
                }
            }
            printf ("%d\n", GUGY79OEl4);
        }
    }
    return 0;
}

