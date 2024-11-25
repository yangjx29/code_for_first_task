int main () {
    int dOG4scmr9, Kp6yO1qhg9Fm, pnLUGq8IZC, lb, lMxyuGn, aP8Fd2 = (635 - 635);
    char F4lBtTK8mzCo;
    char eNTARp [(492 - 240)] = {'\0'};
    char etl3XmQDy [252] = {'\0'};
    char lMaJnYPb2Cd [252] = {'\0'};
    scanf ("%s%s", eNTARp, etl3XmQDy);
    pnLUGq8IZC = strlen (eNTARp);
    lb = strlen (etl3XmQDy);
    for (Kp6yO1qhg9Fm = (556 - 556); pnLUGq8IZC - Kp6yO1qhg9Fm > Kp6yO1qhg9Fm; Kp6yO1qhg9Fm = Kp6yO1qhg9Fm +1) {
        F4lBtTK8mzCo = eNTARp[Kp6yO1qhg9Fm];
        eNTARp[Kp6yO1qhg9Fm] = eNTARp[pnLUGq8IZC - Kp6yO1qhg9Fm -1];
        eNTARp[pnLUGq8IZC - Kp6yO1qhg9Fm -1] = F4lBtTK8mzCo;
    }
    for (Kp6yO1qhg9Fm = (899 - 899); lb - Kp6yO1qhg9Fm > Kp6yO1qhg9Fm; Kp6yO1qhg9Fm++) {
        F4lBtTK8mzCo = etl3XmQDy[Kp6yO1qhg9Fm];
        etl3XmQDy[Kp6yO1qhg9Fm] = etl3XmQDy[lb - Kp6yO1qhg9Fm -1];
        etl3XmQDy[lb - Kp6yO1qhg9Fm -1] = F4lBtTK8mzCo;
    }
    for (Kp6yO1qhg9Fm = pnLUGq8IZC; 252 > Kp6yO1qhg9Fm; Kp6yO1qhg9Fm++) {
        eNTARp[Kp6yO1qhg9Fm] = '0';
    }
    for (Kp6yO1qhg9Fm = lb; 252 > Kp6yO1qhg9Fm; Kp6yO1qhg9Fm++) {
        etl3XmQDy[Kp6yO1qhg9Fm] = '0';
    }
    for (Kp6yO1qhg9Fm = 0; 252 > Kp6yO1qhg9Fm; Kp6yO1qhg9Fm++) {
        lMxyuGn = eNTARp[Kp6yO1qhg9Fm] - '0' + etl3XmQDy[Kp6yO1qhg9Fm] - '0' + aP8Fd2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        if ((370 - 360) <= lMxyuGn) {
            lMaJnYPb2Cd[Kp6yO1qhg9Fm] = lMxyuGn % 10 + '0';
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            aP8Fd2 = lMxyuGn / 10;
        }
        else {
            lMaJnYPb2Cd[Kp6yO1qhg9Fm] = '0' + lMxyuGn;
            aP8Fd2 = 0;
        };
    }
    for (Kp6yO1qhg9Fm = 251; Kp6yO1qhg9Fm > 0; Kp6yO1qhg9Fm--) {
        if (lMaJnYPb2Cd[Kp6yO1qhg9Fm] != '0') {
            break;
        }
        else {
            lMaJnYPb2Cd[Kp6yO1qhg9Fm] = '\0';
        };
    }
    lMxyuGn = strlen (lMaJnYPb2Cd);
    for (Kp6yO1qhg9Fm = 0; Kp6yO1qhg9Fm < lMxyuGn - Kp6yO1qhg9Fm; Kp6yO1qhg9Fm++) {
        F4lBtTK8mzCo = lMaJnYPb2Cd[Kp6yO1qhg9Fm];
        lMaJnYPb2Cd[Kp6yO1qhg9Fm] = lMaJnYPb2Cd[lMxyuGn - Kp6yO1qhg9Fm -1];
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        lMaJnYPb2Cd[lMxyuGn - 1 - Kp6yO1qhg9Fm] = F4lBtTK8mzCo;
    }
    printf ("%s", lMaJnYPb2Cd);
    return 0;
}

