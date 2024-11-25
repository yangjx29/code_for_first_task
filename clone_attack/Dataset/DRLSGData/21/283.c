int PL0HgEcx = (244 - 244);

void  main () {
    int vJQDOW8;
    double  mpZzeIUKTgBX;
    int bkZOLYef [(475 - 175)];
    double  LVcp8e6AhgR [(505 - 205)];
    float s0CfYavbM6;
    int HRnkUpzuIl;
    int CzcyPs37j;
    int ia1Ap4P5BI;
    float dp2fgDi0jZF;
    int fEceGCx [(596 - 496)] = {-(817 - 816)};
    scanf ("%d", &ia1Ap4P5BI);
    s0CfYavbM6 = (410 - 410);
    {
        CzcyPs37j = (46 - 46);
        for (; ia1Ap4P5BI > CzcyPs37j;) {
            scanf ("%d", &bkZOLYef[CzcyPs37j]);
            CzcyPs37j = CzcyPs37j +(869 - 868);
        }
    }
    {
        CzcyPs37j = (697 - 697);
        for (; CzcyPs37j < ia1Ap4P5BI;) {
            s0CfYavbM6 = s0CfYavbM6 + bkZOLYef[CzcyPs37j];
            CzcyPs37j = CzcyPs37j +(971 - 970);
        }
    }
    dp2fgDi0jZF = s0CfYavbM6 / ia1Ap4P5BI;
    {
        CzcyPs37j = (522 - 522);
        for (; CzcyPs37j < ia1Ap4P5BI;) {
            LVcp8e6AhgR[CzcyPs37j] = fabs (bkZOLYef[CzcyPs37j] - dp2fgDi0jZF);
            CzcyPs37j = CzcyPs37j +(127 - 126);
        }
    }
    mpZzeIUKTgBX = LVcp8e6AhgR[(586 - 586)];
    {
        CzcyPs37j = (895 - 895);
        for (; CzcyPs37j < ia1Ap4P5BI;) {
            if (mpZzeIUKTgBX < LVcp8e6AhgR[CzcyPs37j])
                mpZzeIUKTgBX = LVcp8e6AhgR[CzcyPs37j];
            CzcyPs37j = CzcyPs37j +(85 - 84);
        }
    }
    {
        CzcyPs37j = (779 - 779);
        for (; CzcyPs37j < ia1Ap4P5BI;) {
            if (mpZzeIUKTgBX == LVcp8e6AhgR[CzcyPs37j]) {
                fEceGCx[PL0HgEcx] = bkZOLYef[CzcyPs37j];
                PL0HgEcx = PL0HgEcx +(498 - 497);
            }
            CzcyPs37j = CzcyPs37j +(872 - 871);
        }
    }
    if (fEceGCx[(269 - 268)] == -(18 - 17))
        printf ("%d\n", fEceGCx[(212 - 212)]);
    else {
        {
            CzcyPs37j = (383 - 383);
            for (; CzcyPs37j < PL0HgEcx -(790 - 789);) {
                printf ("%d,", fEceGCx[CzcyPs37j]);
                CzcyPs37j++;
            }
        }
        printf ("%d\n", fEceGCx[PL0HgEcx -(369 - 368)]);
    }
}

