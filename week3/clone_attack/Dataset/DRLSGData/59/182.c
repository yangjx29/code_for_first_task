int main () {
    char wYD3HviKZkX [110] [110];
    int e0QOTc8Zq, JuowdzNHSq, y91NDqE, LJEij7TL, uJb5Qjz, caD03ql = (146 - 146), pW3qmxuMiP9 [(779 - 669)] [(203 - 93)], f16Ggky7TA [(473 - 363)] [110];
    memset (pW3qmxuMiP9, (646 - 646), sizeof (pW3qmxuMiP9));
    memset (f16Ggky7TA, (826 - 826), sizeof (f16Ggky7TA));
    cin >> e0QOTc8Zq;
    for (y91NDqE = (520 - 519); e0QOTc8Zq >= y91NDqE; y91NDqE = y91NDqE + 1) {
        LJEij7TL = 735 - 734;
        while (e0QOTc8Zq >= LJEij7TL) {
            cin >> wYD3HviKZkX[y91NDqE][LJEij7TL];
            if (wYD3HviKZkX[y91NDqE][LJEij7TL] == '#')
                pW3qmxuMiP9[y91NDqE][LJEij7TL] = -(775 - 774);
            if (wYD3HviKZkX[y91NDqE][LJEij7TL] == '@') {
                pW3qmxuMiP9[y91NDqE][LJEij7TL] = (845 - 844);
            }
            LJEij7TL = LJEij7TL +1;
        }
    }
    {
        y91NDqE = 628 - 628;
        while (y91NDqE <= e0QOTc8Zq) {
            pW3qmxuMiP9[(738 - 738)][y91NDqE] = (190 - 180);
            pW3qmxuMiP9[e0QOTc8Zq + (786 - 785)][y91NDqE] = (140 - 130);
            y91NDqE = y91NDqE + 1;
        }
    }
    {
        y91NDqE = 697 - 697;
        while (y91NDqE <= e0QOTc8Zq) {
            pW3qmxuMiP9[y91NDqE][0] = 10;
            pW3qmxuMiP9[y91NDqE][e0QOTc8Zq + (493 - 492)] = 10;
            y91NDqE = y91NDqE + 1;
        }
    }
    cin >> uJb5Qjz;
    for (JuowdzNHSq = (151 - 150); JuowdzNHSq < uJb5Qjz; JuowdzNHSq = JuowdzNHSq +1) {
        {
            y91NDqE = 335 - 334;
            while (y91NDqE <= e0QOTc8Zq) {
                {
                    LJEij7TL = 557 - 556;
                    while (LJEij7TL <= e0QOTc8Zq) {
                        if (pW3qmxuMiP9[y91NDqE][LJEij7TL] == (761 - 760) && f16Ggky7TA[y91NDqE][LJEij7TL] == 0) {
                            if (pW3qmxuMiP9[y91NDqE - (489 - 488)][LJEij7TL] == 0 && f16Ggky7TA[y91NDqE - (619 - 618)][LJEij7TL] == 0) {
                                pW3qmxuMiP9[y91NDqE - (544 - 543)][LJEij7TL] = (135 - 134);
                                f16Ggky7TA[y91NDqE - (353 - 352)][LJEij7TL] = 1;
                            }
                            if (pW3qmxuMiP9[y91NDqE][LJEij7TL -1] == 0 && f16Ggky7TA[y91NDqE][LJEij7TL -1] == 0) {
                                pW3qmxuMiP9[y91NDqE][LJEij7TL -1] = 1;
                                f16Ggky7TA[y91NDqE][LJEij7TL -1] = 1;
                            }
                            if (pW3qmxuMiP9[y91NDqE + 1][LJEij7TL] == 0 && f16Ggky7TA[y91NDqE + 1][LJEij7TL] == 0) {
                                pW3qmxuMiP9[y91NDqE + 1][LJEij7TL] = 1;
                                f16Ggky7TA[y91NDqE + 1][LJEij7TL] = 1;
                            }
                            if (pW3qmxuMiP9[y91NDqE][LJEij7TL +1] == 0 && f16Ggky7TA[y91NDqE][LJEij7TL +1] == 0) {
                                pW3qmxuMiP9[y91NDqE][LJEij7TL +1] = 1;
                                f16Ggky7TA[y91NDqE][LJEij7TL +1] = 1;
                            }
                        }
                        else
                            continue;
                        LJEij7TL = LJEij7TL +1;
                    }
                }
                y91NDqE = y91NDqE + 1;
            }
        }
        memset (f16Ggky7TA, 0, sizeof (f16Ggky7TA));
    }
    caD03ql = 0;
    {
        y91NDqE = 1;
        while (y91NDqE <= e0QOTc8Zq) {
            {
                LJEij7TL = 1;
                while (LJEij7TL <= e0QOTc8Zq) {
                    if (pW3qmxuMiP9[y91NDqE][LJEij7TL] == 1) {
                        caD03ql++;
                    }
                    LJEij7TL++;
                }
            }
            y91NDqE++;
        }
    }
    cout << caD03ql << endl;
    return 0;
}

