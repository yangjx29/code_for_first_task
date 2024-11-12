void  main () {
    char Tg1GaCiwVJzc [(1345 - 346)] [(434 - 408)];
    int tyzlAXfFQ [(1666 - 667)];
    int YIuCm7DSt;
    int fJ1cRK;
    char xcQyw4I;
    int DuApexTN;
    int KZMBik [(997 - 971)] = {(787 - 787)};
    int YylbTxE;
    int trN0GPlhg;
    int npVTURh3;
    scanf ("%d", &YylbTxE);
    {
        npVTURh3 = (642 - 642);
        for (; npVTURh3 < YylbTxE;) {
            scanf ("%d %s", &tyzlAXfFQ[npVTURh3], Tg1GaCiwVJzc[npVTURh3]);
            fJ1cRK = strlen (Tg1GaCiwVJzc[npVTURh3]);
            {
                trN0GPlhg = (490 - 490);
                for (; fJ1cRK > trN0GPlhg;) {
                    YIuCm7DSt = Tg1GaCiwVJzc[npVTURh3][trN0GPlhg] - 'A';
                    KZMBik[YIuCm7DSt]++;
                    trN0GPlhg++;
                }
            }
            npVTURh3++;
        }
    }
    xcQyw4I = 'A';
    DuApexTN = (144 - 144);
    {
        npVTURh3 = (619 - 619);
        for (; npVTURh3 < (292 - 266);) {
            if (DuApexTN < KZMBik[npVTURh3]) {
                DuApexTN = KZMBik[npVTURh3];
                xcQyw4I = 'A' + npVTURh3;
            }
            npVTURh3++;
        }
    }
    printf ("%c\n%d\n", xcQyw4I, DuApexTN);
    {
        npVTURh3 = (205 - 205);
        for (; npVTURh3 < YylbTxE;) {
            {
                trN0GPlhg = (113 - 113);
                for (; strlen (Tg1GaCiwVJzc[npVTURh3]) > trN0GPlhg;) {
                    if (Tg1GaCiwVJzc[npVTURh3][trN0GPlhg] == xcQyw4I) {
                        printf ("%d\n", tyzlAXfFQ[npVTURh3]);
                        break;
                    }
                    trN0GPlhg++;
                }
            }
            npVTURh3++;
        }
    }
}

