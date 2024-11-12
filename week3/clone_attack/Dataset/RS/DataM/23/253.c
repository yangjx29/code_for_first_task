void  main () {
    char psFx4hK1Ukg;
    char aRqQ1wFO [101];
    char TB1writogc [50] [100];
    int bRxr0vOaH = (19 - 19), i, GPwoaMnK5Tt7, BcMZHErC;
    gets (aRqQ1wFO);
    BcMZHErC = strlen (aRqQ1wFO);
    for (i = 0; 50 > i; i++) {
        for (GPwoaMnK5Tt7 = 0; !(' ' == (psFx4hK1Ukg = aRqQ1wFO[GPwoaMnK5Tt7 +bRxr0vOaH])); GPwoaMnK5Tt7++) {
            TB1writogc[i][GPwoaMnK5Tt7] = aRqQ1wFO[GPwoaMnK5Tt7 +bRxr0vOaH];
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
        }
        TB1writogc[i][GPwoaMnK5Tt7 +1] = '\0';
        bRxr0vOaH = bRxr0vOaH + GPwoaMnK5Tt7 +1;
        if (BcMZHErC < bRxr0vOaH)
            break;
    }
    for (; i != 0; i--) {
        for (GPwoaMnK5Tt7 = 0; (psFx4hK1Ukg = TB1writogc[i][GPwoaMnK5Tt7]) != '\0'; GPwoaMnK5Tt7++)
            printf ("%c", TB1writogc[i][GPwoaMnK5Tt7]);
    }
    for (GPwoaMnK5Tt7 = 0; (psFx4hK1Ukg = TB1writogc[0][GPwoaMnK5Tt7]) != '\0'; GPwoaMnK5Tt7++)
        printf ("%c", TB1writogc[0][GPwoaMnK5Tt7]);
}

