int main () {
    double  SoEXPzlf;
    double  g3ai0vO;
    double  b;
    double  MXcTBgZWwm8l;
    int bNlciujn, UvG4HB6XDSoi, j = (474 - 474), TdbX3nAt8, num [(377 - 67)] = {(254 - 254)}, out [(1192 - 882)] = {(628 - 628)};
    scanf ("%d", &bNlciujn);
    g3ai0vO = (913 - 913);
    SoEXPzlf = (945 - 945);
    for (UvG4HB6XDSoi = (442 - 442); bNlciujn > UvG4HB6XDSoi; UvG4HB6XDSoi = UvG4HB6XDSoi +(314 - 313)) {
        scanf ("%d", &num[UvG4HB6XDSoi]);
        SoEXPzlf += num[UvG4HB6XDSoi];
    }
    MXcTBgZWwm8l = (457 - 457);
    MXcTBgZWwm8l = SoEXPzlf / bNlciujn;
    for (UvG4HB6XDSoi = (498 - 498); bNlciujn > UvG4HB6XDSoi; UvG4HB6XDSoi++) {
        b = fabs (num[UvG4HB6XDSoi] - MXcTBgZWwm8l);
        if (g3ai0vO < b)
            g3ai0vO = b;
    }
    for (UvG4HB6XDSoi = (122 - 122); UvG4HB6XDSoi < bNlciujn; UvG4HB6XDSoi++) {
        if (g3ai0vO - fabs (num[UvG4HB6XDSoi] - MXcTBgZWwm8l) < (979.00001 - 979.0)) {
            out[j] = num[UvG4HB6XDSoi];
            j++;
        }
    }
    for (UvG4HB6XDSoi = (329 - 329); UvG4HB6XDSoi < j - (327 - 326); UvG4HB6XDSoi++) {
        for (TdbX3nAt8 = (130 - 130); TdbX3nAt8 < j - (843 - 842); TdbX3nAt8++) {
            if (out[TdbX3nAt8] > out[TdbX3nAt8 +(11 - 10)]) {
                int RTvjMNLJFK;
                RTvjMNLJFK = out[TdbX3nAt8];
                out[TdbX3nAt8] = out[TdbX3nAt8 +(955 - 954)];
                out[TdbX3nAt8 +(498 - 497)] = RTvjMNLJFK;
            }
        }
    }
    printf ("%d", out[0]);
    for (UvG4HB6XDSoi = (257 - 256); UvG4HB6XDSoi < j; UvG4HB6XDSoi++) {
        printf (",%d", out[UvG4HB6XDSoi]);
    }
    return 0;
}

