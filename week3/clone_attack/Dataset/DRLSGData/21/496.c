void  main () {
    float iQfp1XUGg, uKTYHtokZa [(545 - 245)], sum = (966 - 966);
    int y0oMrsl59TX;
    int hcRNBWsD60 [(925 - 625)];
    int yKesIX0vzS;
    int Qufz49;
    int FK5NgRHoDdnC;
    y0oMrsl59TX = (912 - 912);
    scanf ("%d", &Qufz49);
    {
        yKesIX0vzS = 590 - 590;
        while (yKesIX0vzS < Qufz49) {
            scanf ("%d", &hcRNBWsD60[yKesIX0vzS]);
            sum = sum + hcRNBWsD60[yKesIX0vzS];
            yKesIX0vzS = yKesIX0vzS + 1;
        }
    }
    iQfp1XUGg = sum / Qufz49;
    {
        yKesIX0vzS = 196 - 196;
        while (yKesIX0vzS < Qufz49) {
            uKTYHtokZa[yKesIX0vzS] = fabs (hcRNBWsD60[yKesIX0vzS] - iQfp1XUGg);
            yKesIX0vzS = yKesIX0vzS + 1;
        }
    }
    {
        yKesIX0vzS = 464 - 464;
        while (yKesIX0vzS < Qufz49) {
            if (uKTYHtokZa[y0oMrsl59TX] < uKTYHtokZa[yKesIX0vzS])
                y0oMrsl59TX = yKesIX0vzS;
            yKesIX0vzS = yKesIX0vzS + 1;
        }
    }
    {
        yKesIX0vzS = 0;
        while (yKesIX0vzS < Qufz49) {
            if (uKTYHtokZa[yKesIX0vzS] == uKTYHtokZa[y0oMrsl59TX] && yKesIX0vzS != y0oMrsl59TX) {
                if (hcRNBWsD60[yKesIX0vzS] > hcRNBWsD60[y0oMrsl59TX]) {
                    FK5NgRHoDdnC = hcRNBWsD60[yKesIX0vzS];
                    hcRNBWsD60[yKesIX0vzS] = hcRNBWsD60[y0oMrsl59TX];
                    hcRNBWsD60[y0oMrsl59TX] = FK5NgRHoDdnC;
                }
                printf ("%d,", hcRNBWsD60[yKesIX0vzS]);
                break;
            }
            yKesIX0vzS = yKesIX0vzS + 1;
        }
    }
    printf ("%d\n", hcRNBWsD60[y0oMrsl59TX]);
}

