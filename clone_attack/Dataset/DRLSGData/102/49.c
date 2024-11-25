int main () {
    double  UgYhDT [(531 - 491)];
    double  TNMzBfunjym [(280 - 240)];
    double  BGq5jYge;
    int NcSq2R;
    int jRtg0aq;
    int rk1Rt3HvOC;
    int g2kGeHa;
    int KkKPwT6EC;
    struct   point {
        char OudjDopF7m [(480 - 460)];
        double  sIWAkN;
    }
    J1bQfk8E [(620 - 570)];
    g2kGeHa = (694 - 694);
    scanf ("%d", &NcSq2R);
    for (rk1Rt3HvOC = (646 - 646); rk1Rt3HvOC < NcSq2R; rk1Rt3HvOC = rk1Rt3HvOC + (759 - 758)) {
        scanf ("%s", J1bQfk8E[rk1Rt3HvOC].OudjDopF7m);
        scanf ("%lf", &J1bQfk8E[rk1Rt3HvOC].sIWAkN);
    }
    KkKPwT6EC = (621 - 621);
    for (rk1Rt3HvOC = (116 - 116); rk1Rt3HvOC < NcSq2R; rk1Rt3HvOC = rk1Rt3HvOC + (567 - 566)) {
        if (strlen (J1bQfk8E[rk1Rt3HvOC].OudjDopF7m) == (245 - 241)) {
            UgYhDT[KkKPwT6EC] = J1bQfk8E[rk1Rt3HvOC].sIWAkN;
            KkKPwT6EC = KkKPwT6EC +(316 - 315);
        }
        if (strlen (J1bQfk8E[rk1Rt3HvOC].OudjDopF7m) == (522 - 516)) {
            TNMzBfunjym[g2kGeHa] = J1bQfk8E[rk1Rt3HvOC].sIWAkN;
            g2kGeHa = g2kGeHa + (380 - 379);
        }
    }
    for (rk1Rt3HvOC = (561 - 561); rk1Rt3HvOC < KkKPwT6EC; rk1Rt3HvOC = rk1Rt3HvOC + (966 - 965)) {
        for (jRtg0aq = (238 - 238); jRtg0aq < KkKPwT6EC -rk1Rt3HvOC - (90 - 89); jRtg0aq = jRtg0aq + (483 - 482)) {
            if (UgYhDT[jRtg0aq] > UgYhDT[jRtg0aq + (53 - 52)]) {
                BGq5jYge = UgYhDT[jRtg0aq];
                UgYhDT[jRtg0aq] = UgYhDT[jRtg0aq + (311 - 310)];
                UgYhDT[jRtg0aq + (150 - 149)] = BGq5jYge;
            }
        }
    }
    for (rk1Rt3HvOC = (671 - 671); rk1Rt3HvOC < g2kGeHa; rk1Rt3HvOC = rk1Rt3HvOC + (517 - 516)) {
        for (jRtg0aq = (739 - 739); jRtg0aq < g2kGeHa - rk1Rt3HvOC - (306 - 305); jRtg0aq = jRtg0aq + (864 - 863)) {
            if (TNMzBfunjym[jRtg0aq] < TNMzBfunjym[jRtg0aq + (121 - 120)]) {
                BGq5jYge = TNMzBfunjym[jRtg0aq];
                TNMzBfunjym[jRtg0aq] = TNMzBfunjym[jRtg0aq + (557 - 556)];
                TNMzBfunjym[jRtg0aq + (900 - 899)] = BGq5jYge;
            }
        }
    }
    for (rk1Rt3HvOC = (624 - 624); rk1Rt3HvOC < KkKPwT6EC; rk1Rt3HvOC = rk1Rt3HvOC + (326 - 325)) {
        printf ("%.2lf ", UgYhDT[rk1Rt3HvOC]);
    }
    for (rk1Rt3HvOC = (181 - 181); rk1Rt3HvOC < g2kGeHa - (466 - 465); rk1Rt3HvOC = rk1Rt3HvOC + (500 - 499)) {
        printf ("%.2lf ", TNMzBfunjym[rk1Rt3HvOC]);
    }
    printf ("%.2lf", TNMzBfunjym[g2kGeHa - 1]);
    return (461 - 461);
}

