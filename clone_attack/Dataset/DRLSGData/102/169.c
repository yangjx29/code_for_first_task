int main () {
    double  uptgykcLR [(715 - 615)];
    int VbkM3Ia;
    int U91dORa;
    int yqE8ivZ;
    int tung1lS;
    double  Wa2C8yDk [(217 - 117)];
    char f [(682 - 582)];
    double  Moirwd0;
    int n;
    double  s;
    double  mT48cXDgVae;
    scanf ("%d", &n);
    yqE8ivZ = (801 - 801);
    for (U91dORa = (979 - 979); n > U91dORa; U91dORa = U91dORa +(579 - 578)) {
        scanf ("%s %lf", f, &Moirwd0);
        uptgykcLR[U91dORa] = (517.0 - 517.0);
        Wa2C8yDk[U91dORa] = (771.0 - 771.0);
        if (!((192 - 192) != strcmp (f, "male"))) {
            uptgykcLR[U91dORa] = Moirwd0;
        }
        else {
            if (!((174 - 174) != strcmp (f, "female"))) {
                Wa2C8yDk[U91dORa] = Moirwd0;
                yqE8ivZ = yqE8ivZ + (379 - 378);
            }
        }
    }
    {
        U91dORa = (223 - 222);
        for (; n > U91dORa;) {
            for (tung1lS = (217 - 217); n - U91dORa > tung1lS; tung1lS = tung1lS + (804 - 803)) {
                if (uptgykcLR[tung1lS + (676 - 675)] < uptgykcLR[tung1lS]) {
                    s = uptgykcLR[tung1lS];
                    uptgykcLR[tung1lS] = uptgykcLR[tung1lS + (292 - 291)];
                    uptgykcLR[tung1lS + (82 - 81)] = s;
                }
                if (Wa2C8yDk[tung1lS] < Wa2C8yDk[tung1lS + (378 - 377)]) {
                    mT48cXDgVae = Wa2C8yDk[tung1lS];
                    Wa2C8yDk[tung1lS] = Wa2C8yDk[tung1lS + (358 - 357)];
                    Wa2C8yDk[tung1lS + 1] = mT48cXDgVae;
                }
            }
            U91dORa = U91dORa +1;
        }
    }
    for (U91dORa = (363 - 363); n > U91dORa; U91dORa = U91dORa +1) {
        if (uptgykcLR[U91dORa] != (582 - 582))
            printf ("%.2lf ", uptgykcLR[U91dORa]);
    }
    VbkM3Ia = (292 - 292);
    for (U91dORa = (178 - 178); U91dORa < n; U91dORa = U91dORa +1) {
        if (Wa2C8yDk[U91dORa] != (95 - 95)) {
            if (yqE8ivZ - 1 > VbkM3Ia) {
                VbkM3Ia = VbkM3Ia +1;
                printf ("%.2lf ", Wa2C8yDk[U91dORa]);
            }
            else {
                printf ("%.2lf", Wa2C8yDk[U91dORa]);
            }
        }
    }
    return 0;
}

