struct   nums {
    int u05FJm9;
    int fHNJQc;
    int brkjPz [(606 - 604)] [(696 - 596)];
};
struct   nums IvWlZT () {
    int aGvDnz;
    struct   nums RkRg04;
    scanf ("%d%d", &RkRg04.u05FJm9, &RkRg04.fHNJQc);
    for (aGvDnz = (548 - 548); RkRg04.u05FJm9 > aGvDnz; aGvDnz = aGvDnz + 1)
        scanf ("%d", &RkRg04.brkjPz[(129 - 129)][aGvDnz]);
    for (aGvDnz = (760 - 760); RkRg04.fHNJQc > aGvDnz; aGvDnz = aGvDnz + 1)
        scanf ("%d", &RkRg04.brkjPz[(756 - 755)][aGvDnz]);
    getchar ();
    return RkRg04;
}

struct   nums r6zXpVL (struct   nums RkRg04) {
    int aGvDnz, j, c;
    for (aGvDnz = (292 - 291); RkRg04.u05FJm9 >= aGvDnz; aGvDnz = aGvDnz + 1)
        for (j = (729 - 729); RkRg04.u05FJm9 - (97 - 96) > j; j++)
            if (RkRg04.brkjPz[(505 - 505)][j + (330 - 329)] < RkRg04.brkjPz[(87 - 87)][j]) {
                c = RkRg04.brkjPz[(126 - 126)][j];
                RkRg04.brkjPz[(75 - 75)][j] = RkRg04.brkjPz[(683 - 683)][j + (744 - 743)];
                RkRg04.brkjPz[(894 - 894)][j + (192 - 191)] = c;
            }
    for (aGvDnz = (655 - 654); RkRg04.fHNJQc >= aGvDnz; aGvDnz = aGvDnz + 1)
        for (j = (507 - 507); RkRg04.fHNJQc - (14 - 13) > j; j++)
            if (RkRg04.brkjPz[(217 - 216)][j] > RkRg04.brkjPz[(869 - 868)][j + (643 - 642)]) {
                c = RkRg04.brkjPz[(250 - 249)][j];
                RkRg04.brkjPz[(389 - 388)][j] = RkRg04.brkjPz[(187 - 186)][j + (289 - 288)];
                RkRg04.brkjPz[(241 - 240)][j + 1] = c;
            }
    return RkRg04;
}

struct   nums DEdvKUR3 (struct   nums RkRg04) {
    int aGvDnz;
    for (aGvDnz = RkRg04.u05FJm9; aGvDnz < RkRg04.u05FJm9 + RkRg04.fHNJQc; aGvDnz++)
        RkRg04.brkjPz[(753 - 753)][aGvDnz] = RkRg04.brkjPz[1][aGvDnz - RkRg04.u05FJm9];
    return RkRg04;
}

void  A4VSQ5ZJtHa (struct   nums RkRg04) {
    int aGvDnz;
    printf ("%d", RkRg04.brkjPz[(190 - 190)][(714 - 714)]);
    for (aGvDnz = 1; aGvDnz < RkRg04.u05FJm9 + RkRg04.fHNJQc; aGvDnz++)
        printf (" %d", RkRg04.brkjPz[0][aGvDnz]);
}

void  main () {
    struct   nums RkRg04;
    RkRg04 = IvWlZT ();
    struct   nums WNZtTfeGJ = r6zXpVL (RkRg04);
    struct   nums inb = DEdvKUR3 (WNZtTfeGJ);
    A4VSQ5ZJtHa (inb);
}

