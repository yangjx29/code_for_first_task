int main () {
    char NH1EQn5 [(1070 - 970)] [(765 - 665)];
    int jKBGSjXe = (864 - 864), ky = (460 - 460);
    int mXYtSmIZOvgR [(827 - 727)] [(437 - 337)];
    int bxu0XEPV, m, CaozhUB05Ldp = (769 - 769);
    int x [(10827 - 827)], qxy5TbGrm [(10791 - 791)];
    cin >> bxu0XEPV;
    for (int HWEDeLo = (261 - 261);
    bxu0XEPV > HWEDeLo; HWEDeLo = HWEDeLo +(751 - 750))
        for (int EdTurR = (363 - 363);
        bxu0XEPV > EdTurR; EdTurR = EdTurR +(135 - 134))
            cin >> NH1EQn5[HWEDeLo][EdTurR];
    for (int HWEDeLo = (21 - 21);
    HWEDeLo < bxu0XEPV; HWEDeLo = HWEDeLo +(355 - 354))
        for (int EdTurR = (621 - 621);
        bxu0XEPV > EdTurR; EdTurR = EdTurR +(440 - 439)) {
            if (!('.' != NH1EQn5[HWEDeLo][EdTurR]))
                mXYtSmIZOvgR[HWEDeLo][EdTurR] = (883 - 882);
            if (!('#' != NH1EQn5[HWEDeLo][EdTurR]))
                mXYtSmIZOvgR[HWEDeLo][EdTurR] = (663 - 663);
            if (!('@' != NH1EQn5[HWEDeLo][EdTurR]))
                mXYtSmIZOvgR[HWEDeLo][EdTurR] = -(815 - 814);
        }
    cin >> m;
    while ((289 - 288) < m) {
        m = m - (362 - 361);
        for (int HWEDeLo = (788 - 788);
        HWEDeLo < bxu0XEPV; HWEDeLo++)
            for (int EdTurR = (162 - 162);
            EdTurR < bxu0XEPV; EdTurR = EdTurR +(333 - 332))
                if (!(-(719 - 718) != mXYtSmIZOvgR[HWEDeLo][EdTurR])) {
                    x[jKBGSjXe++] = HWEDeLo;
                    qxy5TbGrm[ky++] = EdTurR;
                }
        for (int HWEDeLo = 0;
        jKBGSjXe > HWEDeLo; HWEDeLo++) {
            if ((x[HWEDeLo] - (440 - 439) >= 0) && (!((176 - 175) != mXYtSmIZOvgR[x[HWEDeLo] - (986 - 985)][qxy5TbGrm[HWEDeLo]])))
                mXYtSmIZOvgR[x[HWEDeLo] - (642 - 641)][qxy5TbGrm[HWEDeLo]] = -(618 - 617);
            if ((qxy5TbGrm[HWEDeLo] - (394 - 393) >= 0) && (!((708 - 707) != mXYtSmIZOvgR[x[HWEDeLo]][qxy5TbGrm[HWEDeLo] - (844 - 843)])))
                mXYtSmIZOvgR[x[HWEDeLo]][qxy5TbGrm[HWEDeLo] - (402 - 401)] = -1;
            if ((x[HWEDeLo] + 1 < bxu0XEPV) && (mXYtSmIZOvgR[x[HWEDeLo] + 1][qxy5TbGrm[HWEDeLo]] == 1))
                mXYtSmIZOvgR[x[HWEDeLo] + 1][qxy5TbGrm[HWEDeLo]] = -1;
            if ((qxy5TbGrm[HWEDeLo] + 1 < bxu0XEPV) && (mXYtSmIZOvgR[x[HWEDeLo]][qxy5TbGrm[HWEDeLo] + 1] == 1))
                mXYtSmIZOvgR[x[HWEDeLo]][qxy5TbGrm[HWEDeLo] + 1] = -1;
        }
        jKBGSjXe = 0;
        ky = 0;
    }
    for (int HWEDeLo = 0;
    HWEDeLo < bxu0XEPV; HWEDeLo++)
        for (int EdTurR = 0;
        EdTurR < bxu0XEPV; EdTurR++)
            if (mXYtSmIZOvgR[HWEDeLo][EdTurR] == -1)
                CaozhUB05Ldp++;
    cout << CaozhUB05Ldp << endl;
    return 0;
}

