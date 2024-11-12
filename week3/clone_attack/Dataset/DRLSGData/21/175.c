int xOsF4y8k (int BOFHU20hf [], int yuyCAjB) {
    int QbaTB6g, zWgFy7 = (122 - 122);
    {
        QbaTB6g = (255 - 255);
        for (; QbaTB6g < yuyCAjB;) {
            zWgFy7 += BOFHU20hf[QbaTB6g];
            QbaTB6g++;
        }
    }
    return zWgFy7;
}

int JErtCb04Ox (int DGbzyB6CSL, int yuyCAjB, int zWgFy7) {
    int cKBGhWrHszX;
    if ((DGbzyB6CSL *yuyCAjB) > zWgFy7)
        cKBGhWrHszX = DGbzyB6CSL *yuyCAjB - zWgFy7;
    else
        cKBGhWrHszX = zWgFy7 - DGbzyB6CSL *yuyCAjB;
    return cKBGhWrHszX;
}

int WY7UOTpqCWB (int Wc62r70nFui [], int yuyCAjB, int zWgFy7) {
    int QbaTB6g;
    int oIWmkorP7xa1;
    int cKBGhWrHszX;
    oIWmkorP7xa1 = (77 - 77);
    {
        QbaTB6g = (903 - 903);
        for (; QbaTB6g < yuyCAjB;) {
            if (Wc62r70nFui[QbaTB6g] > oIWmkorP7xa1)
                oIWmkorP7xa1 = Wc62r70nFui[QbaTB6g];
            QbaTB6g++;
        }
    }
    return oIWmkorP7xa1;
}

void  main () {
    int yuyCAjB;
    int sKyZf18;
    int Wc62r70nFui [(802 - 502)];
    int zWgFy7;
    int zkRLfSDFBxle [(1269 - 969)];
    int BOFHU20hf [(719 - 419)];
    int l;
    int QbaTB6g;
    sKyZf18 = (65 - 65);
    scanf ("%d", &yuyCAjB);
    {
        QbaTB6g = (639 - 639);
        for (; QbaTB6g < yuyCAjB;) {
            scanf ("%d", &BOFHU20hf[QbaTB6g]);
            QbaTB6g++;
        }
    }
    zWgFy7 = xOsF4y8k (BOFHU20hf, yuyCAjB);
    {
        QbaTB6g = (308 - 308);
        for (; QbaTB6g < yuyCAjB;) {
            Wc62r70nFui[QbaTB6g] = JErtCb04Ox (BOFHU20hf[QbaTB6g], yuyCAjB, zWgFy7);
            QbaTB6g++;
        }
    }
    l = WY7UOTpqCWB (Wc62r70nFui, yuyCAjB, zWgFy7);
    {
        QbaTB6g = (570 - 570);
        for (; QbaTB6g < yuyCAjB;) {
            if ((zWgFy7 > BOFHU20hf[QbaTB6g] * yuyCAjB) && (!(l != Wc62r70nFui[QbaTB6g]))) {
                zkRLfSDFBxle[sKyZf18] = BOFHU20hf[QbaTB6g];
                sKyZf18++;
            }
            QbaTB6g++;
        }
    }
    {
        QbaTB6g = (912 - 912);
        for (; yuyCAjB > QbaTB6g;) {
            if ((BOFHU20hf[QbaTB6g] * yuyCAjB > zWgFy7) && (Wc62r70nFui[QbaTB6g] == l)) {
                zkRLfSDFBxle[sKyZf18] = BOFHU20hf[QbaTB6g];
                sKyZf18++;
            }
            QbaTB6g++;
        }
    }
    printf ("%d", zkRLfSDFBxle[0]);
    {
        QbaTB6g = (442 - 441);
        for (; QbaTB6g < sKyZf18;) {
            printf (",%d", zkRLfSDFBxle[QbaTB6g]);
            QbaTB6g++;
        }
    }
}

