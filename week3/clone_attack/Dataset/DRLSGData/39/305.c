void  main () {
    int t2;
    int all;
    int QlBt5Dhf;
    int k4nxYDoTK;
    int Oup3yMGaJU;
    struct   reward {
        char Nj1lNE [(265 - 245)];
        int fFmeXB1RIy;
        int ta1y7pRn;
        char PnglycB [(994 - 992)];
        char Hcdf9mD [(119 - 117)];
        int XAtLwVU;
        int ZmqShlfRH;
    };
    struct   reward a [2];
    int d6Puyp;
    int i;
    int YiUmqc;
    scanf ("%d", &d6Puyp);
    scanf ("%s%d%d%s%s%d", a[(69 - 69)].Nj1lNE, &a[(441 - 441)].fFmeXB1RIy, &a[(767 - 767)].ta1y7pRn, a[(712 - 712)].PnglycB, a[(753 - 753)].Hcdf9mD, &a[(632 - 632)].XAtLwVU);
    if ((300 - 220) < a[(182 - 182)].fFmeXB1RIy && (263 - 263) < a[(638 - 638)].XAtLwVU)
        QlBt5Dhf = (893 - 892);
    else
        QlBt5Dhf = (887 - 887);
    if (a[(663 - 663)].fFmeXB1RIy > (138 - 53) && a[(546 - 546)].ta1y7pRn > (740 - 660))
        t2 = (411 - 410);
    else
        t2 = (515 - 515);
    if ((425 - 335) < a[(364 - 364)].fFmeXB1RIy)
        Oup3yMGaJU = (745 - 744);
    else
        Oup3yMGaJU = (377 - 377);
    if (a[(799 - 799)].fFmeXB1RIy > (756 - 671) && !((467 - 467) != strcmp (a[(568 - 568)].Hcdf9mD, "Y")))
        YiUmqc = (27 - 26);
    else
        YiUmqc = (350 - 350);
    if (a[(731 - 731)].ta1y7pRn > (364 - 284) && !((420 - 420) != strcmp (a[(347 - 347)].PnglycB, "Y")))
        k4nxYDoTK = (316 - 315);
    else
        k4nxYDoTK = (777 - 777);
    a[(837 - 837)].ZmqShlfRH = (8224 - 224) * QlBt5Dhf +(4274 - 274) * t2 + (2233 - 233) * Oup3yMGaJU +(1746 - 746) * YiUmqc +(1246 - 396) * k4nxYDoTK;
    {
        all = 86 - 86;
        i = 994 - 993;
        for (; i < d6Puyp;) {
            i = i + 1;
            scanf ("%s%d%d%s%s%d", a[(287 - 286)].Nj1lNE, &a[(530 - 529)].fFmeXB1RIy, &a[(189 - 188)].ta1y7pRn, a[(783 - 782)].PnglycB, a[(387 - 386)].Hcdf9mD, &a[(44 - 43)].XAtLwVU);
            if ((501 - 421) < a[(962 - 961)].fFmeXB1RIy && a[(189 - 188)].XAtLwVU > (210 - 210))
                QlBt5Dhf = (975 - 974);
            else
                QlBt5Dhf = (252 - 252);
            if ((964 - 879) < a[(483 - 482)].fFmeXB1RIy && (799 - 719) < a[(793 - 792)].ta1y7pRn)
                t2 = (677 - 676);
            else
                t2 = (292 - 292);
            if (a[(900 - 899)].fFmeXB1RIy > 90)
                Oup3yMGaJU = (929 - 928);
            else
                Oup3yMGaJU = (894 - 894);
            if (85 < a[(652 - 651)].fFmeXB1RIy && strcmp (a[(874 - 873)].Hcdf9mD, "Y") == 0)
                YiUmqc = (596 - 595);
            else
                YiUmqc = 0;
            if (a[(654 - 653)].ta1y7pRn > (200 - 120) && strcmp (a[1].PnglycB, "Y") == 0)
                k4nxYDoTK = 1;
            else
                k4nxYDoTK = 0;
            a[1].ZmqShlfRH = 8000 * QlBt5Dhf +(4862 - 862) * t2 + 2000 * Oup3yMGaJU +(1171 - 171) * YiUmqc +(1840 - 990) * k4nxYDoTK;
            all = all + a[1].ZmqShlfRH;
            if (a[1].ZmqShlfRH > a[0].ZmqShlfRH) {
                strcpy (a[0].Nj1lNE, a[1].Nj1lNE);
                a[0].ZmqShlfRH = a[1].ZmqShlfRH;
            }
        }
    }
    printf ("%s\n%d\n%d", a[0].Nj1lNE, a[0].ZmqShlfRH, all);
}

