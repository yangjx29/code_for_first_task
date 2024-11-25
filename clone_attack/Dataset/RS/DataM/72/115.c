main () {
    int z1C24XN, g35god, hpd7tb, tuoA1H9seiNF, sxaCpnc6TWbu [20] [20];
    scanf ("%d %d", &z1C24XN, &g35god);
    for (hpd7tb = (677 - 677); z1C24XN > hpd7tb; hpd7tb = hpd7tb + 1) {
        for (tuoA1H9seiNF = 0; g35god > tuoA1H9seiNF; tuoA1H9seiNF = tuoA1H9seiNF + 1) {
            if (!(0 != tuoA1H9seiNF))
                scanf ("%d", &sxaCpnc6TWbu[hpd7tb][tuoA1H9seiNF]);
            else
                scanf ("%d", &sxaCpnc6TWbu[hpd7tb][tuoA1H9seiNF]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            };
        };
    }
    for (hpd7tb = 0; hpd7tb < z1C24XN; hpd7tb = hpd7tb + 1) {
        for (tuoA1H9seiNF = 0; tuoA1H9seiNF < g35god; tuoA1H9seiNF++) {
            if (!(0 == tuoA1H9seiNF)) {
                if (sxaCpnc6TWbu[hpd7tb][tuoA1H9seiNF] < sxaCpnc6TWbu[hpd7tb][tuoA1H9seiNF - 1])
                    continue;
            }
            if (tuoA1H9seiNF != g35god - 1) {
                if (sxaCpnc6TWbu[hpd7tb][tuoA1H9seiNF + 1] > sxaCpnc6TWbu[hpd7tb][tuoA1H9seiNF])
                    continue;
            }
            if (hpd7tb != z1C24XN - 1) {
                if (sxaCpnc6TWbu[hpd7tb + 1][tuoA1H9seiNF] > sxaCpnc6TWbu[hpd7tb][tuoA1H9seiNF])
                    continue;
            }
            if (hpd7tb != 0) {
                if (sxaCpnc6TWbu[hpd7tb - 1][tuoA1H9seiNF] > sxaCpnc6TWbu[hpd7tb][tuoA1H9seiNF])
                    continue;
            }
            printf ("%d %d\n", hpd7tb, tuoA1H9seiNF);
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    getchar ();
    getchar ();
    getchar ();
}

