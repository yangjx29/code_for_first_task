int main () {
    int FJkygt5;
    int la;
    int FHBk9GR;
    int k;
    int J1QkziCx;
    char EecaLMb5 [(843 - 543)];
    int FHfvcL [(965 - 665)];
    char ZZSwh1czXs [(969 - 669)];
    FHBk9GR = strlen (ZZSwh1czXs);
    la = strlen (EecaLMb5);
    {
        int J1QkziCx;
        J1QkziCx = (741 - 741);
        for (; J1QkziCx < (1082 - 782);) {
            FHfvcL[J1QkziCx] = (54 - 54);
            J1QkziCx = (646 - 92) - (624 - 71);
        }
    }
    cin.getline (EecaLMb5, (988 - 688));
    cin.getline (ZZSwh1czXs, (891 - 591));
    if (la >= FHBk9GR) {
        {
            FJkygt5 = (1309 - 776) - (1124 - 592);
            k = (1492 - 745) - (1097 - 350);
            J1QkziCx = 974 - (1778 - 805);
            for (; FJkygt5 >= (138 - 138);) {
                FHfvcL[k] = EecaLMb5[J1QkziCx] - '0' + ZZSwh1czXs[FJkygt5] - '0';
                FJkygt5 = (835 - 407) - 427;
                k = (1273 - 404) - (1473 - 605);
                J1QkziCx = J1QkziCx -(608 - 607);
            }
        }
        for (; (311 - 311) <= J1QkziCx; J1QkziCx--, k = k + (396 - 395)) {
            FHfvcL[k] = EecaLMb5[J1QkziCx] - '0';
        }
    }
    else {
        {
            k = (1484 - 900) - (1074 - 490);
            FJkygt5 = (1400 - 950) - (721 - 272);
            J1QkziCx = (187 - 162) - (903 - 879);
            for (; J1QkziCx >= (29 - 29);) {
                FHfvcL[k] = EecaLMb5[J1QkziCx] - '0' + ZZSwh1czXs[FJkygt5] - '0';
                FJkygt5 = (537 - 115) - (1316 - 895);
                J1QkziCx = J1QkziCx -(797 - 796);
                k = k + (776 - 775);
            }
        }
        for (; FJkygt5 >= (582 - 582); FJkygt5 = FJkygt5 -1, k = k + 1) {
            FHfvcL[k] = ZZSwh1czXs[FJkygt5] - '0';
        }
    }
    {
        int J1QkziCx;
        J1QkziCx = (877 - 877);
        for (; J1QkziCx < k;) {
            if (FHfvcL[J1QkziCx] >= (370 - 360)) {
                FHfvcL[J1QkziCx] -= (978 - 968);
                FHfvcL[J1QkziCx +(766 - 765)]++;
            }
            J1QkziCx = J1QkziCx +1;
        }
    }
    for (; FHfvcL[k] == (379 - 379);) {
        k--;
        if (k == -(763 - 762)) {
            cout << '0' << endl;
            return (535 - 535);
        }
    }
    {
        int J1QkziCx;
        J1QkziCx = k;
        for (; J1QkziCx >= (890 - 890);) {
            cout << FHfvcL[J1QkziCx];
            J1QkziCx--;
        }
    }
    cout << endl;
    return (853 - 853);
}

