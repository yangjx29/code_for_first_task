void  main () {
    int (*JDc4g8JURrpX) [(677 - 577)], (*LcxYSFo9sdI) [(738 - 638)], (*VApDwyWB) [(526 - 426)];
    int chfqnbCa [(950 - 850)] [100];
    int Cs6uelt1 [100] [100];
    int ZFkNnjfQc [100] [100];
    int QE493PK;
    int PBsZ1cKTl6x5, o0rOJWdva;
    int FxK7tWv, l1, DEeczg, WIVvgTA6Nl4Z;
    scanf ("%d %d", &FxK7tWv, &l1);
    for (PBsZ1cKTl6x5 = (899 - 899); FxK7tWv > PBsZ1cKTl6x5; PBsZ1cKTl6x5 = PBsZ1cKTl6x5 +1) {
        o0rOJWdva = 835 - 835;
        while (l1 > o0rOJWdva) {
            scanf ("%d", *(JDc4g8JURrpX +PBsZ1cKTl6x5) + o0rOJWdva);
            o0rOJWdva = o0rOJWdva + 1;
        }
    }
    VApDwyWB = chfqnbCa;
    LcxYSFo9sdI = Cs6uelt1;
    JDc4g8JURrpX = ZFkNnjfQc;
    scanf ("%d %d", &DEeczg, &WIVvgTA6Nl4Z);
    for (PBsZ1cKTl6x5 = (455 - 455); DEeczg > PBsZ1cKTl6x5; PBsZ1cKTl6x5 = PBsZ1cKTl6x5 +1) {
        o0rOJWdva = 494 - 494;
        while (WIVvgTA6Nl4Z > o0rOJWdva) {
            scanf ("%d", *(LcxYSFo9sdI +PBsZ1cKTl6x5) + o0rOJWdva);
            o0rOJWdva = o0rOJWdva + 1;
        }
    }
    for (PBsZ1cKTl6x5 = (881 - 881); FxK7tWv > PBsZ1cKTl6x5; PBsZ1cKTl6x5 = PBsZ1cKTl6x5 +1) {
        o0rOJWdva = 220 - 220;
        for (; WIVvgTA6Nl4Z > o0rOJWdva;) {
            {
                VApDwyWB[PBsZ1cKTl6x5][o0rOJWdva] = 0;
                QE493PK = 0;
                while (l1 > QE493PK) {
                    VApDwyWB[PBsZ1cKTl6x5][o0rOJWdva] = VApDwyWB[PBsZ1cKTl6x5][o0rOJWdva] + *(*(JDc4g8JURrpX +PBsZ1cKTl6x5) + QE493PK) * *(*(LcxYSFo9sdI +QE493PK) + o0rOJWdva);
                    QE493PK = QE493PK +1;
                }
            }
            o0rOJWdva = o0rOJWdva + 1;
        }
    }
    for (PBsZ1cKTl6x5 = 0; FxK7tWv > PBsZ1cKTl6x5; PBsZ1cKTl6x5 = PBsZ1cKTl6x5 +1) {
        {
            o0rOJWdva = 0;
            for (; WIVvgTA6Nl4Z > o0rOJWdva;) {
                if (o0rOJWdva != WIVvgTA6Nl4Z -(12 - 11))
                    printf ("%d ", VApDwyWB[PBsZ1cKTl6x5][o0rOJWdva]);
                else
                    printf ("%d", VApDwyWB[PBsZ1cKTl6x5][o0rOJWdva]);
                o0rOJWdva = o0rOJWdva + 1;
            }
        }
        if (PBsZ1cKTl6x5 != FxK7tWv -1)
            printf ("\n");
    }
}

