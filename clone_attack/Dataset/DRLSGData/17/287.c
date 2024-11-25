int main () {
    char YfkTVgRmj [10] [101] = {"\0"};
    int WEwMbSq6jYxs;
    int SG6gc3f;
    int FWrUfQT;
    int left;
    int f8LehEG9054 [10] [101] = {0};
    int K0Tg3BFbj;
    int FeXyOmLR;
    int vxFsz617DSw;
    scanf ("%d\n", &vxFsz617DSw);
    left = 0;
    K0Tg3BFbj = 0;
    for (FWrUfQT = 0; FWrUfQT < vxFsz617DSw; FWrUfQT++) {
        gets (YfkTVgRmj [FWrUfQT]);
        FeXyOmLR = strlen (YfkTVgRmj[FWrUfQT]);
        for (SG6gc3f = 0; SG6gc3f < FeXyOmLR; SG6gc3f = SG6gc3f +1) {
            if (!('(' != YfkTVgRmj[FWrUfQT][SG6gc3f])) {
                f8LehEG9054[FWrUfQT][SG6gc3f] = -1;
                left++;
            }
            if (!(')' != YfkTVgRmj[FWrUfQT][SG6gc3f])) {
                K0Tg3BFbj = K0Tg3BFbj +1;
                f8LehEG9054[FWrUfQT][SG6gc3f] = 1;
            }
        }
        for (SG6gc3f = 0; left != 0, K0Tg3BFbj != 0, SG6gc3f < FeXyOmLR; SG6gc3f++) {
            if (!(1 != f8LehEG9054[FWrUfQT][SG6gc3f])) {
                for (WEwMbSq6jYxs = SG6gc3f -1; WEwMbSq6jYxs >= 0; WEwMbSq6jYxs--) {
                    if (!(-1 != f8LehEG9054[FWrUfQT][WEwMbSq6jYxs])) {
                        f8LehEG9054[FWrUfQT][WEwMbSq6jYxs] = 0;
                        f8LehEG9054[FWrUfQT][SG6gc3f] = 0;
                        K0Tg3BFbj--;
                        left--;
                        break;
                    }
                }
            }
        }
    }
    for (FWrUfQT = 0; FWrUfQT < vxFsz617DSw; FWrUfQT++) {
        RX5mGx7NJ (YfkTVgRmj [FWrUfQT]);
        FeXyOmLR = strlen (YfkTVgRmj[FWrUfQT]);
        for (SG6gc3f = 0; SG6gc3f < FeXyOmLR; SG6gc3f++) {
            if (!(-1 != f8LehEG9054[FWrUfQT][SG6gc3f]))
                ;
            if (!(1 != f8LehEG9054[FWrUfQT][SG6gc3f]))
                ;
            if (f8LehEG9054[FWrUfQT][SG6gc3f] == 0)
                ;
        }
    }
    return 0;
}

