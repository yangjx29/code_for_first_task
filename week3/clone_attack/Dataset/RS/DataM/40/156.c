int main () {
    double  geEbj7h0;
    double  lDpCzoI4;
    double  NUPxtpo;
    double  oQ4LTVFJuXj;
    double  C5fG92y7o;
    double  BerhYQsyc;
    double  AUKu2mdio;
    double  aerfa;
    double  PrXesQZOMcN (double  NUPxtpo, double  oQ4LTVFJuXj, double  C5fG92y7o, double  BerhYQsyc, double  aerfa);
    scanf ("%lf %lf %lf %lf %lf", &NUPxtpo, &oQ4LTVFJuXj, &C5fG92y7o, &BerhYQsyc, &AUKu2mdio);
    aerfa = AUKu2mdio / 180 * PI / 2;
    geEbj7h0 = (NUPxtpo +oQ4LTVFJuXj + C5fG92y7o +BerhYQsyc) / 2;
    if (((geEbj7h0 - NUPxtpo) * (geEbj7h0 - oQ4LTVFJuXj) * (geEbj7h0 - C5fG92y7o) * (geEbj7h0 - BerhYQsyc) - NUPxtpo *oQ4LTVFJuXj * C5fG92y7o *BerhYQsyc*cos (aerfa) * cos (aerfa)) < 0)
        ;
    else {
        lDpCzoI4 = PrXesQZOMcN (NUPxtpo, oQ4LTVFJuXj, C5fG92y7o, BerhYQsyc, aerfa);
        printf ("%.4lf\n", lDpCzoI4);
    }
    return 0;
}

double  PrXesQZOMcN (double  NUPxtpo, double  oQ4LTVFJuXj, double  C5fG92y7o, double  BerhYQsyc, double  aerfa) {
    double  geEbj7h0;
    double  lDpCzoI4;
    geEbj7h0 = (NUPxtpo +oQ4LTVFJuXj + C5fG92y7o +BerhYQsyc) / 2;
    for (; ((geEbj7h0 - NUPxtpo) * (geEbj7h0 - oQ4LTVFJuXj) * (geEbj7h0 - C5fG92y7o) * (geEbj7h0 - BerhYQsyc) - NUPxtpo *oQ4LTVFJuXj * C5fG92y7o *BerhYQsyc*cos (aerfa) * cos (aerfa)) >= 0;) {
        lDpCzoI4 = sqrt ((geEbj7h0 - NUPxtpo) * (geEbj7h0 - oQ4LTVFJuXj) * (geEbj7h0 - C5fG92y7o) * (geEbj7h0 - BerhYQsyc) - NUPxtpo *oQ4LTVFJuXj * C5fG92y7o *BerhYQsyc*cos (aerfa) * cos (aerfa));
        break;
    }
    return lDpCzoI4;
}

