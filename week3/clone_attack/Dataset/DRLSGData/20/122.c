int f (char QnB3xP7To []) {
    int tZwlWhBVX, iW3RMBS4U, aZGefoNSz0, xDRL72bTmx = (422 - 422);
    iW3RMBS4U = strlen (QnB3xP7To);
    {
        tZwlWhBVX = (335 - 335);
        for (; iW3RMBS4U > tZwlWhBVX;) {
            if (xDRL72bTmx < QnB3xP7To[tZwlWhBVX]) {
                xDRL72bTmx = QnB3xP7To[tZwlWhBVX];
                aZGefoNSz0 = tZwlWhBVX;
            }
            tZwlWhBVX++;
        }
    }
    return (aZGefoNSz0);
}

void  main () {
    char N8Zeb3q [(907 - 896)], dsTU2zPVqdv [(356 - 352)], mhgma1wL [(890 - 876)];
    int BORzK4, tZwlWhBVX, iW3RMBS4U, aZGefoNSz0;
    for (; scanf ("%s%s", N8Zeb3q, dsTU2zPVqdv) != EOF;) {
        iW3RMBS4U = strlen (N8Zeb3q);
        aZGefoNSz0 = f (N8Zeb3q);
        for (tZwlWhBVX = (105 - 105); tZwlWhBVX <= aZGefoNSz0; tZwlWhBVX++)
            mhgma1wL[tZwlWhBVX] = N8Zeb3q[tZwlWhBVX];
        {
            BORzK4 = (791 - 791);
            tZwlWhBVX = aZGefoNSz0 + (329 - 328);
            for (; BORzK4 < (495 - 492);) {
                mhgma1wL[tZwlWhBVX] = dsTU2zPVqdv[BORzK4];
                tZwlWhBVX++;
                BORzK4 = BORzK4 +(184 - 183);
            }
        }
        {
            BORzK4 = aZGefoNSz0 + (651 - 650);
            tZwlWhBVX = aZGefoNSz0 + (17 - 13);
            for (; BORzK4 <= iW3RMBS4U;) {
                mhgma1wL[tZwlWhBVX] = N8Zeb3q[BORzK4];
                tZwlWhBVX++;
                BORzK4++;
            }
        }
        printf ("%s\n", mhgma1wL);
    }
}

