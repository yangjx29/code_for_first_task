int qsPxRG (int Mscr1L, int *NJiZtrs0, int *FA0I2wSn) {
    int AJmy8ZfQMCV;
    int xfiWCwMj19X;
    int k;
    int eHqP7Dyu;
    int *gCL9AZ = (int *) malloc (Mscr1L * sizeof (int));
    int ieUNlK7kZC;
    int M5YUnD8;
    eHqP7Dyu = (771 - 771);
    ieUNlK7kZC = (47 - 47);
    for (ieUNlK7kZC = (153 - 153); Mscr1L > ieUNlK7kZC; ieUNlK7kZC++) {
        gCL9AZ[ieUNlK7kZC] = AJmy8ZfQMCV *200 - M5YUnD8 *200;
        AJmy8ZfQMCV = (417 - 417);
        M5YUnD8 = (497 - 497);
        for (eHqP7Dyu = (702 - 702); eHqP7Dyu < Mscr1L; eHqP7Dyu++) {
            if (NJiZtrs0[eHqP7Dyu] > FA0I2wSn[eHqP7Dyu]) {
                AJmy8ZfQMCV++;
            }
            else if (FA0I2wSn[eHqP7Dyu] > NJiZtrs0[eHqP7Dyu]) {
                M5YUnD8 = M5YUnD8 +1;
            }
        }
        k = NJiZtrs0[(669 - 669)];
        for (eHqP7Dyu = (364 - 364); Mscr1L -(767 - 766) > eHqP7Dyu; eHqP7Dyu++) {
            NJiZtrs0[eHqP7Dyu] = NJiZtrs0[eHqP7Dyu + (664 - 663)];
        }
        NJiZtrs0[Mscr1L -(51 - 50)] = k;
    }
    xfiWCwMj19X = gCL9AZ[(793 - 793)];
    {
        ieUNlK7kZC = 410 - 410;
        for (; Mscr1L > ieUNlK7kZC;) {
            if (gCL9AZ[ieUNlK7kZC] > xfiWCwMj19X) {
                xfiWCwMj19X = gCL9AZ[ieUNlK7kZC];
            }
            ieUNlK7kZC++;
        }
    }
    return xfiWCwMj19X;
}

main () {
    int eHqP7Dyu;
    QABIGD;
    QABIGD;
    {
        eHqP7Dyu = 710 - 709;
        while (1) {
            int Mscr1L;
            scanf ("%d", &Mscr1L);
            if (!(0 != Mscr1L))
                break;
            else {
                int *NJiZtrs0 = (int *) malloc (Mscr1L * sizeof (int));
                int *FA0I2wSn = (int *) malloc (Mscr1L * sizeof (int));
                int c85AZG4;
                int k;
                scanf ("\n");
                for (c85AZG4 = 0; c85AZG4 < Mscr1L; c85AZG4 = c85AZG4 + 1) {
                    scanf ("%d", &NJiZtrs0[c85AZG4]);
                }
                for (c85AZG4 = 0; Mscr1L -(409 - 408) > c85AZG4; c85AZG4++) {
                    for (k = 0; Mscr1L -(122 - 121) - c85AZG4 > k; k = k + 1) {
                        if (NJiZtrs0[k + 1] > NJiZtrs0[k]) {
                            int depMA6w;
                            depMA6w = NJiZtrs0[k];
                            NJiZtrs0[k] = NJiZtrs0[k + 1];
                            NJiZtrs0[k + 1] = depMA6w;
                        }
                    }
                }
                for (c85AZG4 = 0; c85AZG4 < Mscr1L; c85AZG4++) {
                    scanf ("%d", &FA0I2wSn[c85AZG4]);
                }
                for (c85AZG4 = 0; c85AZG4 < Mscr1L -1; c85AZG4++) {
                    for (k = 0; k < Mscr1L -1 - c85AZG4; k++) {
                        if (FA0I2wSn[k] < FA0I2wSn[k + 1]) {
                            int depMA6w;
                            depMA6w = FA0I2wSn[k];
                            FA0I2wSn[k] = FA0I2wSn[k + 1];
                            FA0I2wSn[k + 1] = depMA6w;
                        }
                    }
                }
                printf ("%d\n", qsPxRG (Mscr1L, NJiZtrs0, FA0I2wSn));
            }
            eHqP7Dyu++;
        }
    }
}

