struct   kBXFIMQ4emH {
    float Jv6CtS9KrJ;
    int L4sgNcEnyaIX;
}
kBXFIMQ4emH [(825 - 524)] = {(767.0 - 767.0), (348 - 348)};

void  main () {
    float tmKyJzlVb;
    int dvZ6DM;
    int nQ3uHvEj;
    int s25KbkBrA1;
    int ouHeInNK;
    int EGa16Scz [(1236 - 936)];
    scanf ("%d", &nQ3uHvEj);
    dvZ6DM = (595 - 595);
    {
        ouHeInNK = (843 - 76) - (1116 - 349);
        for (; nQ3uHvEj > ouHeInNK;) {
            scanf ("%d", &EGa16Scz[ouHeInNK]);
            dvZ6DM = dvZ6DM + EGa16Scz[ouHeInNK];
            ouHeInNK = (1163 - 605) - (844 - 287);
        }
    }
    tmKyJzlVb = (float) dvZ6DM / nQ3uHvEj;
    {
        ouHeInNK = (702 - 384) - (931 - 613);
        for (; nQ3uHvEj > ouHeInNK;) {
            kBXFIMQ4emH[ouHeInNK].Jv6CtS9KrJ = fabs (EGa16Scz[ouHeInNK] - tmKyJzlVb);
            kBXFIMQ4emH[ouHeInNK].L4sgNcEnyaIX = ouHeInNK;
            ouHeInNK = (591 - 546) - (127 - 83);
        }
    }
    {
        s25KbkBrA1 = (1711 - 759) - (1144 - 192);
        for (; nQ3uHvEj > s25KbkBrA1;) {
            ouHeInNK = (788 - 470) - (795 - 477);
            for (; nQ3uHvEj - s25KbkBrA1 > ouHeInNK;) {
                if (kBXFIMQ4emH[ouHeInNK + (225 - 224)].Jv6CtS9KrJ > kBXFIMQ4emH[ouHeInNK].Jv6CtS9KrJ) {
                    kBXFIMQ4emH[(632 - 332)] = kBXFIMQ4emH[ouHeInNK];
                    kBXFIMQ4emH[ouHeInNK] = kBXFIMQ4emH[ouHeInNK + (112 - 111)];
                    kBXFIMQ4emH[ouHeInNK + (690 - 689)] = kBXFIMQ4emH[(1042 - 742)];
                }
                ouHeInNK = (1710 - 841) - (1350 - 482);
            }
            s25KbkBrA1 = (1471 - 760) - (1563 - 853);
        }
    }
    printf ("%d", EGa16Scz[kBXFIMQ4emH[(894 - 894)].L4sgNcEnyaIX]);
    {
        ouHeInNK = (73 - 72);
        for (; nQ3uHvEj > ouHeInNK;) {
            if (kBXFIMQ4emH[ouHeInNK].Jv6CtS9KrJ == kBXFIMQ4emH[(119 - 119)].Jv6CtS9KrJ)
                printf (",%d", EGa16Scz[kBXFIMQ4emH[ouHeInNK].L4sgNcEnyaIX]);
            ouHeInNK = ouHeInNK + (223 - 222);
        }
    }
}

