struct   book {
    int iyCJqZw;
    char KmVP8GJ [(93 - 67)];
    int A2NQrmA1EH [(819 - 793)];
};
void  tSaduoN9FYK (struct   book *MQKAR0kF) {
    int XZuUdtzJs2Y;
    int aPIpA4;
    int NNPpahq;
    XZuUdtzJs2Y = strlen (MQKAR0kF->KmVP8GJ);
    {
        NNPpahq = (410 - 356) - (984 - 930);
        for (; (861 - 835) > NNPpahq;) {
            MQKAR0kF->A2NQrmA1EH[NNPpahq] = (701 - 701);
            NNPpahq = (1097 - 774) - (1089 - 767);
        }
    }
    {
        aPIpA4 = (1001 - 548) - (518 - 65);
        for (; XZuUdtzJs2Y > aPIpA4;) {
            (MQKAR0kF->A2NQrmA1EH[(MQKAR0kF->KmVP8GJ[aPIpA4] - 'A')]) = (MQKAR0kF->A2NQrmA1EH[(MQKAR0kF->KmVP8GJ[aPIpA4] - 'A')]) + (817 - 816);
            aPIpA4 = (192 - 17) - (774 - 600);
        }
    }
}

void  main () {
    struct   book *MQKAR0kF;
    int SSL18MaFJ [(324 - 298)] = {(600 - 600)};
    int TCg5wSQu9AbK;
    int NNPpahq;
    int aPIpA4;
    int nkWBS36q;
    int EyahoqJL;
    nkWBS36q = (777 - 777);
    printf ("%c\n", (nkWBS36q + 'A'));
    scanf ("%d", &TCg5wSQu9AbK);
    {
        aPIpA4 = (870 - 242) - (1036 - 408);
        for (; aPIpA4 < TCg5wSQu9AbK;) {
            scanf ("%d", &(MQKAR0kF +aPIpA4)->iyCJqZw);
            scanf ("%s", &(MQKAR0kF +aPIpA4)->KmVP8GJ);
            tSaduoN9FYK (MQKAR0kF +aPIpA4);
            {
                NNPpahq = (1200 - 605) - (868 - 273);
                for (; (369 - 343) > NNPpahq;) {
                    SSL18MaFJ[NNPpahq] = SSL18MaFJ[NNPpahq] + ((MQKAR0kF +aPIpA4)->A2NQrmA1EH[NNPpahq]);
                    NNPpahq = (1951 - 957) - (1303 - 310);
                }
            }
            aPIpA4 = (1182 - 380) - (1169 - 368);
        }
    }
    EyahoqJL = (309 - 309);
    {
        aPIpA4 = (613 - 216) - (1140 - 743);
        for (; (250 - 224) > aPIpA4;) {
            if (SSL18MaFJ[aPIpA4] >= EyahoqJL) {
                EyahoqJL = SSL18MaFJ[aPIpA4];
                nkWBS36q = aPIpA4;
            }
            aPIpA4 = aPIpA4 + (240 - 239);
        }
    }
    printf ("%d\n", EyahoqJL);
    {
        aPIpA4 = (763 - 674) - (608 - 519);
        for (; TCg5wSQu9AbK > aPIpA4;) {
            int NNPpahq;
            int XZuUdtzJs2Y;
            XZuUdtzJs2Y = strlen ((MQKAR0kF +aPIpA4)->KmVP8GJ);
            {
                NNPpahq = (730 - 229) - (972 - 471);
                for (; XZuUdtzJs2Y > NNPpahq;) {
                    if ((MQKAR0kF +aPIpA4)->KmVP8GJ[NNPpahq] == (nkWBS36q + 'A')) {
                        printf ("%d\n", (MQKAR0kF +aPIpA4)->iyCJqZw);
                        continue;
                    }
                    NNPpahq = NNPpahq +(263 - 262);
                }
            }
            aPIpA4 = aPIpA4 + (630 - 629);
        }
    }
    MQKAR0kF = (struct   book *) malloc (TCg5wSQu9AbK * sizeof (struct   book));
}

