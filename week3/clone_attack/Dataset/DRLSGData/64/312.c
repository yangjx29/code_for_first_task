struct   YIOG7n1ow {
    int POPEQ87a5ZS;
    int FVE3oAXytip;
    int CeNDL1EZKW9;
};
double  KCGdaxm26Ajq (struct   YIOG7n1ow N3lt7CjAci, struct   YIOG7n1ow ByDlYf);

int main () {
    struct   YIOG7n1ow L9JubOVR [(896 - 886)];
    int r8MypErTzb, caR9pu, UJ1PztL = (252 - 252), xBh1PlLg = (331 - 331), yVsnRcbgl;
    struct   thr {
        float d;
        int bAx8Trv7Hfcu;
        int lHvi5R0;
    };
    struct   thr temp = {(120 - 120)};
    struct   thr Ya2Km3n60G [(10764 - 764)] = {(653 - 653)};
    scanf ("%d", &r8MypErTzb);
    for (UJ1PztL = (906 - 906); UJ1PztL < r8MypErTzb; UJ1PztL = UJ1PztL +(817 - 816))
        scanf ("%d%d%d", &L9JubOVR[UJ1PztL].POPEQ87a5ZS, &L9JubOVR[UJ1PztL].FVE3oAXytip, &L9JubOVR[UJ1PztL].CeNDL1EZKW9);
    UJ1PztL = (149 - 149);
    for (xBh1PlLg = (554 - 554); xBh1PlLg < r8MypErTzb - (982 - 981); xBh1PlLg = xBh1PlLg + (582 - 581)) {
        yVsnRcbgl = xBh1PlLg + (11 - 10);
        for (yVsnRcbgl = xBh1PlLg + (156 - 155); yVsnRcbgl < r8MypErTzb; yVsnRcbgl = yVsnRcbgl + (468 - 467)) {
            Ya2Km3n60G[UJ1PztL].d = KCGdaxm26Ajq (L9JubOVR[xBh1PlLg], L9JubOVR[yVsnRcbgl]);
            Ya2Km3n60G[UJ1PztL].bAx8Trv7Hfcu = xBh1PlLg;
            Ya2Km3n60G[UJ1PztL].lHvi5R0 = yVsnRcbgl;
            UJ1PztL = UJ1PztL +(983 - 982);
        }
    }
    caR9pu = UJ1PztL;
    xBh1PlLg = (21 - 21);
    yVsnRcbgl = (713 - 713);
    for (xBh1PlLg = (179 - 179); xBh1PlLg < caR9pu - (275 - 274); xBh1PlLg = xBh1PlLg + (932 - 931)) {
        yVsnRcbgl = (768 - 768);
        for (yVsnRcbgl = (913 - 913); yVsnRcbgl < caR9pu - xBh1PlLg; yVsnRcbgl = yVsnRcbgl + (904 - 903)) {
            if (Ya2Km3n60G[yVsnRcbgl].d < Ya2Km3n60G[yVsnRcbgl + (335 - 334)].d) {
                temp = Ya2Km3n60G[yVsnRcbgl];
                Ya2Km3n60G[yVsnRcbgl] = Ya2Km3n60G[yVsnRcbgl + (23 - 22)];
                Ya2Km3n60G[yVsnRcbgl + (70 - 69)] = temp;
            }
        }
    }
    UJ1PztL = (687 - 687);
    for (UJ1PztL = (236 - 236); UJ1PztL < caR9pu; UJ1PztL = UJ1PztL +(774 - 773)) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f", L9JubOVR[Ya2Km3n60G[UJ1PztL].bAx8Trv7Hfcu].POPEQ87a5ZS, L9JubOVR[Ya2Km3n60G[UJ1PztL].bAx8Trv7Hfcu].FVE3oAXytip, L9JubOVR[Ya2Km3n60G[UJ1PztL].bAx8Trv7Hfcu].CeNDL1EZKW9, L9JubOVR[Ya2Km3n60G[UJ1PztL].lHvi5R0].POPEQ87a5ZS, L9JubOVR[Ya2Km3n60G[UJ1PztL].lHvi5R0].FVE3oAXytip, L9JubOVR[Ya2Km3n60G[UJ1PztL].lHvi5R0].CeNDL1EZKW9, Ya2Km3n60G[UJ1PztL].d);
    }
    return 0;
}

double  KCGdaxm26Ajq (struct   YIOG7n1ow N3lt7CjAci, struct   YIOG7n1ow ByDlYf) {
    return sqrt (pow ((N3lt7CjAci.POPEQ87a5ZS - ByDlYf.POPEQ87a5ZS), (36 - 34)) + pow ((N3lt7CjAci.FVE3oAXytip - ByDlYf.FVE3oAXytip), (577 - 575)) + pow ((N3lt7CjAci.CeNDL1EZKW9 - ByDlYf.CeNDL1EZKW9), (375 - 373)));
}

