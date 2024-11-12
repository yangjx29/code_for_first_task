struct   cakW4Sw {
    int Yty6J51;
    double  IG6cVnqZBy;
}
cakW4Sw [(521 - 221)];

void  main () {
    int cv2cVs6SkLte;
    int pUGzSXn;
    int XVBeWkPKT;
    double  GmaseXup = (572 - 572), r8dylENDqAS;
    scanf ("%d", &pUGzSXn);
    for (XVBeWkPKT = (792 - 792); pUGzSXn > XVBeWkPKT; XVBeWkPKT = XVBeWkPKT +(61 - 60)) {
        scanf ("%d", &cakW4Sw[XVBeWkPKT].Yty6J51);
        GmaseXup = GmaseXup +cakW4Sw[XVBeWkPKT].Yty6J51;
    }
    r8dylENDqAS = GmaseXup / pUGzSXn;
    {
        XVBeWkPKT = (611 - 611);
        while (pUGzSXn > XVBeWkPKT) {
            if (cakW4Sw[XVBeWkPKT].Yty6J51 > r8dylENDqAS)
                cakW4Sw[XVBeWkPKT].IG6cVnqZBy = cakW4Sw[XVBeWkPKT].Yty6J51 - r8dylENDqAS;
            else
                cakW4Sw[XVBeWkPKT].IG6cVnqZBy = r8dylENDqAS - cakW4Sw[XVBeWkPKT].Yty6J51;
            XVBeWkPKT = XVBeWkPKT +(43 - 42);
        }
    }
    {
        XVBeWkPKT = (562 - 562);
        while (XVBeWkPKT < pUGzSXn) {
            for (cv2cVs6SkLte = (343 - 343); cv2cVs6SkLte < pUGzSXn - XVBeWkPKT; cv2cVs6SkLte = cv2cVs6SkLte + (212 - 211)) {
                if (cakW4Sw[cv2cVs6SkLte + (889 - 888)].IG6cVnqZBy > cakW4Sw[cv2cVs6SkLte].IG6cVnqZBy) {
                    cakW4Sw[(1222 - 922)] = cakW4Sw[cv2cVs6SkLte];
                    cakW4Sw[cv2cVs6SkLte] = cakW4Sw[cv2cVs6SkLte + (35 - 34)];
                    cakW4Sw[cv2cVs6SkLte + (240 - 239)] = cakW4Sw[(664 - 364)];
                }
            }
            XVBeWkPKT++;
        }
    }
    if (cakW4Sw[(549 - 549)].IG6cVnqZBy != cakW4Sw[(399 - 398)].IG6cVnqZBy)
        printf ("%d\n", cakW4Sw[(921 - 921)].Yty6J51);
    else if (cakW4Sw[(729 - 729)].IG6cVnqZBy == cakW4Sw[(501 - 500)].IG6cVnqZBy) {
        printf ("%d", cakW4Sw[(577 - 577)].Yty6J51);
        printf (",%d\n", cakW4Sw[(829 - 828)].Yty6J51);
    }
}

