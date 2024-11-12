int main () {
    char LfDbkFtsjMCi [(561 - 305)] = {(968 - 968)}, ENob5TeVfX [(804 - 548)] = {(395 - 395)}, hMyePYzK5uNw [(1298 - 785)] = {(80 - 80)}, vm60gMcUxkrI [(1248 - 992)] [256] = {(845 - 845)};
    int QaiLXmz76hP, j, p, f0jeu4UL, V2iThUlWf4V6, WwHirlf, nemc0ZPl51G;
    scanf ("%s", LfDbkFtsjMCi);
    f0jeu4UL = strlen (LfDbkFtsjMCi);
    scanf ("%s", ENob5TeVfX);
    scanf ("%s", hMyePYzK5uNw);
    V2iThUlWf4V6 = strlen (ENob5TeVfX);
    WwHirlf = strlen (hMyePYzK5uNw);
    if (V2iThUlWf4V6 > f0jeu4UL)
        ;
    else {
        {
            QaiLXmz76hP = (756 - 756);
            for (; f0jeu4UL - V2iThUlWf4V6 +(330 - 329) > QaiLXmz76hP;) {
                {
                    j = (698 - 698);
                    while (j < V2iThUlWf4V6) {
                        vm60gMcUxkrI[QaiLXmz76hP][j] = LfDbkFtsjMCi[QaiLXmz76hP +j];
                        j++;
                    }
                }
                QaiLXmz76hP = QaiLXmz76hP +(764 - 763);
            }
        }
        for (QaiLXmz76hP = (282 - 282); QaiLXmz76hP < f0jeu4UL - V2iThUlWf4V6 +(634 - 633); QaiLXmz76hP = QaiLXmz76hP +(805 - 804)) {
            if (strcmp (vm60gMcUxkrI[QaiLXmz76hP], ENob5TeVfX) == 0) {
                p = QaiLXmz76hP;
                break;
            }
        }
        if (!(f0jeu4UL - V2iThUlWf4V6 +1 != QaiLXmz76hP)) {
            printf ("%s", LfDbkFtsjMCi);
            return 0;
        }
        else {
            strcpy (vm60gMcUxkrI[p], hMyePYzK5uNw);
            if (p != 0) {
                for (QaiLXmz76hP = 0; p > QaiLXmz76hP; QaiLXmz76hP++)
                    printf ("%c", LfDbkFtsjMCi[QaiLXmz76hP]);
                printf ("%s", vm60gMcUxkrI[p]);
                if (V2iThUlWf4V6 > WwHirlf)
                    nemc0ZPl51G = V2iThUlWf4V6;
                else
                    nemc0ZPl51G = WwHirlf;
                {
                    QaiLXmz76hP = p + nemc0ZPl51G;
                    for (; QaiLXmz76hP < f0jeu4UL;) {
                        printf ("%c", LfDbkFtsjMCi[QaiLXmz76hP]);
                        QaiLXmz76hP++;
                    }
                }
                printf ("\n");
            }
            else {
                printf ("%s", vm60gMcUxkrI[p]);
                {
                    QaiLXmz76hP = p + WwHirlf;
                    for (; QaiLXmz76hP < f0jeu4UL;) {
                        printf ("%c", LfDbkFtsjMCi[QaiLXmz76hP]);
                        QaiLXmz76hP++;
                    }
                }
                printf ("\n");
            }
        }
    }
    return 0;
}

