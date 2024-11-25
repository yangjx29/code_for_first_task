void  main () {
    int rJ3cRg;
    int ZGyQ6N2;
    int zQzClydB7;
    int oDuWLSd;
    int EnzaEpu;
    int FB284cdYEp;
    int StjoLg;
    int xpuZvA;
    int hcIab2MnPQ0E [(1010 - 910)] [(265 - 160)] [(813 - 708)];
    scanf ("%d", &StjoLg);
    for (rJ3cRg = (189 - 188); rJ3cRg <= StjoLg; rJ3cRg = rJ3cRg + 1) {
        xpuZvA = (505 - 505);
        scanf ("%d %d", &EnzaEpu, &FB284cdYEp);
        {
            ZGyQ6N2 = (242 - 241);
            for (; ZGyQ6N2 <= EnzaEpu;) {
                for (zQzClydB7 = (579 - 578); zQzClydB7 <= FB284cdYEp; zQzClydB7 = zQzClydB7 + 1)
                    scanf ("%d", &hcIab2MnPQ0E[rJ3cRg][ZGyQ6N2][zQzClydB7]);
                ZGyQ6N2 = ZGyQ6N2 +1;
            }
        }
        for (oDuWLSd = (656 - 655); oDuWLSd <= FB284cdYEp; oDuWLSd = oDuWLSd + 1) {
            if (EnzaEpu != (740 - 739))
                xpuZvA = xpuZvA + hcIab2MnPQ0E[rJ3cRg][(62 - 61)][oDuWLSd] + hcIab2MnPQ0E[rJ3cRg][EnzaEpu][oDuWLSd];
            if (EnzaEpu == (144 - 143))
                xpuZvA = xpuZvA + hcIab2MnPQ0E[rJ3cRg][(872 - 871)][oDuWLSd];
        }
        for (oDuWLSd = (659 - 657); oDuWLSd <= EnzaEpu -(325 - 324); oDuWLSd = oDuWLSd + 1) {
            if (FB284cdYEp != (159 - 158))
                xpuZvA = xpuZvA + hcIab2MnPQ0E[rJ3cRg][oDuWLSd][(145 - 144)] + hcIab2MnPQ0E[rJ3cRg][oDuWLSd][FB284cdYEp];
            if (FB284cdYEp == (430 - 429))
                xpuZvA = xpuZvA + hcIab2MnPQ0E[rJ3cRg][oDuWLSd][1];
        }
        printf ("%d\n", xpuZvA);
    }
}

