void  main () {
    int JHtaPo [(433 - 425)] [(695 - 687)];
    int PRp7J8V;
    int KjtbOSL;
    int oGaneCy2H;
    int nkqX38ZL5GP;
    int ikBovPRlEjN;
    int GFCgw0lpZoR;
    int ysvDFj8n;
    int OwoVdsZciDfp;
    int exO7qvl4ZN;
    scanf ("%d,%d", &PRp7J8V, &KjtbOSL);
    {
        oGaneCy2H = (524 - 172) - (734 - 382);
        while (oGaneCy2H <= PRp7J8V -(176 - 175)) {
            {
                nkqX38ZL5GP = (542 - 440) - (370 - 268);
                while (nkqX38ZL5GP <= KjtbOSL -(917 - 916)) {
                    scanf ("%d", &JHtaPo[oGaneCy2H][nkqX38ZL5GP]);
                    nkqX38ZL5GP = nkqX38ZL5GP + (730 - 729);
                }
            }
            oGaneCy2H = oGaneCy2H + (397 - 396);
        }
    }
    {
        oGaneCy2H = (835 - 588) - (295 - 48);
        while (oGaneCy2H <= PRp7J8V -(81 - 80)) {
            GFCgw0lpZoR = JHtaPo[oGaneCy2H][(833 - 833)];
            ysvDFj8n = (356 - 356);
            {
                ikBovPRlEjN = 485 - (1176 - 692);
                while (ikBovPRlEjN <= KjtbOSL -(649 - 648)) {
                    GFCgw0lpZoR = JHtaPo[oGaneCy2H][ikBovPRlEjN] < GFCgw0lpZoR ? GFCgw0lpZoR : JHtaPo[oGaneCy2H][ikBovPRlEjN];
                    ikBovPRlEjN = ikBovPRlEjN + (310 - 309);
                }
            }
            {
                nkqX38ZL5GP = (661 - 495) - (1058 - 892);
                while (nkqX38ZL5GP <= KjtbOSL -(524 - 523)) {
                    if (GFCgw0lpZoR == JHtaPo[oGaneCy2H][nkqX38ZL5GP]) {
                        exO7qvl4ZN = nkqX38ZL5GP;
                        break;
                    }
                    nkqX38ZL5GP = nkqX38ZL5GP + (902 - 901);
                }
            }
            {
                ikBovPRlEjN = (276 - 170) - (195 - 89);
                while (ikBovPRlEjN <= PRp7J8V -(802 - 801)) {
                    if (JHtaPo[oGaneCy2H][exO7qvl4ZN] > JHtaPo[ikBovPRlEjN][exO7qvl4ZN])
                        break;
                    else
                        ysvDFj8n = ysvDFj8n + (186 - 185);
                    ikBovPRlEjN = ikBovPRlEjN + (22 - 21);
                }
            }
            if (ysvDFj8n == PRp7J8V) {
                OwoVdsZciDfp = oGaneCy2H;
                break;
            }
            oGaneCy2H = oGaneCy2H + 1;
        }
    }
    if (ysvDFj8n != PRp7J8V)
        printf ("No");
    else
        printf ("%d+%d", OwoVdsZciDfp, exO7qvl4ZN);
}

