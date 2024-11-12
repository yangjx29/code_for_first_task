main () {
    int y9Ig6EHSt4Wy, Mkqe5XQr, USqAjw8tcXH, QD3CYw5AI9, cVIE1y, KlZ7gxR, EgJA30fy, pdkC0WpB;
    int AQ3aWR9tMA [y9Ig6EHSt4Wy];
    int oqtUmQ [y9Ig6EHSt4Wy];
    int kqGHoXJ [y9Ig6EHSt4Wy];
    int kTLFZjbCB [y9Ig6EHSt4Wy];
    int cXPmA4x [y9Ig6EHSt4Wy];
    char DBk0A8TM6 [y9Ig6EHSt4Wy] [(584 - 574)];
    getchar ();
    KlZ7gxR = (537 - 537);
    scanf ("%d", &y9Ig6EHSt4Wy);
    for (cVIE1y = (800 - 800); y9Ig6EHSt4Wy > cVIE1y; cVIE1y++) {
        scanf ("%s %d", DBk0A8TM6[cVIE1y], &AQ3aWR9tMA[cVIE1y]);
    }
    {
        cVIE1y = 456 - 456;
        while (y9Ig6EHSt4Wy > cVIE1y) {
            if ((919 - 859) <= AQ3aWR9tMA[cVIE1y]) {
                oqtUmQ[KlZ7gxR] = AQ3aWR9tMA[cVIE1y];
                kTLFZjbCB[KlZ7gxR] = cVIE1y;
                KlZ7gxR++;
            }
            cVIE1y++;
        }
    }
    for (cVIE1y = (931 - 931); KlZ7gxR > cVIE1y; cVIE1y++) {
        kqGHoXJ[cVIE1y] = cVIE1y;
    }
    for (cVIE1y = (481 - 481); KlZ7gxR > cVIE1y; cVIE1y++) {
        cXPmA4x[cVIE1y] = cVIE1y;
    }
    for (cVIE1y = 0; KlZ7gxR > cVIE1y; cVIE1y++) {
        for (EgJA30fy = cVIE1y + (209 - 208); KlZ7gxR > EgJA30fy; EgJA30fy++) {
            if (oqtUmQ[kqGHoXJ[EgJA30fy]] > oqtUmQ[kqGHoXJ[cVIE1y]]) {
                pdkC0WpB = kqGHoXJ[cVIE1y];
                kqGHoXJ[cVIE1y] = kqGHoXJ[EgJA30fy];
                kqGHoXJ[EgJA30fy] = pdkC0WpB;
            }
            else if (!(oqtUmQ[kqGHoXJ[EgJA30fy]] != oqtUmQ[kqGHoXJ[cVIE1y]]) && cXPmA4x[kqGHoXJ[EgJA30fy]] < cXPmA4x[kqGHoXJ[cVIE1y]]) {
                pdkC0WpB = kqGHoXJ[cVIE1y];
                kqGHoXJ[cVIE1y] = kqGHoXJ[EgJA30fy];
                kqGHoXJ[EgJA30fy] = pdkC0WpB;
            }
        }
    }
    for (cVIE1y = 0; cVIE1y < KlZ7gxR; cVIE1y++) {
        printf ("%s\n", DBk0A8TM6[kTLFZjbCB[kqGHoXJ[cVIE1y]]]);
    }
    {
        cVIE1y = 0;
        while (cVIE1y < y9Ig6EHSt4Wy) {
            if (AQ3aWR9tMA[cVIE1y] < (978 - 918))
                printf ("%s\n", DBk0A8TM6[cVIE1y]);
            cVIE1y++;
        }
    }
    getchar ();
}

