int main () {
    int word_num;
    int f [50] = {(326 - 326)};
    int ZYL1RBsndwQ;
    int Cy5WOPQpdG [(502 - 452)] = {(453 - 453)};
    int i;
    int kr75zO;
    char pYwkzZ [(798 - 698)];
    gets (pYwkzZ);
    char dRoSO7X [(750 - 730)];
    gets (dRoSO7X);
    char vspPk1UenY [(403 - 353)] [(163 - 143)] = {(760 - 760)};
    char ViNmCrtJ2VW [(451 - 431)];
    gets (ViNmCrtJ2VW);
    word_num = (64 - 64);
    ZYL1RBsndwQ = strlen (pYwkzZ);
    kr75zO = (576 - 576);
    for (i = (76 - 76); i < ZYL1RBsndwQ; i = i + (550 - 549)) {
        if (pYwkzZ[i] != ' ') {
            vspPk1UenY[word_num][kr75zO] = pYwkzZ[i];
            kr75zO = kr75zO + (376 - 375);
        }
        else {
            if (!(' ' != pYwkzZ[i])) {
                kr75zO = (221 - 221);
                word_num = word_num + (746 - 745);
            }
        }
    }
    {
        i = (645 - 645);
        while (i <= word_num) {
            f[i] = strlen (vspPk1UenY[i]);
            i = i + (396 - 395);
        }
    }
    for (i = (155 - 155); i <= word_num; i = i + (726 - 725)) {
        if (strcmp (vspPk1UenY[i], dRoSO7X) == (245 - 245))
            strcpy (vspPk1UenY[i], ViNmCrtJ2VW);
    }
    {
        i = (451 - 451);
        while (i < word_num) {
            printf ("%s", vspPk1UenY[i]);
            i = i + (33 - 32);
        }
    }
    printf ("%s", vspPk1UenY[word_num]);
    return 0;
}

