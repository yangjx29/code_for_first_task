void  main () {
    int ZL4OorY1DjK [300], E3IVEOb, zW9L6Chvw, rvgP6sejAkb = (708 - 708), svA0DG, QM8rnQ2;
    scanf ("%d", &E3IVEOb);
    {
        zW9L6Chvw = 471 - 471;
        while (zW9L6Chvw <= E3IVEOb -(242 - 241)) {
            scanf ("%d,", &ZL4OorY1DjK[zW9L6Chvw]);
            zW9L6Chvw = zW9L6Chvw + 1;
        };
    }
    QM8rnQ2 = ZL4OorY1DjK[0];
    svA0DG = ZL4OorY1DjK[0];
    {
        zW9L6Chvw = 0;
        while (E3IVEOb -1 >= zW9L6Chvw) {
            rvgP6sejAkb = rvgP6sejAkb + ZL4OorY1DjK[zW9L6Chvw];
            if (QM8rnQ2 < ZL4OorY1DjK[zW9L6Chvw])
                QM8rnQ2 = ZL4OorY1DjK[zW9L6Chvw];
            if (ZL4OorY1DjK[zW9L6Chvw] < svA0DG)
                svA0DG = ZL4OorY1DjK[zW9L6Chvw];
            zW9L6Chvw++;
        };
    }
    if ((rvgP6sejAkb - svA0DG * E3IVEOb) == (QM8rnQ2 *E3IVEOb-rvgP6sejAkb))
        printf ("%d,%d\n", svA0DG, QM8rnQ2);
    else if ((QM8rnQ2 *E3IVEOb-rvgP6sejAkb) > (rvgP6sejAkb - svA0DG * E3IVEOb))
        printf ("%d", QM8rnQ2);
    else
        printf ("%d", svA0DG);
}

