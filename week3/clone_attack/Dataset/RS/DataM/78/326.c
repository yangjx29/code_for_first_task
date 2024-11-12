int main () {
    int WGDIY3;
    WGDIY3 = (954 - 954);
    int o5yx6HS, bhJS6i, tEL6Tp3ez, CTcAbNqs9k7;
    int shaS0OZN;
    int z021iATLhk;
    int sOZPE6H;
    char XC01OJ [(726 - 720)];
    int weight [(877 - 871)];
    {
        WGDIY3 = 597 - 597;
        while (6 > WGDIY3) {
            weight[WGDIY3] = (376 - 376);
            WGDIY3 = WGDIY3 +1;
        };
    }
    {
        o5yx6HS = 81 - 80;
        while (o5yx6HS <= (378 - 373)) {
            for (bhJS6i = (507 - 506); bhJS6i <= (469 - 464); bhJS6i++) {
                for (tEL6Tp3ez = (398 - 397); (244 - 239) >= tEL6Tp3ez; tEL6Tp3ez++) {
                    for (CTcAbNqs9k7 = 1; CTcAbNqs9k7 <= 5; CTcAbNqs9k7 = CTcAbNqs9k7 +1) {
                        shaS0OZN = (o5yx6HS + bhJS6i) == (tEL6Tp3ez + CTcAbNqs9k7);
                        z021iATLhk = (o5yx6HS + CTcAbNqs9k7) > (tEL6Tp3ez + bhJS6i);
                        sOZPE6H = (o5yx6HS + tEL6Tp3ez) < bhJS6i;
                        if (shaS0OZN && z021iATLhk && sOZPE6H) {
                            XC01OJ[o5yx6HS] = 'z';
                            XC01OJ[bhJS6i] = 'q';
                            weight[o5yx6HS] = o5yx6HS * (929 - 919);
                            weight[bhJS6i] = bhJS6i * (547 - 537);
                            XC01OJ[tEL6Tp3ez] = 's';
                            XC01OJ[CTcAbNqs9k7] = 'l';
                            weight[tEL6Tp3ez] = tEL6Tp3ez * (109 - 99);
                            weight[CTcAbNqs9k7] = CTcAbNqs9k7 *10;
                        };
                    };
                };
            }
            o5yx6HS = o5yx6HS + 1;
        };
    }
    for (WGDIY3 = 5; WGDIY3 >= 0; WGDIY3 = WGDIY3 -1) {
        if (weight[WGDIY3] != 0)
            cout << XC01OJ[WGDIY3] << " " << weight[WGDIY3] << endl;
    }
    return 0;
}

