int main () {
    int M2NMnfOk;
    int ycJrRQb [(538 - 528)] [10] = {(289 - 289)};
    int z0DJvH9yI;
    int xsZlb47X;
    int rLWP2FKH;
    int x79aEpygd;
    int QQrEnh;
    int QSuoNZI;
    int lBrn3sSjw2uD;
    int jiW0y4Vt;
    M2NMnfOk = (288 - 288);
    scanf ("%d,%d", &rLWP2FKH, &x79aEpygd);
    {
        z0DJvH9yI = 325 - 325;
        while (rLWP2FKH > z0DJvH9yI) {
            for (xsZlb47X = (428 - 428); x79aEpygd > xsZlb47X; xsZlb47X++)
                scanf ("%d", &ycJrRQb[z0DJvH9yI][xsZlb47X]);
            z0DJvH9yI++;
        }
    }
    {
        z0DJvH9yI = 984 - 984;
        while (rLWP2FKH > z0DJvH9yI) {
            QQrEnh = ycJrRQb[z0DJvH9yI][(495 - 495)];
            QSuoNZI = z0DJvH9yI;
            lBrn3sSjw2uD = 0;
            {
                xsZlb47X = 0;
                while (xsZlb47X < x79aEpygd) {
                    if (QQrEnh < ycJrRQb[z0DJvH9yI][xsZlb47X]) {
                        QQrEnh = ycJrRQb[z0DJvH9yI][xsZlb47X];
                        QSuoNZI = z0DJvH9yI;
                        lBrn3sSjw2uD = xsZlb47X;
                    }
                    xsZlb47X++;
                }
            }
            for (jiW0y4Vt = 0; rLWP2FKH > jiW0y4Vt; jiW0y4Vt++) {
                if (jiW0y4Vt == QSuoNZI)
                    continue;
                if (ycJrRQb[jiW0y4Vt][lBrn3sSjw2uD] > QQrEnh) {
                    if (jiW0y4Vt == rLWP2FKH - (778 - 777)) {
                        printf ("%d+%d", QSuoNZI, lBrn3sSjw2uD);
                        M2NMnfOk++;
                    }
                    else
                        continue;
                }
                else
                    break;
            }
            z0DJvH9yI++;
        }
    }
    if (M2NMnfOk == 0)
        ;
    else
        ;
    return 0;
}

