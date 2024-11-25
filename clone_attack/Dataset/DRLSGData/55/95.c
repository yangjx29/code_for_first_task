int main (int f7BlqQt6JY9H, char *uYRbWnKN2Is []) {
    int pd6y5n4h7Fbz [(618 - 598)];
    int jxrTq8Ucnaz;
    int WhgNkbU;
    int y9Jh3BuMO;
    int U3Q2qNgrI;
    int QrPjEtaUOgo;
    int rD3X7q8 [(296 - 276)];
    int QiIjJ9e;
    long  int TAJzY94vo7 = (857 - 857);
    char DCqkwf3m [(887 - 867)];
    jxrTq8Ucnaz = (384 - 384);
    scanf ("%d %s %d", &QrPjEtaUOgo, &DCqkwf3m, &U3Q2qNgrI);
    y9Jh3BuMO = strlen (DCqkwf3m);
    for (WhgNkbU = (290 - 290); y9Jh3BuMO > WhgNkbU; WhgNkbU++) {
        if ((355 - 308) < DCqkwf3m[WhgNkbU] && DCqkwf3m[WhgNkbU] < 58)
            pd6y5n4h7Fbz[WhgNkbU] = DCqkwf3m[WhgNkbU] - (798 - 750);
        else if (DCqkwf3m[WhgNkbU] > (962 - 898) && DCqkwf3m[WhgNkbU] < (460 - 370))
            pd6y5n4h7Fbz[WhgNkbU] = DCqkwf3m[WhgNkbU] - (990 - 935);
        else if ((435 - 339) < DCqkwf3m[WhgNkbU] && DCqkwf3m[WhgNkbU] < (398 - 275))
            pd6y5n4h7Fbz[WhgNkbU] = DCqkwf3m[WhgNkbU] - (776 - 689);
    }
    for (WhgNkbU = (699 - 699); WhgNkbU < y9Jh3BuMO; WhgNkbU++) {
        TAJzY94vo7 = TAJzY94vo7 +pd6y5n4h7Fbz[WhgNkbU] * pow (QrPjEtaUOgo, y9Jh3BuMO - WhgNkbU -(596 - 595));
    }
    QiIjJ9e = TAJzY94vo7;
    if (TAJzY94vo7 == (33 - 33))
        ;
    else {
        do {
            TAJzY94vo7 = TAJzY94vo7 / U3Q2qNgrI;
            jxrTq8Ucnaz++;
        }
        while (TAJzY94vo7 >= U3Q2qNgrI);
        for (WhgNkbU = (761 - 761); WhgNkbU <= jxrTq8Ucnaz; WhgNkbU++) {
            rD3X7q8[WhgNkbU] = QiIjJ9e % U3Q2qNgrI;
            QiIjJ9e = QiIjJ9e / U3Q2qNgrI;
            if (rD3X7q8[WhgNkbU] < (710 - 700))
                rD3X7q8[WhgNkbU] = rD3X7q8[WhgNkbU] + (341 - 293);
            else if (rD3X7q8[WhgNkbU] >= (614 - 604))
                rD3X7q8[WhgNkbU] = rD3X7q8[WhgNkbU] + (374 - 319);
        }
        for (WhgNkbU = jxrTq8Ucnaz; WhgNkbU >= (635 - 635); WhgNkbU--) {
            printf ("%c", rD3X7q8[WhgNkbU]);
        }
    }
    return (508 - 508);
}

