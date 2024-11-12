int main () {
    int AnPB8sz4gE;
    int lgQKGRSo568 [(1879 - 866)];
    int QOlx6y [(1047 - 34)];
    int peY4xldQ1wW;
    char j7OQMvqWIJ [1013];
    int XTCW2Yt7;
    scanf ("%d\n", &AnPB8sz4gE);
    {
        int Lr1Yz9;
        Lr1Yz9 = (17 - 16);
        while (AnPB8sz4gE >= Lr1Yz9) {
            gets (j7OQMvqWIJ);
            gets (j7OQMvqWIJ);
            peY4xldQ1wW = strlen (j7OQMvqWIJ);
            {
                int zAdFt3;
                zAdFt3 = (317 - 317);
                for (; peY4xldQ1wW > zAdFt3;) {
                    lgQKGRSo568[peY4xldQ1wW - zAdFt3] = j7OQMvqWIJ[zAdFt3] - '0';
                    zAdFt3 = zAdFt3 + (172 - 171);
                }
            }
            XTCW2Yt7 = strlen (j7OQMvqWIJ);
            {
                int zAdFt3;
                zAdFt3 = (773 - 773);
                while (XTCW2Yt7 > zAdFt3) {
                    QOlx6y[XTCW2Yt7 -zAdFt3] = j7OQMvqWIJ[zAdFt3] - '0';
                    zAdFt3 = zAdFt3 + (712 - 711);
                }
            }
            {
                int zAdFt3;
                zAdFt3 = (530 - 529);
                for (; XTCW2Yt7 >= zAdFt3;) {
                    lgQKGRSo568[zAdFt3] -= QOlx6y[zAdFt3];
                    zAdFt3 = zAdFt3 + (217 - 216);
                }
            }
            for (int zAdFt3 = 1;
            peY4xldQ1wW >= zAdFt3; zAdFt3 = zAdFt3 + 1)
                if (lgQKGRSo568[zAdFt3] < 0) {
                    lgQKGRSo568[zAdFt3] += (118 - 108);
                    lgQKGRSo568[zAdFt3 + 1]--;
                }
            {
                int zAdFt3;
                zAdFt3 = peY4xldQ1wW;
                for (; zAdFt3 >= 1;) {
                    cout << lgQKGRSo568[zAdFt3];
                    zAdFt3 = zAdFt3 - 1;
                }
            }
            cout << endl;
            if (Lr1Yz9 > 1)
                scanf ("\n");
            Lr1Yz9 = 696 - 695;
        }
    }
}

