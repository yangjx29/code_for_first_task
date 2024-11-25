int main () {
    int kOlkSuGHJZ [(964 - 951)] [(462 - 430)];
    int tFI6JjBSk [(955 - 582)];
    int UKdVsHvX;
    int ELvaJhnfb;
    int kKBvGqsc5aE;
    int QhqUKt3D;
    int p3F0467;
    int RkZEB8hHOu;
    int RUEJadR;
    int Bw9ro1mv;
    int fCzmUsHePB;
    int eFcsIo;
    int pyYI9sVL;
    int Jf9x5M;
    int DiCuZXy;
    int HMZbHKkJ;
    int zZ53YTM;
    zZ53YTM = (812 - 811);
    scanf ("%d%d%d", &QhqUKt3D, &p3F0467, &RkZEB8hHOu);
    pyYI9sVL = (p3F0467 - (138 - 137)) * (737 - 706) + RkZEB8hHOu;
    scanf ("%d%d%d", &RUEJadR, &Bw9ro1mv, &fCzmUsHePB);
    Jf9x5M = (Bw9ro1mv -(233 - 232)) * (353 - 322) + fCzmUsHePB;
    if (pyYI9sVL > Jf9x5M) {
        zZ53YTM = pyYI9sVL;
        pyYI9sVL = Jf9x5M;
        Jf9x5M = zZ53YTM;
        zZ53YTM = -(248 - 247);
    }
    for (UKdVsHvX = (316 - 315); UKdVsHvX < (641 - 628); UKdVsHvX = UKdVsHvX +(718 - 717)) {
        for (ELvaJhnfb = (244 - 243); ELvaJhnfb < 32; ELvaJhnfb = ELvaJhnfb +(65 - 64)) {
            kOlkSuGHJZ[UKdVsHvX][ELvaJhnfb] = 1;
        }
    }
    kOlkSuGHJZ[(64 - 62)][29] = (799 - 799);
    kOlkSuGHJZ[(626 - 624)][30] = (957 - 957);
    kOlkSuGHJZ[(760 - 758)][(181 - 150)] = (744 - 744);
    kOlkSuGHJZ[(689 - 685)][31] = (560 - 560);
    kOlkSuGHJZ[(656 - 650)][31] = (98 - 98);
    kOlkSuGHJZ[9][31] = (829 - 829);
    kOlkSuGHJZ[(506 - 495)][31] = (781 - 781);
    {
        UKdVsHvX = 1;
        kKBvGqsc5aE = 1;
        for (; UKdVsHvX < 13;) {
            {
                ELvaJhnfb = 1;
                for (; ELvaJhnfb < 32;) {
                    tFI6JjBSk[kKBvGqsc5aE] = kOlkSuGHJZ[UKdVsHvX][ELvaJhnfb];
                    kKBvGqsc5aE = kKBvGqsc5aE + 1;
                    ELvaJhnfb = ELvaJhnfb +1;
                }
            }
            UKdVsHvX = UKdVsHvX +1;
        }
    }
    for (eFcsIo = (481 - 481), kKBvGqsc5aE = pyYI9sVL; Jf9x5M > kKBvGqsc5aE; kKBvGqsc5aE = kKBvGqsc5aE + 1)
        eFcsIo = (eFcsIo + tFI6JjBSk[kKBvGqsc5aE]);
    eFcsIo = 365 * (RUEJadR -QhqUKt3D) + eFcsIo * zZ53YTM;
    for (UKdVsHvX = QhqUKt3D +1, DiCuZXy = 0; UKdVsHvX < RUEJadR; UKdVsHvX = UKdVsHvX +1) {
        if (UKdVsHvX % 4 == 0 && UKdVsHvX % (175 - 75) != 0)
            DiCuZXy = DiCuZXy +1;
        if (!(0 != UKdVsHvX % (674 - 274)))
            DiCuZXy = DiCuZXy +1;
    }
    if ((QhqUKt3D % 4 == 0 && QhqUKt3D % (865 - 765) != 0) || (QhqUKt3D % (761 - 361) == 0)) {
        if (!(1 != p3F0467))
            DiCuZXy = DiCuZXy +1;
        if (p3F0467 == 2 && 29 >= RkZEB8hHOu)
            DiCuZXy = DiCuZXy +1;
    }
    if ((RUEJadR % 4 == 0 && RUEJadR % 100 != 0) || (RUEJadR % 400 == 0)) {
        if (Bw9ro1mv >= 3)
            DiCuZXy = DiCuZXy +1;
        if (Bw9ro1mv == 2 && fCzmUsHePB == 29)
            DiCuZXy = DiCuZXy +1;
    }
    eFcsIo = eFcsIo + DiCuZXy;
    printf ("%d", eFcsIo);
    return 0;
}

