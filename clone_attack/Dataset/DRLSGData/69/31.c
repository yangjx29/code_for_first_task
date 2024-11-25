void  main () {
    int e3PmM8;
    char u7nEcPgeDMS [(1045 - 785)];
    gets (u7nEcPgeDMS);
    char NCZvgN7H0 [(595 - 335)];
    gets (NCZvgN7H0);
    char rDai2Mt [260];
    int IAnQy1G4qwe3;
    int vhfmwrsVGJoL;
    int b2NpQPFR;
    int kuNrmR;
    int RhldOHskrI1i;
    int Bmo91JS;
    int Wst4gvoXr;
    Wst4gvoXr = (794 - 794);
    IAnQy1G4qwe3 = (929 - 929);
    vhfmwrsVGJoL = strlen (u7nEcPgeDMS);
    b2NpQPFR = strlen (NCZvgN7H0);
    RhldOHskrI1i = (b2NpQPFR <= vhfmwrsVGJoL) ? vhfmwrsVGJoL : b2NpQPFR;
    for (e3PmM8 = (124 - 124); e3PmM8 <= RhldOHskrI1i; e3PmM8 = e3PmM8 + 1) {
        if ((365 - 365) > b2NpQPFR - (519 - 518) - e3PmM8)
            NCZvgN7H0[b2NpQPFR - (683 - 682) - e3PmM8] = '0';
        if ((138 - 138) > vhfmwrsVGJoL - 1 - e3PmM8)
            u7nEcPgeDMS[vhfmwrsVGJoL - 1 - e3PmM8] = '0';
        kuNrmR = u7nEcPgeDMS[vhfmwrsVGJoL - 1 - e3PmM8] + NCZvgN7H0[b2NpQPFR - 1 - e3PmM8] + IAnQy1G4qwe3 -96;
        if ((289 - 280) >= kuNrmR) {
            rDai2Mt[e3PmM8] = kuNrmR;
            IAnQy1G4qwe3 = 0;
        }
        else {
            IAnQy1G4qwe3 = 1;
            kuNrmR = kuNrmR - 10;
            rDai2Mt[e3PmM8] = kuNrmR;
        }
    }
    for (Bmo91JS = RhldOHskrI1i; Bmo91JS > 0; Bmo91JS = Bmo91JS -1) {
        if (rDai2Mt[Bmo91JS] == 0 && Wst4gvoXr == 0)
            continue;
        else {
            Wst4gvoXr = 1;
            printf ("%d", rDai2Mt[Bmo91JS]);
        }
    }
    printf ("%d", rDai2Mt[0]);
}

