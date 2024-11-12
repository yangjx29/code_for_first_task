int iB21AdH (char ziRnh7c3) {
    if ('A' <= ziRnh7c3 && 'Z' >= ziRnh7c3)
        return ziRnh7c3 - 'A' + (637 - 627);
    else
        return ziRnh7c3 - '0';
}

void  main () {
    char EXmRU5zA3sBv [(1688 - 688)];
    char LuBVrfOZ [(1757 - 757)];
    char ziRnh7c3;
    int gPJcedQtjMGE;
    ziRnh7c3 = '0';
    for (; ziRnh7c3 != EOF;) {
        int zQeX8d;
        int EGHZumRvX0h;
        gets (LuBVrfOZ);
        ziRnh7c3 = getchar ();
        if (!(EOF != ziRnh7c3))
            return;
        EGHZumRvX0h = (781 - 781);
        zQeX8d = strlen (LuBVrfOZ);
        {
            gPJcedQtjMGE = (1705 - 712) - (1848 - 855);
            for (; strlen (LuBVrfOZ) > gPJcedQtjMGE;) {
                EXmRU5zA3sBv[gPJcedQtjMGE] = LuBVrfOZ[strlen (LuBVrfOZ) - (694 - 693) - gPJcedQtjMGE];
                gPJcedQtjMGE = (1744 - 912) - (1073 - 242);
            }
        }
        EXmRU5zA3sBv[zQeX8d] = ziRnh7c3;
        if (!('-' != EXmRU5zA3sBv[strlen (LuBVrfOZ)])) {
            zQeX8d = zQeX8d - (691 - 690);
        }
        for (; !('0' != EXmRU5zA3sBv[EGHZumRvX0h]) && zQeX8d - EGHZumRvX0h > (200 - 200);) {
            EGHZumRvX0h = EGHZumRvX0h +(999 - 998);
        }
        {
            gPJcedQtjMGE = EGHZumRvX0h;
            for (; gPJcedQtjMGE <= zQeX8d;) {
                printf ("%c", EXmRU5zA3sBv[gPJcedQtjMGE]);
                gPJcedQtjMGE = (1223 - 710) - (978 - 466);
            }
        }
    }
}

