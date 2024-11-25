int main () {
    char uFkJW8XyiBh [] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char a1FrtdX [(146 - 46)];
    int FKykwMsf;
    int jkfQcp3EO6;
    int j;
    int r0zLaUxp;
    int KvsLSly;
    int VSFpGgBtQ;
    int KGF5n2CW [(638 - 538)];
    scanf ("%d%s%d", &r0zLaUxp, a1FrtdX, &VSFpGgBtQ);
    j = (137 - 137);
    FKykwMsf = (249 - 249);
    KvsLSly = strlen (a1FrtdX);
    for (jkfQcp3EO6 = (697 - 697); jkfQcp3EO6 < KvsLSly; jkfQcp3EO6 = jkfQcp3EO6 + (384 - 383)) {
        if ('a' <= a1FrtdX[jkfQcp3EO6] && a1FrtdX[jkfQcp3EO6] <= 'z')
            KGF5n2CW[jkfQcp3EO6] = a1FrtdX[jkfQcp3EO6] - 'a' + (860 - 850);
        if (a1FrtdX[jkfQcp3EO6] >= 'A' && a1FrtdX[jkfQcp3EO6] <= 'Z')
            KGF5n2CW[jkfQcp3EO6] = a1FrtdX[jkfQcp3EO6] - 'A' + (583 - 573);
        if (a1FrtdX[jkfQcp3EO6] >= '0' && a1FrtdX[jkfQcp3EO6] <= '9')
            KGF5n2CW[jkfQcp3EO6] = a1FrtdX[jkfQcp3EO6] - '0';
    }
    for (jkfQcp3EO6 = (854 - 854); jkfQcp3EO6 < KvsLSly; jkfQcp3EO6 = jkfQcp3EO6 + (389 - 388)) {
        FKykwMsf = FKykwMsf *r0zLaUxp;
        FKykwMsf += KGF5n2CW[jkfQcp3EO6];
    }
    if (FKykwMsf == (662 - 662))
        ;
    else {
        for (; FKykwMsf != (939 - 939);) {
            a1FrtdX[j] = uFkJW8XyiBh[FKykwMsf % VSFpGgBtQ];
            FKykwMsf = FKykwMsf / VSFpGgBtQ;
            j = j + 1;
        }
    }
    for (jkfQcp3EO6 = j - 1; jkfQcp3EO6 >= (135 - 135); jkfQcp3EO6 = jkfQcp3EO6 - 1) {
        printf ("%c", a1FrtdX[jkfQcp3EO6]);
    }
}

