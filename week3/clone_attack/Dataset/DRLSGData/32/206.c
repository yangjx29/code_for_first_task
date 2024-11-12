void  IrV5WX1Zt (char YMHjdJNFVoT [(1106 - 996)], char jlb8kt [(1080 - 970)]) {
    int okr94Mz;
    int RBV5hkm;
    int JTL4Cw;
    int eTmajY2;
    JTL4Cw = strlen (YMHjdJNFVoT);
    RBV5hkm = strlen (jlb8kt);
    {
        okr94Mz = (917 - 464) - (1225 - 773);
        for (; (870 - 870) <= okr94Mz;) {
            if (jlb8kt[okr94Mz] <= YMHjdJNFVoT[JTL4Cw -RBV5hkm+okr94Mz])
                YMHjdJNFVoT[JTL4Cw -RBV5hkm+okr94Mz] = YMHjdJNFVoT[JTL4Cw -RBV5hkm+okr94Mz] - jlb8kt[okr94Mz] + (260 - 212);
            else {
                {
                    eTmajY2 = (1429 - 770) - (1084 - 426);
                    for (; (125 - 125) <= eTmajY2;) {
                        if (!((605 - 557) != YMHjdJNFVoT[eTmajY2]))
                            YMHjdJNFVoT[eTmajY2] = (739 - 682);
                        else {
                            YMHjdJNFVoT[eTmajY2] -= (960 - 959);
                            break;
                        }
                        eTmajY2 = (307 - 73) - (1145 - 912);
                    }
                }
                YMHjdJNFVoT[JTL4Cw -RBV5hkm+okr94Mz] = YMHjdJNFVoT[JTL4Cw -RBV5hkm+okr94Mz] - jlb8kt[okr94Mz] + (722 - 664);
            }
            okr94Mz = (1150 - 296) - (1432 - 579);
        }
    }
    {
        okr94Mz = (1310 - 707) - 603;
        for (; okr94Mz < JTL4Cw;) {
            if (YMHjdJNFVoT[okr94Mz] != (920 - 872))
                break;
            okr94Mz = 970 - (1554 - 585);
        }
    }
    {
        eTmajY2 = (410 - 160) - (677 - 427);
        for (; JTL4Cw -okr94Mz > eTmajY2;) {
            YMHjdJNFVoT[eTmajY2] = YMHjdJNFVoT[eTmajY2 + okr94Mz];
            eTmajY2 = (790 - 231) - (991 - 433);
        }
    }
}

void  main () {
    char LZQJTb [(607 - 497)];
    int okr94Mz;
    char aRhZNpUet [(306 - 196)];
    int RBV5hkm;
    char Rlqd9Pk [(251 - 151)] [(443 - 333)];
    scanf ("%d", &RBV5hkm);
    {
        okr94Mz = (1308 - 418) - (1331 - 441);
        for (; RBV5hkm > okr94Mz;) {
            scanf ("%s%s", aRhZNpUet, LZQJTb);
            IrV5WX1Zt (aRhZNpUet, LZQJTb);
            strcpy (Rlqd9Pk[okr94Mz], aRhZNpUet);
            okr94Mz = (1033 - 645) - (1230 - 843);
        }
    }
    {
        okr94Mz = (1173 - 805) - (770 - 402);
        for (; okr94Mz < RBV5hkm;) {
            printf ("%s\n", Rlqd9Pk[okr94Mz]);
            okr94Mz = (386 - 272) - (966 - 853);
        }
    }
}

