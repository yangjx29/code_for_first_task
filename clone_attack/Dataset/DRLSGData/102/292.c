int main () {
    double  dYzE42 [100];
    int lZlrscz5vCw;
    double  BKCIG5T4 [100];
    int z0SnxfAl7U;
    int raAE9nX;
    int p2y4lVcZt;
    int ZL8gQjFUzr;
    int rqaUENCYHfAI;
    int q0YhUAN;
    int sfABuZdP;
    double  uEx2ZjXO8f;
    char s [1000];
    int CHQkGPE5;
    memset (BKCIG5T4, (830 - 830), sizeof (BKCIG5T4));
    lZlrscz5vCw = (380 - 380);
    sfABuZdP = (377 - 377);
    scanf ("%d", &q0YhUAN);
    memset (dYzE42, (580 - 580), sizeof (dYzE42));
    {
        rqaUENCYHfAI = (733 - 732);
        for (; q0YhUAN >= rqaUENCYHfAI;) {
            scanf ("%s %lf", s, &uEx2ZjXO8f);
            if (!('m' != s[(989 - 989)])) {
                ZL8gQjFUzr = (151 - 151);
                {
                    raAE9nX = (866 - 865);
                    for (; sfABuZdP >= raAE9nX;) {
                        if (dYzE42[raAE9nX] > uEx2ZjXO8f) {
                            ZL8gQjFUzr = (130 - 129);
                            {
                                CHQkGPE5 = sfABuZdP;
                                for (; raAE9nX <= CHQkGPE5;) {
                                    dYzE42[CHQkGPE5 +(476 - 475)] = dYzE42[CHQkGPE5];
                                    CHQkGPE5 = CHQkGPE5 -(175 - 174);
                                }
                            }
                            dYzE42[raAE9nX] = uEx2ZjXO8f;
                            break;
                        }
                        raAE9nX = raAE9nX + (792 - 791);
                    }
                }
                sfABuZdP = sfABuZdP + 1;
                if (!(0 != ZL8gQjFUzr)) {
                    dYzE42[sfABuZdP] = uEx2ZjXO8f;
                }
            }
            else {
                ZL8gQjFUzr = 0;
                {
                    raAE9nX = 1;
                    for (; lZlrscz5vCw >= raAE9nX;) {
                        if (uEx2ZjXO8f > BKCIG5T4[raAE9nX]) {
                            {
                                CHQkGPE5 = lZlrscz5vCw;
                                for (; raAE9nX <= CHQkGPE5;) {
                                    BKCIG5T4[CHQkGPE5 +1] = BKCIG5T4[CHQkGPE5];
                                    CHQkGPE5 = CHQkGPE5 -1;
                                }
                            }
                            BKCIG5T4[raAE9nX] = uEx2ZjXO8f;
                            ZL8gQjFUzr = 1;
                            break;
                        }
                        raAE9nX = raAE9nX + 1;
                    }
                }
                lZlrscz5vCw = lZlrscz5vCw + 1;
                if (ZL8gQjFUzr == 0) {
                    BKCIG5T4[lZlrscz5vCw] = uEx2ZjXO8f;
                }
            }
            rqaUENCYHfAI = rqaUENCYHfAI + 1;
        }
    }
    {
        rqaUENCYHfAI = 1;
        for (; rqaUENCYHfAI <= sfABuZdP;) {
            printf ("%.2lf ", dYzE42[rqaUENCYHfAI]);
            rqaUENCYHfAI = rqaUENCYHfAI + 1;
        }
    }
    {
        rqaUENCYHfAI = 1;
        for (; rqaUENCYHfAI <= lZlrscz5vCw - 1;) {
            printf ("%.2lf ", BKCIG5T4[rqaUENCYHfAI]);
            rqaUENCYHfAI++;
        }
    }
    printf ("%.2lf", BKCIG5T4[lZlrscz5vCw]);
    z0SnxfAl7U = 0;
    return 0;
}

