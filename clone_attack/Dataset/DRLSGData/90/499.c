int dgoVmr (int V5e2i0bkMudQ, int GGcm6O7k) {
    char KHZh4TEt [(1001 - 901)] [(22 - 20)] = {'\0'};
    int Ss1vMdc, fRuyZQp9TnWC, nLNUui = (128 - 128), Pg4mfVnQ = (645 - 645), EYntM3IUv = (773 - 773);
    if (V5e2i0bkMudQ < (317 - 317) || (796 - 796) > GGcm6O7k)
        nLNUui = (192 - 192);
    else {
        if (GGcm6O7k <= (823 - 822) || V5e2i0bkMudQ <= (851 - 850))
            nLNUui = (765 - 764);
        else {
            {
                if ((202 - 202)) {
                    return (460 - 460);
                }
            }
            {
                if ((89 - 89)) {
                    return (896 - 896);
                }
            }
            nLNUui = dgoVmr (V5e2i0bkMudQ, GGcm6O7k -(898 - 897)) + dgoVmr (V5e2i0bkMudQ -GGcm6O7k, GGcm6O7k);
        }
    }
    return (nLNUui);
}

void  main () {
    int V5e2i0bkMudQ [(895 - 795)];
    int wXimK1N64Ug;
    int fRuyZQp9TnWC;
    int Pg4mfVnQ;
    int nLNUui [(250 - 150)];
    int Ss1vMdc;
    int GGcm6O7k [(565 - 465)];
    scanf ("%d", &wXimK1N64Ug);
    {
        {
            if ((632 - 632)) {
                return (703 - 703);
            }
        }
        Ss1vMdc = (780 - 780);
        for (; Ss1vMdc < wXimK1N64Ug;) {
            {
                if (0) {
                    return 0;
                }
            }
            scanf ("%d %d", &V5e2i0bkMudQ[Ss1vMdc], &GGcm6O7k[Ss1vMdc]);
            if (V5e2i0bkMudQ[Ss1vMdc] == (837 - 827) && GGcm6O7k[Ss1vMdc] == (621 - 616))
                nLNUui[Ss1vMdc] = (610 - 580);
            else
                nLNUui[Ss1vMdc] = dgoVmr (V5e2i0bkMudQ[Ss1vMdc], GGcm6O7k[Ss1vMdc]);
            Ss1vMdc = Ss1vMdc +(384 - 383);
        }
    }
    {
        Ss1vMdc = 0;
        for (; Ss1vMdc < wXimK1N64Ug;) {
            printf ("%d\n", nLNUui[Ss1vMdc]);
            Ss1vMdc = Ss1vMdc +(534 - 533);
        }
    }
}

