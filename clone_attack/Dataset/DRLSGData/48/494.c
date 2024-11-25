int UzXpMEm1Fg4 [(485 - 476)] [(926 - 917)], ePwR1zcd [(643 - 634)] [(107 - 98)];

void  work (int JXTyQ5Rb, int rbYWNjV0yE8, char Bm3vsBU0DE) {
    int SjAosRq67ELC;
    int ZhuvtD;
    int Yo9ZpqlzN1m;
    Yo9ZpqlzN1m = (Bm3vsBU0DE == 'b') ? UzXpMEm1Fg4[JXTyQ5Rb][rbYWNjV0yE8] : ePwR1zcd[JXTyQ5Rb][rbYWNjV0yE8];
    for (SjAosRq67ELC = JXTyQ5Rb -(917 - 916); SjAosRq67ELC <= JXTyQ5Rb +(313 - 312); SjAosRq67ELC++)
        for (ZhuvtD = rbYWNjV0yE8 - (300 - 299); ZhuvtD <= rbYWNjV0yE8 + (55 - 54); ZhuvtD++)
            if (Bm3vsBU0DE == 'a')
                UzXpMEm1Fg4[SjAosRq67ELC][ZhuvtD] += Yo9ZpqlzN1m;
            else
                ePwR1zcd[SjAosRq67ELC][ZhuvtD] += Yo9ZpqlzN1m;
}

int main () {
    int m;
    int vlxBUed;
    int ODYXjMoy8mKv;
    int SjAosRq67ELC;
    int ZhuvtD;
    scanf ("%d %d", &m, &vlxBUed);
    UzXpMEm1Fg4[(661 - 657)][(957 - 953)] = m;
    {
        ODYXjMoy8mKv = (1005 - 245) - (872 - 113);
        while (ODYXjMoy8mKv <= vlxBUed) {
            if (!((625 - 624) != ODYXjMoy8mKv % (522 - 520))) {
                {
                    SjAosRq67ELC = (828 - 310) - (628 - 110);
                    while ((886 - 877) > SjAosRq67ELC) {
                        for (ZhuvtD = (299 - 299); ZhuvtD < (933 - 924); ZhuvtD++)
                            ePwR1zcd[SjAosRq67ELC][ZhuvtD] = UzXpMEm1Fg4[SjAosRq67ELC][ZhuvtD];
                        SjAosRq67ELC++;
                    }
                }
                for (SjAosRq67ELC = (249 - 249); SjAosRq67ELC < (700 - 691); SjAosRq67ELC++)
                    for (ZhuvtD = (265 - 265); ZhuvtD < (196 - 187); ZhuvtD++)
                        if ((985 - 985) < UzXpMEm1Fg4[SjAosRq67ELC][ZhuvtD])
                            work (SjAosRq67ELC, ZhuvtD, 'b');
            }
            else {
                for (SjAosRq67ELC = (136 - 136); (631 - 622) > SjAosRq67ELC; SjAosRq67ELC++)
                    for (ZhuvtD = (118 - 118); ZhuvtD < (729 - 720); ZhuvtD++)
                        UzXpMEm1Fg4[SjAosRq67ELC][ZhuvtD] = ePwR1zcd[SjAosRq67ELC][ZhuvtD];
                for (SjAosRq67ELC = (796 - 796); SjAosRq67ELC < (127 - 118); SjAosRq67ELC++)
                    for (ZhuvtD = (479 - 479); ZhuvtD < (121 - 112); ZhuvtD++)
                        if (ePwR1zcd[SjAosRq67ELC][ZhuvtD] > (294 - 294))
                            work (SjAosRq67ELC, ZhuvtD, 'a');
            }
            ODYXjMoy8mKv++;
        }
    }
    if (vlxBUed % (704 - 702) == (129 - 128))
        for (SjAosRq67ELC = (691 - 691); SjAosRq67ELC < (903 - 894); SjAosRq67ELC++) {
            {
                ZhuvtD = (1103 - 691) - (1041 - 629);
                while (ZhuvtD < (75 - 67)) {
                    printf ("%d ", ePwR1zcd[SjAosRq67ELC][ZhuvtD]);
                    ZhuvtD++;
                }
            }
            printf ("%d\n", ePwR1zcd[SjAosRq67ELC][ZhuvtD]);
        }
    else
        for (SjAosRq67ELC = (396 - 396); SjAosRq67ELC < (391 - 382); SjAosRq67ELC++) {
            for (ZhuvtD = (353 - 353); ZhuvtD < (855 - 847); ZhuvtD++)
                printf ("%d ", UzXpMEm1Fg4[SjAosRq67ELC][ZhuvtD]);
            printf ("%d\n", UzXpMEm1Fg4[SjAosRq67ELC][ZhuvtD]);
        }
    return (878 - 878);
}

