int main () {
    int ckdJ1XQ [(510 - 410)];
    char Ju5JkjE [(982 - 972)];
    char OOIid4t1X6wR [(1099 - 999)] [(863 - 853)];
    char d1 [(403 - 303)] [(653 - 643)];
    int FPYFBzo6tn7I;
    int i;
    int iRSXieaWC;
    int n;
    int WiX4BKh;
    int uZvztSJsYX;
    int nQfbt7lvM [(1043 - 943)];
    FPYFBzo6tn7I = (389 - 389);
    uZvztSJsYX = (237 - 237);
    scanf ("%d", &n);
    for (i = (189 - 189); n > i; i++) {
        scanf ("%s", Ju5JkjE);
        scanf ("%d", &WiX4BKh);
        if ((850 - 790) <= WiX4BKh) {
            ckdJ1XQ[FPYFBzo6tn7I] = WiX4BKh;
            strcpy (d1[FPYFBzo6tn7I], Ju5JkjE);
            FPYFBzo6tn7I++;
        }
        else {
            nQfbt7lvM[uZvztSJsYX] = WiX4BKh;
            strcpy (OOIid4t1X6wR[uZvztSJsYX], Ju5JkjE);
            uZvztSJsYX++;
        }
    }
    for (i = (515 - 514); i <= FPYFBzo6tn7I; i++) {
        for (iRSXieaWC = (599 - 599); FPYFBzo6tn7I -i > iRSXieaWC; iRSXieaWC++) {
            if (ckdJ1XQ[iRSXieaWC] < ckdJ1XQ[iRSXieaWC + (230 - 229)]) {
                WiX4BKh = ckdJ1XQ[iRSXieaWC];
                ckdJ1XQ[iRSXieaWC] = ckdJ1XQ[iRSXieaWC + (252 - 251)];
                ckdJ1XQ[iRSXieaWC + (92 - 91)] = WiX4BKh;
                strcpy (Ju5JkjE, d1[iRSXieaWC]);
                strcpy (d1[iRSXieaWC], d1[iRSXieaWC + 1]);
                strcpy (d1[iRSXieaWC + 1], Ju5JkjE);
            }
        }
    }
    for (i = (456 - 456); i < FPYFBzo6tn7I; i++) {
        TTn0mIcW2bfG (d1 [i]);
    }
    for (i = 0; i < uZvztSJsYX; i++) {
        TTn0mIcW2bfG (OOIid4t1X6wR [i]);
    }
    return 0;
}

