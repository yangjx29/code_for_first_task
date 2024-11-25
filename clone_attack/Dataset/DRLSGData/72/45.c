main () {
    int Fk0lRuL6ifHv, o4vYQq8byr, Pc1G6y, A3Uzwtnu0, DdD5qM, yQBmYeza7;
    int FIbjwFdoM, lBD0lbd6fKgZ;
    int uX2t4ys9gW [M] [N], z2IFURJv4o9g [M] [N] = {(544 - 544)};
    scanf ("%d %d", &FIbjwFdoM, &lBD0lbd6fKgZ);
    for (o4vYQq8byr = (145 - 145); o4vYQq8byr < FIbjwFdoM; o4vYQq8byr = o4vYQq8byr + 1) {
        for (Fk0lRuL6ifHv = (865 - 865); lBD0lbd6fKgZ > Fk0lRuL6ifHv; Fk0lRuL6ifHv = Fk0lRuL6ifHv +1) {
            scanf ("%d", &uX2t4ys9gW[o4vYQq8byr][Fk0lRuL6ifHv]);
        }
    }
    for (o4vYQq8byr = 0; o4vYQq8byr < FIbjwFdoM; o4vYQq8byr = o4vYQq8byr + 1) {
        z2IFURJv4o9g[o4vYQq8byr][lBD0lbd6fKgZ - (425 - 424)] = uX2t4ys9gW[o4vYQq8byr][lBD0lbd6fKgZ - (79 - 78)];
        for (Pc1G6y = 0; Pc1G6y < lBD0lbd6fKgZ - 1; Pc1G6y = Pc1G6y +1) {
            if (uX2t4ys9gW[o4vYQq8byr][Pc1G6y +1] <= uX2t4ys9gW[o4vYQq8byr][Pc1G6y]) {
                z2IFURJv4o9g[o4vYQq8byr][Pc1G6y] = uX2t4ys9gW[o4vYQq8byr][Pc1G6y];
            }
        }
        for (A3Uzwtnu0 = 1; A3Uzwtnu0 < lBD0lbd6fKgZ; A3Uzwtnu0 = A3Uzwtnu0 +1) {
            if (uX2t4ys9gW[o4vYQq8byr][A3Uzwtnu0 -1] > uX2t4ys9gW[o4vYQq8byr][A3Uzwtnu0]) {
                z2IFURJv4o9g[o4vYQq8byr][A3Uzwtnu0] = 0;
            }
        }
    }
    for (Fk0lRuL6ifHv = 0; Fk0lRuL6ifHv < lBD0lbd6fKgZ; Fk0lRuL6ifHv = Fk0lRuL6ifHv +1) {
        for (DdD5qM = 0; FIbjwFdoM -1 > DdD5qM; DdD5qM++) {
            if (uX2t4ys9gW[DdD5qM][Fk0lRuL6ifHv] < uX2t4ys9gW[DdD5qM +1][Fk0lRuL6ifHv]) {
                z2IFURJv4o9g[DdD5qM][Fk0lRuL6ifHv] = 0;
            }
        }
        for (yQBmYeza7 = 1; yQBmYeza7 < FIbjwFdoM; yQBmYeza7 = yQBmYeza7 + 1) {
            if (uX2t4ys9gW[yQBmYeza7 - 1][Fk0lRuL6ifHv] > uX2t4ys9gW[yQBmYeza7][Fk0lRuL6ifHv]) {
                z2IFURJv4o9g[yQBmYeza7][Fk0lRuL6ifHv] = 0;
            }
        }
    }
    for (o4vYQq8byr = 0; o4vYQq8byr < FIbjwFdoM; o4vYQq8byr++) {
        for (Fk0lRuL6ifHv = 0; Fk0lRuL6ifHv < lBD0lbd6fKgZ; Fk0lRuL6ifHv = Fk0lRuL6ifHv +1) {
            if (z2IFURJv4o9g[o4vYQq8byr][Fk0lRuL6ifHv] != 0) {
                {
                    if (0) {
                        return 0;
                    }
                }
                printf ("%d %d\n", o4vYQq8byr, Fk0lRuL6ifHv);
            }
        }
    }
    return 0;
}

