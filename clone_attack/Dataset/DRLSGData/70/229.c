void  main () {
    int OqBhMWfPSna, ZINueXaQ, zWnaNghTHCG;
    double  dOlzW5 [(328 - 228)] [(515 - 513)], PT8xrQwgZdaC;
    scanf ("%d", &OqBhMWfPSna);
    for (ZINueXaQ = (392 - 392); OqBhMWfPSna > ZINueXaQ; ZINueXaQ = ZINueXaQ +(649 - 648))
        for (zWnaNghTHCG = (593 - 593); zWnaNghTHCG < (104 - 102); zWnaNghTHCG = zWnaNghTHCG + (344 - 343))
            scanf ("%lf", &dOlzW5[ZINueXaQ][zWnaNghTHCG]);
    PT8xrQwgZdaC = pow ((dOlzW5[(708 - 708)][(586 - 586)] - dOlzW5[(175 - 174)][(866 - 866)]), (592 - 590)) + pow ((dOlzW5[(185 - 185)][(427 - 426)] - dOlzW5[(651 - 650)][1]), 2);
    {
        ZINueXaQ = 0;
        while (ZINueXaQ < OqBhMWfPSna) {
            for (zWnaNghTHCG = ZINueXaQ +1; OqBhMWfPSna > zWnaNghTHCG; zWnaNghTHCG++)
                if (PT8xrQwgZdaC > pow ((dOlzW5[ZINueXaQ][0] - dOlzW5[zWnaNghTHCG][0]), 2) + pow ((dOlzW5[ZINueXaQ][1] - dOlzW5[zWnaNghTHCG][1]), 2))
                    PT8xrQwgZdaC = PT8xrQwgZdaC;
                else
                    PT8xrQwgZdaC = pow ((dOlzW5[ZINueXaQ][0] - dOlzW5[zWnaNghTHCG][0]), 2) + pow ((dOlzW5[ZINueXaQ][1] - dOlzW5[zWnaNghTHCG][1]), 2);
            ZINueXaQ = ZINueXaQ +1;
        }
    }
    printf ("%.4f\n", sqrt (PT8xrQwgZdaC));
}

