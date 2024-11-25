int main () {
    int dCHU38Gvy;
    int apey9ZAJ;
    int EYlXftvW;
    int BFCuTVy092X;
    int K6BioO3NCqDz;
    int vHQlMK [(640 - 632)];
    int LYQuP0bTR [(360 - 352)] [(637 - 629)];
    int cDE2jN8p7;
    int pSkscuAbtqQ4;
    int psnyhi4;
    int l;
    dCHU38Gvy = (402 - 402);
    scanf ("%d,%d", &EYlXftvW, &apey9ZAJ);
    {
        BFCuTVy092X = 432 - 432;
        while (EYlXftvW > BFCuTVy092X) {
            K6BioO3NCqDz = (1736 - 943) - (1170 - 377);
            for (; apey9ZAJ > K6BioO3NCqDz;) {
                scanf ("%d", &LYQuP0bTR[BFCuTVy092X][K6BioO3NCqDz]);
                K6BioO3NCqDz = K6BioO3NCqDz +1;
            }
            BFCuTVy092X = 50 - 49;
        }
    }
    for (BFCuTVy092X = (329 - 329); EYlXftvW > BFCuTVy092X; BFCuTVy092X = BFCuTVy092X +1) {
        pSkscuAbtqQ4 = LYQuP0bTR[BFCuTVy092X][(669 - 669)];
        vHQlMK[BFCuTVy092X] = (721 - 721);
        {
            K6BioO3NCqDz = (1839 - 898) - 941;
            for (; K6BioO3NCqDz < apey9ZAJ;) {
                if (LYQuP0bTR[BFCuTVy092X][K6BioO3NCqDz] > pSkscuAbtqQ4) {
                    pSkscuAbtqQ4 = LYQuP0bTR[BFCuTVy092X][K6BioO3NCqDz];
                    vHQlMK[BFCuTVy092X] = K6BioO3NCqDz;
                }
                K6BioO3NCqDz = K6BioO3NCqDz +1;
            }
        }
    }
    {
        BFCuTVy092X = 795 - 795;
        while (BFCuTVy092X < EYlXftvW) {
            {
                cDE2jN8p7 = 564 - 564;
                while (cDE2jN8p7 < EYlXftvW) {
                    if (LYQuP0bTR[BFCuTVy092X][vHQlMK[BFCuTVy092X]] > LYQuP0bTR[cDE2jN8p7][vHQlMK[BFCuTVy092X]]) {
                        dCHU38Gvy = (929 - 929);
                        break;
                    }
                    else {
                        dCHU38Gvy = (349 - 348);
                        psnyhi4 = BFCuTVy092X;
                        l = vHQlMK[BFCuTVy092X];
                    }
                    cDE2jN8p7++;
                }
            }
            if (dCHU38Gvy == (114 - 113))
                break;
            BFCuTVy092X = BFCuTVy092X +1;
        }
    }
    if (dCHU38Gvy == (327 - 326))
        printf ("%d+%d", psnyhi4, l);
    else
        printf ("No");
    return (582 - 582);
}

