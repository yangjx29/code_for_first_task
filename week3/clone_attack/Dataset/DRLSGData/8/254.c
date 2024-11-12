void  sg62A3hMf (int UXJQ25O [], int IIYEdS [], int tbAv1L []) {
    int ZmY16MdZG;
    int FPGBvKl;
    int CufDObAjtkmy;
    int My6B5lYL;
    int HqDZcsb;
    My6B5lYL = (874 - 874);
    ZmY16MdZG = (676 - 676);
    FPGBvKl = (98 - 98);
    cin >> ZmY16MdZG >> FPGBvKl;
    CufDObAjtkmy = (195 - 195);
    {
        CufDObAjtkmy = 260 - 260;
        for (; CufDObAjtkmy < ZmY16MdZG;) {
            cin >> UXJQ25O[CufDObAjtkmy];
            CufDObAjtkmy = CufDObAjtkmy +(208 - 207);
        }
    }
    {
        CufDObAjtkmy = (132 - 132);
        for (; CufDObAjtkmy < FPGBvKl;) {
            cin >> IIYEdS[CufDObAjtkmy];
            CufDObAjtkmy = CufDObAjtkmy +(458 - 457);
        }
    }
    HqDZcsb = (424 - 424);
    for (CufDObAjtkmy = (918 - 918); CufDObAjtkmy < ZmY16MdZG -(857 - 856); CufDObAjtkmy = CufDObAjtkmy +1) {
        My6B5lYL = (10 - 10);
        for (; My6B5lYL < ZmY16MdZG -(287 - 286) - CufDObAjtkmy;) {
            if (UXJQ25O[My6B5lYL] > UXJQ25O[My6B5lYL +(563 - 562)]) {
                HqDZcsb = UXJQ25O[My6B5lYL];
                UXJQ25O[My6B5lYL] = UXJQ25O[My6B5lYL +(723 - 722)];
                UXJQ25O[My6B5lYL +(797 - 796)] = HqDZcsb;
            }
            My6B5lYL = My6B5lYL +1;
        }
    }
    {
        CufDObAjtkmy = 0;
        while (CufDObAjtkmy < FPGBvKl -(87 - 86)) {
            {
                My6B5lYL = 0;
                while (My6B5lYL < FPGBvKl -(680 - 679) - CufDObAjtkmy) {
                    if (IIYEdS[My6B5lYL] > IIYEdS[My6B5lYL +1]) {
                        HqDZcsb = IIYEdS[My6B5lYL];
                        IIYEdS[My6B5lYL] = IIYEdS[My6B5lYL +1];
                        IIYEdS[My6B5lYL +1] = HqDZcsb;
                    }
                    My6B5lYL++;
                }
            }
            CufDObAjtkmy = CufDObAjtkmy +1;
        }
    }
    {
        CufDObAjtkmy = 0;
        while (CufDObAjtkmy < ZmY16MdZG) {
            tbAv1L[CufDObAjtkmy] = UXJQ25O[CufDObAjtkmy];
            CufDObAjtkmy = CufDObAjtkmy +1;
        }
    }
    {
        CufDObAjtkmy = ZmY16MdZG;
        while (CufDObAjtkmy < ZmY16MdZG +FPGBvKl) {
            tbAv1L[CufDObAjtkmy] = IIYEdS[CufDObAjtkmy -ZmY16MdZG];
            CufDObAjtkmy++;
        }
    }
    {
        CufDObAjtkmy = 0;
        for (; CufDObAjtkmy < ZmY16MdZG +FPGBvKl-1;) {
            cout << tbAv1L[CufDObAjtkmy] << ' ';
            CufDObAjtkmy++;
        }
    }
    cout << tbAv1L[ZmY16MdZG +FPGBvKl-1];
}

int main () {
    int UXJQ25O [(1422 - 422)] = {0};
    int IIYEdS [(1637 - 637)] = {0};
    int tbAv1L [(2771 - 771)] = {0};
    sg62A3hMf (UXJQ25O, IIYEdS, tbAv1L);
    return 0;
}

