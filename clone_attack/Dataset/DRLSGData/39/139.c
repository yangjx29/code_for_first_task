struct   student {
    char xFH156dqK [20];
    int HEhZH8kYb;
    int IoBdKu;
    char noYZ0cn;
    char rh4QEJqFKODl;
    int fbdO78zEpR;
    int JwTLIZ;
}
goQlYcXTN [100];

void  main () {
    int OtupfshgA, neSTVjEsM7, ssum = 0, XeBzQC = 0, rPtTKSljA;
    scanf ("%d", &OtupfshgA);
    for (neSTVjEsM7 = 0; neSTVjEsM7 < OtupfshgA; neSTVjEsM7++)
        scanf ("%s%d%d %c %c%d", goQlYcXTN[neSTVjEsM7].xFH156dqK, &goQlYcXTN[neSTVjEsM7].HEhZH8kYb, &goQlYcXTN[neSTVjEsM7].IoBdKu, &goQlYcXTN[neSTVjEsM7].noYZ0cn, &goQlYcXTN[neSTVjEsM7].rh4QEJqFKODl, &goQlYcXTN[neSTVjEsM7].fbdO78zEpR), goQlYcXTN[neSTVjEsM7].JwTLIZ = 0;
    for (neSTVjEsM7 = 0; neSTVjEsM7 < OtupfshgA; neSTVjEsM7++) {
        if (goQlYcXTN[neSTVjEsM7].HEhZH8kYb > 80 && goQlYcXTN[neSTVjEsM7].fbdO78zEpR >= 1)
            goQlYcXTN[neSTVjEsM7].JwTLIZ += 8000;
        if (goQlYcXTN[neSTVjEsM7].HEhZH8kYb > 85 && 80 < goQlYcXTN[neSTVjEsM7].IoBdKu)
            goQlYcXTN[neSTVjEsM7].JwTLIZ += 4000;
        if (goQlYcXTN[neSTVjEsM7].HEhZH8kYb > 90)
            goQlYcXTN[neSTVjEsM7].JwTLIZ += 2000;
        if (goQlYcXTN[neSTVjEsM7].HEhZH8kYb > 85 && goQlYcXTN[neSTVjEsM7].rh4QEJqFKODl == 'Y')
            goQlYcXTN[neSTVjEsM7].JwTLIZ += 1000;
        if (goQlYcXTN[neSTVjEsM7].IoBdKu > 80 && goQlYcXTN[neSTVjEsM7].noYZ0cn == 'Y')
            goQlYcXTN[neSTVjEsM7].JwTLIZ += 850;
        ssum += goQlYcXTN[neSTVjEsM7].JwTLIZ;
    }
    for (neSTVjEsM7 = 0; neSTVjEsM7 < OtupfshgA; neSTVjEsM7++)
        if (goQlYcXTN[neSTVjEsM7].JwTLIZ > XeBzQC)
            XeBzQC = goQlYcXTN[neSTVjEsM7].JwTLIZ, rPtTKSljA = neSTVjEsM7;
    printf ("%s\n%d\n%d", goQlYcXTN[rPtTKSljA].xFH156dqK, XeBzQC, ssum);
}

