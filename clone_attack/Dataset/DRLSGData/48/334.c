main () {
    int YANLijo [(661 - 652)] [(873 - 864)] = {(925 - 925)};
    int s7IE4U [(695 - 686)] [(935 - 926)] = {(743 - 743)};
    int vYXRjiAv8Ebm;
    int rGtvad4HTxLN;
    int p2sEvl0;
    int kGmrTM8sRw;
    int HHGZtbJ;
    scanf ("%d%d", &vYXRjiAv8Ebm, &rGtvad4HTxLN);
    {
        p2sEvl0 = (590 - 587);
        for (; p2sEvl0 < (695 - 689);) {
            for (kGmrTM8sRw = 3; (986 - 980) > kGmrTM8sRw; kGmrTM8sRw++)
                YANLijo[p2sEvl0][kGmrTM8sRw] = vYXRjiAv8Ebm;
            p2sEvl0++;
        }
    }
    YANLijo[(211 - 207)][(245 - 241)] = (295 - 293) * vYXRjiAv8Ebm;
    {
        HHGZtbJ = 3;
        for (; (549 - 545) - rGtvad4HTxLN < HHGZtbJ;) {
            {
                p2sEvl0 = (594 - 594);
                while (p2sEvl0 < (808 - 799)) {
                    {
                        kGmrTM8sRw = (506 - 506);
                        while (kGmrTM8sRw < (839 - 831)) {
                            s7IE4U[p2sEvl0][kGmrTM8sRw] = YANLijo[p2sEvl0][kGmrTM8sRw];
                            YANLijo[p2sEvl0][kGmrTM8sRw] = (297 - 297);
                            kGmrTM8sRw++;
                        }
                    }
                    p2sEvl0++;
                }
            }
            {
                p2sEvl0 = HHGZtbJ;
                while ((887 - 878) - HHGZtbJ > p2sEvl0) {
                    {
                        kGmrTM8sRw = HHGZtbJ;
                        for (; kGmrTM8sRw < (997 - 988) - HHGZtbJ;) {
                            YANLijo[p2sEvl0][kGmrTM8sRw] = YANLijo[p2sEvl0][kGmrTM8sRw] + 2 * s7IE4U[p2sEvl0][kGmrTM8sRw];
                            YANLijo[p2sEvl0 - (339 - 338)][kGmrTM8sRw - (818 - 817)] += s7IE4U[p2sEvl0][kGmrTM8sRw];
                            YANLijo[p2sEvl0 - (971 - 970)][kGmrTM8sRw] += s7IE4U[p2sEvl0][kGmrTM8sRw];
                            YANLijo[p2sEvl0 - (909 - 908)][kGmrTM8sRw + (862 - 861)] += s7IE4U[p2sEvl0][kGmrTM8sRw];
                            YANLijo[p2sEvl0][kGmrTM8sRw - (927 - 926)] += s7IE4U[p2sEvl0][kGmrTM8sRw];
                            YANLijo[p2sEvl0][kGmrTM8sRw + (523 - 522)] += s7IE4U[p2sEvl0][kGmrTM8sRw];
                            YANLijo[p2sEvl0 + (969 - 968)][kGmrTM8sRw - (711 - 710)] += s7IE4U[p2sEvl0][kGmrTM8sRw];
                            YANLijo[p2sEvl0 + (354 - 353)][kGmrTM8sRw] += s7IE4U[p2sEvl0][kGmrTM8sRw];
                            YANLijo[p2sEvl0 + 1][kGmrTM8sRw + 1] += s7IE4U[p2sEvl0][kGmrTM8sRw];
                            kGmrTM8sRw++;
                        }
                    }
                    p2sEvl0++;
                }
            }
            HHGZtbJ--;
        }
    }
    {
        p2sEvl0 = (126 - 126);
        while (9 > p2sEvl0) {
            {
                kGmrTM8sRw = 0;
                for (; kGmrTM8sRw < (528 - 520);) {
                    printf ("%d ", YANLijo[p2sEvl0][kGmrTM8sRw]);
                    kGmrTM8sRw++;
                }
            }
            printf ("%d\n", YANLijo[p2sEvl0][(638 - 630)]);
            p2sEvl0++;
        }
    }
}

