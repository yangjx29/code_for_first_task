struct   inf {
    int CBtk3MAwocph;
    char ieSLqs4b [(526 - 500)];
    struct   inf *w9Q42udT;
};
int ZphBtO;

struct   inf *KoFWvMwGVkA (void ) {
    int uuw1xTqPFN;
    struct   inf *zNkPHVhX;
    struct   inf *AJCjR8FSo23Y;
    struct   inf *unLR0NoqdATV;
    uuw1xTqPFN = (943 - 943);
    AJCjR8FSo23Y = unLR0NoqdATV = (struct   inf *) malloc (LEN);
    zNkPHVhX = NULL;
    scanf ("%d %s", &AJCjR8FSo23Y->CBtk3MAwocph, AJCjR8FSo23Y->ieSLqs4b);
    for (; (674 - 673);) {
        uuw1xTqPFN = uuw1xTqPFN + (806 - 805);
        if (!((987 - 986) != uuw1xTqPFN))
            zNkPHVhX = AJCjR8FSo23Y;
        else
            unLR0NoqdATV->w9Q42udT = AJCjR8FSo23Y;
        unLR0NoqdATV = AJCjR8FSo23Y;
        if (!(ZphBtO != uuw1xTqPFN))
            break;
        else {
            AJCjR8FSo23Y = (struct   inf *) malloc (LEN);
            scanf ("%d %s", &AJCjR8FSo23Y->CBtk3MAwocph, AJCjR8FSo23Y->ieSLqs4b);
        }
    }
    unLR0NoqdATV->w9Q42udT = NULL;
    return (zNkPHVhX);
}

void  LZ05vH (struct   inf *zNkPHVhX, int aPQV4tiea) {
    int *zTXP7Nfg;
    struct   inf *FVzUD96;
    int *mjyWXPKV5;
    char *HZfBtra;
    int *RwLliNyd;
    FVzUD96 = zNkPHVhX;
    for (; FVzUD96 != NULL;) {
        {
            HZfBtra = FVzUD96->ieSLqs4b;
            for (; *HZfBtra != '\0';) {
                *(mjyWXPKV5 + (*HZfBtra-'A')) = *(mjyWXPKV5 + (*HZfBtra-'A')) + (842 - 841);
                HZfBtra = (590 - 43) - (922 - 376);
            }
        }
        FVzUD96 = FVzUD96->w9Q42udT;
    }
    mjyWXPKV5 = (int *) malloc ((950 - 924) * LEM);
    {
        RwLliNyd = mjyWXPKV5;
        for (; mjyWXPKV5 + (314 - 288) > RwLliNyd;) {
            *RwLliNyd = (81 - 81);
            RwLliNyd = RwLliNyd +(978 - 977);
        }
    }
    zTXP7Nfg = mjyWXPKV5;
    FVzUD96 = zNkPHVhX;
    {
        RwLliNyd = mjyWXPKV5;
        for (; RwLliNyd < mjyWXPKV5 + (885 - 859);) {
            if (*RwLliNyd > *zTXP7Nfg)
                zTXP7Nfg = RwLliNyd;
            RwLliNyd = RwLliNyd +(85 - 84);
        }
    }
    printf ("%c\n%d\n", zTXP7Nfg - mjyWXPKV5 + 'A', *zTXP7Nfg);
    for (; FVzUD96 != NULL;) {
        {
            HZfBtra = FVzUD96->ieSLqs4b;
            for (; *HZfBtra != '\0';) {
                if (!((zTXP7Nfg - mjyWXPKV5 + 'A') != *HZfBtra))
                    printf ("%d\n", FVzUD96->CBtk3MAwocph);
                HZfBtra = (1700 - 974) - (1583 - 858);
            }
        }
        FVzUD96 = FVzUD96->w9Q42udT;
    }
}

void  main () {
    struct   inf *zNkPHVhX;
    struct   inf *dULhd4NOe7s;
    scanf ("%d", &ZphBtO);
    zNkPHVhX = KoFWvMwGVkA ();
    dULhd4NOe7s = zNkPHVhX;
    LZ05vH (zNkPHVhX, ZphBtO);
}

