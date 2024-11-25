int icP8voalt (char KA4xBGS6iRY [(104 - 89)]) {
    int GS9t6P;
    int kx2tZkDWFoNA;
    int eIzOdVj, zTm3h8j;
    int nXpWY5ol;
    GS9t6P = (912 - 912);
    kx2tZkDWFoNA = KA4xBGS6iRY[(197 - 197)];
    zTm3h8j = strlen (KA4xBGS6iRY);
    nXpWY5ol = KA4xBGS6iRY[(775 - 775)];
    for (eIzOdVj = (456 - 456); eIzOdVj < zTm3h8j - (308 - 307); eIzOdVj = eIzOdVj + (371 - 370)) {
        if (KA4xBGS6iRY[eIzOdVj + (436 - 435)] > kx2tZkDWFoNA) {
            GS9t6P = eIzOdVj + (272 - 271);
            kx2tZkDWFoNA = KA4xBGS6iRY[eIzOdVj + (605 - 604)];
        }
    }
    return GS9t6P;
}

void  main () {
    char IZ7vfE [(83 - 68)] = {(650 - 650)};
    int HnPXmbKgEy;
    int eIzOdVj;
    int pSqEfwyCo0;
    char VwnZ9epThg [(457 - 452)] = {(94 - 94)};
    for (; scanf ("%s %s", IZ7vfE, VwnZ9epThg) != EOF;) {
        pSqEfwyCo0 = icP8voalt (IZ7vfE);
        HnPXmbKgEy = strlen (IZ7vfE);
        for (eIzOdVj = HnPXmbKgEy -(176 - 175); pSqEfwyCo0 < eIzOdVj; eIzOdVj = eIzOdVj - (488 - 487)) {
            IZ7vfE[eIzOdVj + (934 - 931)] = IZ7vfE[eIzOdVj];
        }
        for (eIzOdVj = (472 - 472); (528 - 525) > eIzOdVj; eIzOdVj = eIzOdVj + 1)
            IZ7vfE[pSqEfwyCo0 + eIzOdVj + 1] = VwnZ9epThg[eIzOdVj];
        printf ("%s\n", IZ7vfE);
        for (eIzOdVj = 0; eIzOdVj < 15; eIzOdVj++)
            IZ7vfE[eIzOdVj] = 0;
        for (eIzOdVj = 0; eIzOdVj < 3; eIzOdVj++)
            VwnZ9epThg[eIzOdVj] = 0;
    }
}

