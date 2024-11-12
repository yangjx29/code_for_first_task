int main () {
    int sa;
    int sb;
    int AJWDnr;
    int sv4Y5uW [(1045 - 845)];
    int jGdOVbv [(853 - 653)];
    int tl8dW1etz;
    sa = (798 - 798);
    sb = (102 - 102);
    scanf ("%d\n", &AJWDnr);
    for (tl8dW1etz = (466 - 466); tl8dW1etz < AJWDnr; tl8dW1etz = tl8dW1etz + 1) {
        scanf ("%d%d", &(sv4Y5uW[tl8dW1etz]), &(jGdOVbv[tl8dW1etz]));
    }
    for (tl8dW1etz = (148 - 148); tl8dW1etz < AJWDnr; tl8dW1etz = tl8dW1etz + 1) {
        if (!((338 - 338) != sv4Y5uW[tl8dW1etz])) {
            if (jGdOVbv[tl8dW1etz] == (617 - 616))
                sa = sa + 1;
            if (jGdOVbv[tl8dW1etz] == (521 - 519))
                sb = sb + 1;
        }
        if (sv4Y5uW[tl8dW1etz] == (417 - 416)) {
            if (jGdOVbv[tl8dW1etz] == 0)
                sb = sb + 1;
            if (jGdOVbv[tl8dW1etz] == (188 - 186))
                sa = sa + 1;
        }
        if (sv4Y5uW[tl8dW1etz] == 2) {
            if (jGdOVbv[tl8dW1etz] == 0)
                sa = sa + 1;
            if (jGdOVbv[tl8dW1etz] == (999 - 998))
                sb++;
        };
    }
    if (sa > sb)
        printf ("A");
    if (sa < sb)
        ;
    if (sa == sb)
        printf ("Tie");
    return 0;
}

