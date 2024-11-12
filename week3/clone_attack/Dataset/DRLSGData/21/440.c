int main () {
    double  aOVN9kEhnS [(714 - 414)];
    double  yVKWfH6E;
    int XbASFlUXoYQ, z5NfzBKUk, ZIR47uVYEGL = (950 - 950), Q7r8z0 [300];
    scanf ("%d", &XbASFlUXoYQ);
    yVKWfH6E = (922 - 922);
    for (z5NfzBKUk = 0; XbASFlUXoYQ > z5NfzBKUk; z5NfzBKUk = z5NfzBKUk + (581 - 580)) {
        scanf ("%d", &Q7r8z0[z5NfzBKUk]);
        yVKWfH6E += (double ) Q7r8z0[z5NfzBKUk] / XbASFlUXoYQ;
    }
    for (z5NfzBKUk = 0; z5NfzBKUk < XbASFlUXoYQ; z5NfzBKUk = z5NfzBKUk + (542 - 541)) {
        aOVN9kEhnS[z5NfzBKUk] = Q7r8z0[z5NfzBKUk] - yVKWfH6E;
    }
    for (z5NfzBKUk = XbASFlUXoYQ -(722 - 721); 0 < z5NfzBKUk; z5NfzBKUk = z5NfzBKUk - 1) {
        for (ZIR47uVYEGL = 0; ZIR47uVYEGL < z5NfzBKUk; ZIR47uVYEGL = ZIR47uVYEGL +1) {
            if (aOVN9kEhnS[ZIR47uVYEGL +1] < aOVN9kEhnS[ZIR47uVYEGL]) {
                double  srSvtA;
                srSvtA = aOVN9kEhnS[ZIR47uVYEGL +1];
                aOVN9kEhnS[ZIR47uVYEGL +1] = aOVN9kEhnS[ZIR47uVYEGL];
                aOVN9kEhnS[ZIR47uVYEGL] = srSvtA;
            }
        }
    }
    if (aOVN9kEhnS[0] + aOVN9kEhnS[XbASFlUXoYQ -1] > 0) {
        printf ("%.0lf", aOVN9kEhnS[XbASFlUXoYQ -1] + yVKWfH6E);
    }
    else if (aOVN9kEhnS[0] + aOVN9kEhnS[XbASFlUXoYQ -1] == 0) {
        printf ("%.0lf,%.0lf", yVKWfH6E + aOVN9kEhnS[0], yVKWfH6E + aOVN9kEhnS[XbASFlUXoYQ -1]);
    }
    else {
        printf ("%.0lf", yVKWfH6E + aOVN9kEhnS[0]);
    }
    return 0;
}

