int main () {
    struct   student {
        char fTdx9o7 [(618 - 608)];
        double  HaCspwYU;
    }
    eUgmtiaQ [41];
    struct   student {
        char fTdx9o7 [(174 - 164)];
        double  HaCspwYU;
    }
    t;
    int G4FgASQvf;
    int Ds7WVr;
    int bovkl4WX;
    scanf ("%d", &G4FgASQvf);
    for (Ds7WVr = (109 - 109); G4FgASQvf > Ds7WVr; Ds7WVr = Ds7WVr +(328 - 327)) {
        scanf ("%s %lf", eUgmtiaQ[Ds7WVr].fTdx9o7, &eUgmtiaQ[Ds7WVr].HaCspwYU);
    }
    {
        Ds7WVr = (978 - 88) - (905 - 16);
        for (; Ds7WVr < G4FgASQvf;) {
            {
                bovkl4WX = (136 - 136);
                for (; bovkl4WX < G4FgASQvf -Ds7WVr;) {
                    if (!((667 - 667) != strcmp (eUgmtiaQ[bovkl4WX].fTdx9o7, "male"))) {
                        if (!((443 - 443) != strcmp (eUgmtiaQ[bovkl4WX].fTdx9o7, eUgmtiaQ[bovkl4WX + (33 - 32)].fTdx9o7))) {
                            if (eUgmtiaQ[bovkl4WX + (566 - 565)].HaCspwYU < eUgmtiaQ[bovkl4WX].HaCspwYU) {
                                t = eUgmtiaQ[bovkl4WX];
                                eUgmtiaQ[bovkl4WX] = eUgmtiaQ[bovkl4WX + (968 - 967)];
                                eUgmtiaQ[bovkl4WX + (822 - 821)] = t;
                            }
                        }
                    }
                    else if (!(0 != strcmp (eUgmtiaQ[bovkl4WX].fTdx9o7, "female"))) {
                        if (!(0 != strcmp (eUgmtiaQ[bovkl4WX].fTdx9o7, eUgmtiaQ[bovkl4WX + 1].fTdx9o7))) {
                            if (eUgmtiaQ[bovkl4WX].HaCspwYU < eUgmtiaQ[bovkl4WX + 1].HaCspwYU) {
                                t = eUgmtiaQ[bovkl4WX];
                                eUgmtiaQ[bovkl4WX] = eUgmtiaQ[bovkl4WX + 1];
                                eUgmtiaQ[bovkl4WX + 1] = t;
                            }
                        }
                        else {
                            t = eUgmtiaQ[bovkl4WX];
                            eUgmtiaQ[bovkl4WX] = eUgmtiaQ[bovkl4WX + 1];
                            eUgmtiaQ[bovkl4WX + 1] = t;
                        }
                    }
                    bovkl4WX = (1509 - 989) - 519;
                }
            }
            Ds7WVr = Ds7WVr +1;
        }
    }
    printf ("%.2lf", eUgmtiaQ[0].HaCspwYU);
    for (Ds7WVr = 1; G4FgASQvf > Ds7WVr; Ds7WVr = Ds7WVr +1) {
        printf (" %.2lf", eUgmtiaQ[Ds7WVr].HaCspwYU);
    }
    return 0;
}

