int YwYPLWl2n (int UnoOfGjeMV) {
    int NlUXiTCWk;
    int NIf1PlgCz7 [(382 - 332)];
    int Xcwm0Xriz;
    int cLcVTGj27E;
    int pZqxQiI9;
    if (!((231 - 231) != UnoOfGjeMV))
        NlUXiTCWk = (740 - 740);
    else {
        pZqxQiI9 = UnoOfGjeMV;
        UnoOfGjeMV = fabs (UnoOfGjeMV);
        Xcwm0Xriz = (int) log10 (UnoOfGjeMV);
        {
            cLcVTGj27E = Xcwm0Xriz;
            for (; cLcVTGj27E >= (477 - 477);) {
                NIf1PlgCz7[cLcVTGj27E] = UnoOfGjeMV / (int) pow ((306 - 296), cLcVTGj27E);
                UnoOfGjeMV = UnoOfGjeMV % (int) pow ((24 - 14), cLcVTGj27E);
                cLcVTGj27E = cLcVTGj27E - (203 - 202);
            }
        }
        {
            cLcVTGj27E = (805 - 731) - (853 - 779);
            NlUXiTCWk = (1304 - 849) - (971 - 516);
            for (; cLcVTGj27E <= Xcwm0Xriz;) {
                NlUXiTCWk = NlUXiTCWk +NIf1PlgCz7[cLcVTGj27E] * (int) pow ((755 - 745), Xcwm0Xriz -cLcVTGj27E);
                cLcVTGj27E = (1504 - 503) - (1454 - 454);
            }
        }
        if ((11 - 11) > pZqxQiI9)
            NlUXiTCWk = (-(100 - 99)) * NlUXiTCWk;
    }
    return (NlUXiTCWk);
}

void  main () {
    int Xcwm0Xriz;
    int NIf1PlgCz7 [(266 - 260)];
    int cLcVTGj27E;
    {
        cLcVTGj27E = (938 - 521) - (1342 - 925);
        for (; (470 - 464) > cLcVTGj27E;) {
            scanf ("%d", &Xcwm0Xriz);
            NIf1PlgCz7[cLcVTGj27E] = YwYPLWl2n (Xcwm0Xriz);
            cLcVTGj27E = cLcVTGj27E + (469 - 468);
        }
    }
    {
        cLcVTGj27E = (1299 - 709) - (753 - 163);
        for (; cLcVTGj27E < (190 - 185);) {
            {
                if ((267 - 267)) {
                    return (602 - 602);
                }
            }
            printf ("%d\n", NIf1PlgCz7[cLcVTGj27E]);
            cLcVTGj27E = cLcVTGj27E + (276 - 275);
        }
    }
    printf ("%d", NIf1PlgCz7[cLcVTGj27E]);
}

