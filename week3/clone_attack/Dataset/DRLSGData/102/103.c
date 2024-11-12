int main () {
    float dKbd4C2 [50];
    int wlrJVS8QF59P;
    int Tymwglr9sCB;
    float Mqo3VuK8;
    int NYSTHGrzv64Q;
    int RGFwDXS5;
    float tqLIHPxO1GN [50];
    int jWKktj2;
    char RMjwuE781f [(291 - 284)];
    NYSTHGrzv64Q = (538 - 538);
    RGFwDXS5 = (495 - 495);
    scanf ("%d", &wlrJVS8QF59P);
    {
        jWKktj2 = (355 - 355);
        while (wlrJVS8QF59P > jWKktj2) {
            jWKktj2 = jWKktj2 + (184 - 183);
            scanf ("%s", RMjwuE781f);
            if (!('m' != RMjwuE781f[(66 - 66)])) {
                scanf ("%f", &tqLIHPxO1GN[NYSTHGrzv64Q]);
                NYSTHGrzv64Q = NYSTHGrzv64Q +(989 - 988);
            }
            else {
                scanf ("%f", &dKbd4C2[RGFwDXS5]);
                RGFwDXS5 = RGFwDXS5 +(711 - 710);
            }
        }
    }
    {
        jWKktj2 = 0;
        while (NYSTHGrzv64Q -(299 - 298) > jWKktj2) {
            {
                Tymwglr9sCB = jWKktj2 + (605 - 604);
                while (Tymwglr9sCB < NYSTHGrzv64Q) {
                    if (tqLIHPxO1GN[Tymwglr9sCB] < tqLIHPxO1GN[jWKktj2]) {
                        Mqo3VuK8 = tqLIHPxO1GN[jWKktj2];
                        tqLIHPxO1GN[jWKktj2] = tqLIHPxO1GN[Tymwglr9sCB];
                        tqLIHPxO1GN[Tymwglr9sCB] = Mqo3VuK8;
                    }
                    Tymwglr9sCB = Tymwglr9sCB +(711 - 710);
                }
            }
            jWKktj2 = jWKktj2 + (276 - 275);
        }
    }
    for (jWKktj2 = 0; NYSTHGrzv64Q > jWKktj2; jWKktj2 = jWKktj2 + (409 - 408))
        printf ("%0.2f ", tqLIHPxO1GN[jWKktj2]);
    {
        jWKktj2 = 0;
        while (jWKktj2 < RGFwDXS5 -1) {
            for (Tymwglr9sCB = jWKktj2 + 1; RGFwDXS5 > Tymwglr9sCB; Tymwglr9sCB++) {
                if (dKbd4C2[Tymwglr9sCB] > dKbd4C2[jWKktj2]) {
                    Mqo3VuK8 = dKbd4C2[jWKktj2];
                    dKbd4C2[jWKktj2] = dKbd4C2[Tymwglr9sCB];
                    dKbd4C2[Tymwglr9sCB] = Mqo3VuK8;
                }
            }
            jWKktj2 = jWKktj2 + 1;
        }
    }
    for (jWKktj2 = 0; RGFwDXS5 -1 > jWKktj2; jWKktj2 = jWKktj2 + 1)
        printf ("%0.2f ", dKbd4C2[jWKktj2]);
    printf ("%0.2f", dKbd4C2[RGFwDXS5 -1]);
    return 0;
}

