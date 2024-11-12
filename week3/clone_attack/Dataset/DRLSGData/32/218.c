void  ej2yZn8Ddi (char fnwID1C [], char fQL3bUr2wR [], char BjWyTUQd7J []);

void  main () {
    int wXyMJ3km;
    int n6LTvB;
    char fnwID1C [bkEDxnHL9] [bkEDxnHL9];
    char fQL3bUr2wR [bkEDxnHL9] [bkEDxnHL9];
    char BjWyTUQd7J [bkEDxnHL9] [bkEDxnHL9];
    scanf ("%d\n", &n6LTvB);
    for (wXyMJ3km = (149 - 148); wXyMJ3km <= n6LTvB; wXyMJ3km++) {
        scanf ("%s\n%s\n\n", fnwID1C[wXyMJ3km], fQL3bUr2wR[wXyMJ3km]);
        ej2yZn8Ddi (fnwID1C[wXyMJ3km], fQL3bUr2wR[wXyMJ3km], BjWyTUQd7J[wXyMJ3km]);
        printf ("%s\n", BjWyTUQd7J[wXyMJ3km]);
    }
}

void  ej2yZn8Ddi (char fnwID1C [], char fQL3bUr2wR [], char BjWyTUQd7J []) {
    int uRbUP1XB8;
    int AjGvroO2;
    int VJkAxS;
    char lUjosv8;
    int wXyMJ3km;
    int r1W0cr9;
    int j2wQ3R;
    int MLopPDn1x2i;
    int AnIKwcVmdg;
    AjGvroO2 = (753 - 753);
    AnIKwcVmdg = (178 - 178);
    j2wQ3R = (317 - 317);
    MLopPDn1x2i = strlen (fnwID1C) - (104 - 103);
    VJkAxS = strlen (fQL3bUr2wR) - (27 - 26);
    for (; MLopPDn1x2i >= (388 - 388);) {
        if ((936 - 936) > VJkAxS) {
            uRbUP1XB8 = fnwID1C[MLopPDn1x2i--] - (646 - 598);
        }
        else {
            uRbUP1XB8 = fnwID1C[MLopPDn1x2i--] - fQL3bUr2wR[VJkAxS--];
        }
        BjWyTUQd7J[j2wQ3R++] = uRbUP1XB8 - AjGvroO2 +(618 - 570);
        if (BjWyTUQd7J[j2wQ3R - (201 - 200)] < (306 - 258)) {
            AjGvroO2 = (159 - 158);
            BjWyTUQd7J[j2wQ3R - (818 - 817)] += (327 - 317);
        }
        else
            AjGvroO2 = (133 - 133);
    }
    for (; BjWyTUQd7J[j2wQ3R] == (339 - 339);)
        j2wQ3R--;
    for (; BjWyTUQd7J[j2wQ3R] == '0';) {
        BjWyTUQd7J[j2wQ3R] = (235 - 235);
        j2wQ3R--;
    }
    r1W0cr9 = j2wQ3R;
    {
        wXyMJ3km = (118 - 118);
        while (wXyMJ3km <= r1W0cr9 / (779 - 777)) {
            lUjosv8 = BjWyTUQd7J[wXyMJ3km];
            BjWyTUQd7J[wXyMJ3km] = BjWyTUQd7J[r1W0cr9 - wXyMJ3km];
            BjWyTUQd7J[r1W0cr9 - wXyMJ3km] = lUjosv8;
            wXyMJ3km++;
        }
    }
}

