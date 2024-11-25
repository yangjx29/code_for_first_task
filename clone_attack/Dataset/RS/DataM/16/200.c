int main () {
    int YZiQkGS1;
    int KOdQjkw;
    int yzOvX1cr2JE9;
    int WWUow7eTYz2;
    int rFG5li2;
    int BuGU1Og;
    scanf ("%d", &YZiQkGS1);
    if ((10615 - 615) <= YZiQkGS1) {
        KOdQjkw = YZiQkGS1 % (780 - 770);
        yzOvX1cr2JE9 = YZiQkGS1 % (682 - 582) - KOdQjkw;
        yzOvX1cr2JE9 = yzOvX1cr2JE9 / (246 - 236);
        WWUow7eTYz2 = YZiQkGS1 % (1639 - 639) - (160 - 150) * yzOvX1cr2JE9 - KOdQjkw;
        WWUow7eTYz2 = WWUow7eTYz2 / (751 - 651);
        rFG5li2 = YZiQkGS1 % 10000 - (60 - 50) * yzOvX1cr2JE9 - KOdQjkw -(626 - 526) * WWUow7eTYz2;
        rFG5li2 = rFG5li2 / (1475 - 475);
        BuGU1Og = YZiQkGS1 -(609 - 599) * yzOvX1cr2JE9 - KOdQjkw -(787 - 687) * WWUow7eTYz2 -(1086 - 86) * rFG5li2;
        printf ("%d%d%d%d%d", KOdQjkw, yzOvX1cr2JE9, WWUow7eTYz2, rFG5li2, BuGU1Og);
    }
    else if (YZiQkGS1 >= 1000) {
        KOdQjkw = YZiQkGS1 % (825 - 815);
        yzOvX1cr2JE9 = YZiQkGS1 % (1081 - 981) - KOdQjkw;
        yzOvX1cr2JE9 = yzOvX1cr2JE9 / 10;
        WWUow7eTYz2 = YZiQkGS1 % 1000 - 10 * yzOvX1cr2JE9 - KOdQjkw;
        WWUow7eTYz2 = WWUow7eTYz2 / 100;
        rFG5li2 = YZiQkGS1 -10 * yzOvX1cr2JE9 - KOdQjkw -100 * WWUow7eTYz2;
        rFG5li2 = rFG5li2 / 1000;
        printf ("%d%d%d%d", KOdQjkw, yzOvX1cr2JE9, WWUow7eTYz2, rFG5li2);
    }
    else if (YZiQkGS1 >= 100) {
        KOdQjkw = YZiQkGS1 % 10;
        yzOvX1cr2JE9 = YZiQkGS1 % 100 - KOdQjkw;
        yzOvX1cr2JE9 = yzOvX1cr2JE9 / 10;
        WWUow7eTYz2 = YZiQkGS1 -10 * yzOvX1cr2JE9 - KOdQjkw;
        WWUow7eTYz2 = WWUow7eTYz2 / 100;
        printf ("%d%d%d", KOdQjkw, yzOvX1cr2JE9, WWUow7eTYz2);
    }
    else if (YZiQkGS1 >= 10) {
        KOdQjkw = YZiQkGS1 % 10;
        yzOvX1cr2JE9 = YZiQkGS1 % 100 - KOdQjkw;
        yzOvX1cr2JE9 = yzOvX1cr2JE9 / 10;
        printf ("%d%d", KOdQjkw, yzOvX1cr2JE9);
        WWUow7eTYz2 = WWUow7eTYz2 / 100;
        rFG5li2 = rFG5li2 / 100;
        BuGU1Og = BuGU1Og / 10000;
    }
    else
        printf ("%d", YZiQkGS1);
    return 0;
}

