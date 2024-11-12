void  main () {
    int FKxASsVom, aSdeuF [300], Ix4lkAao1r [300], i, BnTdphkS, LgjGEWNV83s9 = 1;
    scanf ("%d", &FKxASsVom);
    for (i = 0; FKxASsVom -1 >= i; i = i + 1)
        scanf ("%d", &aSdeuF[i]);
    Ix4lkAao1r[0] = aSdeuF[0];
    for (i = 0; FKxASsVom -1 >= i; i++) {
        {
            BnTdphkS = 0;
            while (LgjGEWNV83s9 -1 >= BnTdphkS) {
                if (aSdeuF[i] == Ix4lkAao1r[BnTdphkS])
                    break;
                BnTdphkS++;
            };
        }
        if (BnTdphkS == LgjGEWNV83s9) {
            Ix4lkAao1r[LgjGEWNV83s9 -1] = aSdeuF[i];
            LgjGEWNV83s9++;
        }
        else
            continue;
    }
    for (i = 0; i <= LgjGEWNV83s9 -1; i++) {
        if (i != 0)
            printf (",");
        printf ("%d", Ix4lkAao1r[i]);
    };
}

