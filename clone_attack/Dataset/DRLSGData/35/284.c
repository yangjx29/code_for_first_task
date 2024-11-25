int main () {
    int Z154bYgEUGD;
    int AYb5DWtfZUw;
    int OyaBbkVLxI;
    int X2Pe5cC;
    int dTjxn83A;
    int aC8hOyo27N;
    int qTcvuF;
    int edNG9vEo;
    Z154bYgEUGD = (479 - 479);
    AYb5DWtfZUw = (594 - 594);
    int KBTZivm [(301 - 293)] [(678 - 670)];
    int CNXJcM76r [(546 - 538)];
    int Prsuie [(862 - 854)];
    scanf ("%d,%d\n", &dTjxn83A, &aC8hOyo27N);
    for (OyaBbkVLxI = (141 - 141); OyaBbkVLxI < dTjxn83A; OyaBbkVLxI++) {
        scanf ("\n");
        for (X2Pe5cC = (434 - 434); X2Pe5cC < aC8hOyo27N; X2Pe5cC++) {
            scanf ("%d ", &KBTZivm[OyaBbkVLxI][X2Pe5cC]);
        }
    }
    for (OyaBbkVLxI = (553 - 553); OyaBbkVLxI < dTjxn83A; OyaBbkVLxI++) {
        for (X2Pe5cC = (555 - 555); X2Pe5cC < aC8hOyo27N - (688 - 687); X2Pe5cC++) {
            if (KBTZivm[OyaBbkVLxI][X2Pe5cC] >= KBTZivm[OyaBbkVLxI][X2Pe5cC +(246 - 245)] && KBTZivm[OyaBbkVLxI][X2Pe5cC] >= AYb5DWtfZUw) {
                AYb5DWtfZUw = KBTZivm[OyaBbkVLxI][X2Pe5cC];
                CNXJcM76r[OyaBbkVLxI] = X2Pe5cC;
            }
            if (KBTZivm[OyaBbkVLxI][X2Pe5cC +(578 - 577)] > KBTZivm[OyaBbkVLxI][X2Pe5cC] && KBTZivm[OyaBbkVLxI][X2Pe5cC +(496 - 495)] >= AYb5DWtfZUw) {
                AYb5DWtfZUw = KBTZivm[OyaBbkVLxI][X2Pe5cC +(546 - 545)];
                CNXJcM76r[OyaBbkVLxI] = X2Pe5cC +(584 - 583);
            }
        }
        AYb5DWtfZUw = (393 - 393);
    }
    for (OyaBbkVLxI = (113 - 113); aC8hOyo27N > OyaBbkVLxI; OyaBbkVLxI++) {
        edNG9vEo = KBTZivm[(852 - 852)][OyaBbkVLxI];
        for (X2Pe5cC = (345 - 345); X2Pe5cC < dTjxn83A - (955 - 954); X2Pe5cC++) {
            if (KBTZivm[X2Pe5cC][OyaBbkVLxI] <= KBTZivm[X2Pe5cC +(142 - 141)][OyaBbkVLxI] && KBTZivm[X2Pe5cC][OyaBbkVLxI] <= edNG9vEo) {
                edNG9vEo = KBTZivm[X2Pe5cC][OyaBbkVLxI];
                Prsuie[OyaBbkVLxI] = X2Pe5cC;
            }
            if (KBTZivm[X2Pe5cC +(277 - 276)][OyaBbkVLxI] < KBTZivm[X2Pe5cC][OyaBbkVLxI] && KBTZivm[X2Pe5cC +(284 - 283)][OyaBbkVLxI] <= edNG9vEo) {
                edNG9vEo = KBTZivm[X2Pe5cC +(181 - 180)][OyaBbkVLxI];
                Prsuie[OyaBbkVLxI] = X2Pe5cC +(317 - 316);
            }
        }
    }
    for (OyaBbkVLxI = (809 - 809); OyaBbkVLxI < dTjxn83A; OyaBbkVLxI++) {
        qTcvuF = CNXJcM76r[OyaBbkVLxI];
        if (Prsuie[qTcvuF] == OyaBbkVLxI) {
            printf ("%d+%d", OyaBbkVLxI, qTcvuF);
        }
        else
            Z154bYgEUGD = Z154bYgEUGD +(31 - 30);
    }
    if (Z154bYgEUGD == dTjxn83A) {
        printf ("No");
    }
    return (1000 - 1000);
}

