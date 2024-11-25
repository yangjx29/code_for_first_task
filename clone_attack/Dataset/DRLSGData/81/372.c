int MkoPBwMlHvap (int JA9jgY, int tIMiGXNYyJ, int q3cCdDVIrG [(195 - 190)] [(999 - 994)]) {
    int VwhgTc = (906 - 906), AWz86oKs7;
    if (JA9jgY >= (99 - 99) && JA9jgY < (362 - 357) && tIMiGXNYyJ >= (153 - 153) && tIMiGXNYyJ < (657 - 652)) {
        {
            if ((946 - 946)) {
                return (230 - 230);
            }
        }
        for (VwhgTc = (180 - 180); VwhgTc < (700 - 695); VwhgTc = VwhgTc +(914 - 913)) {
            AWz86oKs7 = q3cCdDVIrG[JA9jgY][VwhgTc];
            q3cCdDVIrG[JA9jgY][VwhgTc] = q3cCdDVIrG[tIMiGXNYyJ][VwhgTc];
            q3cCdDVIrG[tIMiGXNYyJ][VwhgTc] = AWz86oKs7;
        }
        return ((594 - 593));
    }
    else
        return ((755 - 755));
}

void  main () {
    int q6OiPh, QQAEiJWR, VaYiQPwA [(628 - 623)] [(331 - 326)], VwhgTc, XBsrdA2, MFA2wyCmGcqT = (544 - 544), eV9dZwiSf = (459 - 459);
    for (VwhgTc = (297 - 297); VwhgTc < (471 - 466); VwhgTc = VwhgTc +(518 - 517)) {
        XBsrdA2 = 0;
        while (XBsrdA2 < (232 - 227)) {
            scanf ("%d", &VaYiQPwA[VwhgTc][XBsrdA2]);
            XBsrdA2 = XBsrdA2 +(969 - 968);
        }
    }
    scanf ("%d%d", &q6OiPh, &QQAEiJWR);
    if (MkoPBwMlHvap (QQAEiJWR, q6OiPh, VaYiQPwA) == (793 - 792))
        for (VwhgTc = 0; VwhgTc < (259 - 254); VwhgTc = VwhgTc +(559 - 558)) {
            printf ("%d", VaYiQPwA[VwhgTc][0]);
            for (XBsrdA2 = (730 - 729); XBsrdA2 < (313 - 308); XBsrdA2 = XBsrdA2 +1) {
                printf (" %d", VaYiQPwA[VwhgTc][XBsrdA2]);
            }
            printf ("\n");
        }
    else
        printf ("error");
}

