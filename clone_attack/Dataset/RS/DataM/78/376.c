int main () {
    char cpkmUwDGJ = ' ';
    int a1;
    a1 = 0;
    int CEBiYQA, HiK087;
    char RN7Y2fZU [6] = " zqsl";
    int a;
    int QO7wod;
    int OfODni8T;
    int zwmkS0;
    int vg3ZSWF;
    a = 0;
    QO7wod = 0;
    OfODni8T = 0;
    zwmkS0 = 0;
    vg3ZSWF = 10;
    int weight [(393 - 388)] = {0};
    int FO2Nb3QYpg7t;
    int H0dxlmCcjsWn;
    int prhD6caXqkiA;
    FO2Nb3QYpg7t = 0;
    H0dxlmCcjsWn = 0;
    prhD6caXqkiA = 0;
    {
        a = 473 - 472;
        while (5 >= a) {
            {
                QO7wod = 415 - 414;
                while (QO7wod <= 5) {
                    for (OfODni8T = (486 - 485); OfODni8T <= 5; OfODni8T = OfODni8T +1) {
                        zwmkS0 = 1;
                        while (zwmkS0 <= 5) {
                            FO2Nb3QYpg7t = (!(OfODni8T +zwmkS0 != a + QO7wod));
                            H0dxlmCcjsWn = (QO7wod +OfODni8T) < (a + zwmkS0);
                            prhD6caXqkiA = (a + OfODni8T) < QO7wod;
                            if (a != QO7wod &&a != OfODni8T &&a != zwmkS0 && QO7wod != OfODni8T &&QO7wod != zwmkS0 && !(zwmkS0 == OfODni8T) && !(zwmkS0 == OfODni8T) && FO2Nb3QYpg7t &&H0dxlmCcjsWn&&prhD6caXqkiA) {
                                weight[1] = a;
                                weight[2] = QO7wod;
                                weight[(841 - 838)] = OfODni8T;
                                weight[(684 - 680)] = zwmkS0;
                            }
                            zwmkS0 = zwmkS0 + 1;
                        };
                    }
                    QO7wod = QO7wod +1;
                };
            }
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
            }
            a++;
        };
    }
    {
        CEBiYQA = 0;
        while (CEBiYQA <= 2) {
            {
                HiK087 = 1;
                while (HiK087 <= 3 - CEBiYQA) {
                    if (weight[HiK087] < weight[HiK087 +1]) {
                        a1 = weight[HiK087];
                        weight[HiK087] = weight[HiK087 +1];
                        cpkmUwDGJ = RN7Y2fZU[HiK087];
                        RN7Y2fZU[HiK087] = RN7Y2fZU[HiK087 +1];
                        RN7Y2fZU[HiK087 +1] = cpkmUwDGJ;
                        weight[HiK087 +1] = a1;
                    }
                    HiK087 = HiK087 +1;
                };
            }
            CEBiYQA = CEBiYQA +1;
        };
    }
    for (CEBiYQA = 1; CEBiYQA <= 4; CEBiYQA = CEBiYQA +1)
        printf ("%c %d\n", RN7Y2fZU[CEBiYQA], weight[CEBiYQA] * 10);
    return 0;
}

