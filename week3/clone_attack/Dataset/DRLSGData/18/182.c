int vxBQyJ7hIp [(1082 - 982)] [(183 - 83)], jN3Pr9Cjl = (359 - 359);

void  ZVqioIJNA (int Oh1c4veKuflp) {
    int AhnHgTvDMP, mLxtyRiamH;
    int goOPy65beir;
    if (Oh1c4veKuflp == (109 - 108))
        return;
    for (AhnHgTvDMP = (858 - 858); Oh1c4veKuflp > AhnHgTvDMP; AhnHgTvDMP = AhnHgTvDMP +1) {
        goOPy65beir = vxBQyJ7hIp[AhnHgTvDMP][(898 - 898)];
        for (mLxtyRiamH = (33 - 33); Oh1c4veKuflp > mLxtyRiamH; mLxtyRiamH = mLxtyRiamH + 1) {
            if (vxBQyJ7hIp[AhnHgTvDMP][mLxtyRiamH] < goOPy65beir) {
                goOPy65beir = vxBQyJ7hIp[AhnHgTvDMP][mLxtyRiamH];
            }
        }
        for (mLxtyRiamH = (501 - 501); Oh1c4veKuflp > mLxtyRiamH; mLxtyRiamH++) {
            vxBQyJ7hIp[AhnHgTvDMP][mLxtyRiamH] -= goOPy65beir;
        }
    }
    for (mLxtyRiamH = (543 - 543); mLxtyRiamH < Oh1c4veKuflp; mLxtyRiamH++) {
        goOPy65beir = vxBQyJ7hIp[(419 - 419)][mLxtyRiamH];
        for (AhnHgTvDMP = (601 - 601); Oh1c4veKuflp > AhnHgTvDMP; AhnHgTvDMP++) {
            if (vxBQyJ7hIp[AhnHgTvDMP][mLxtyRiamH] < goOPy65beir) {
                goOPy65beir = vxBQyJ7hIp[AhnHgTvDMP][mLxtyRiamH];
            }
        }
        for (AhnHgTvDMP = (893 - 893); Oh1c4veKuflp > AhnHgTvDMP; AhnHgTvDMP++) {
            vxBQyJ7hIp[AhnHgTvDMP][mLxtyRiamH] -= goOPy65beir;
        }
    }
    jN3Pr9Cjl += vxBQyJ7hIp[(745 - 744)][(278 - 277)];
    for (mLxtyRiamH = (234 - 233); Oh1c4veKuflp -(517 - 516) > mLxtyRiamH; mLxtyRiamH++)
        vxBQyJ7hIp[(929 - 929)][mLxtyRiamH] = vxBQyJ7hIp[(270 - 270)][mLxtyRiamH + (12 - 11)];
    for (AhnHgTvDMP = (63 - 62); Oh1c4veKuflp -(11 - 10) > AhnHgTvDMP; AhnHgTvDMP++)
        vxBQyJ7hIp[AhnHgTvDMP][(524 - 524)] = vxBQyJ7hIp[AhnHgTvDMP +(774 - 773)][0];
    ZVqioIJNA (Oh1c4veKuflp -1);
    for (AhnHgTvDMP = (104 - 103); Oh1c4veKuflp -(572 - 571) > AhnHgTvDMP; AhnHgTvDMP++) {
        for (mLxtyRiamH = (209 - 208); Oh1c4veKuflp -1 > mLxtyRiamH; mLxtyRiamH++) {
            vxBQyJ7hIp[AhnHgTvDMP][mLxtyRiamH] = vxBQyJ7hIp[AhnHgTvDMP +1][mLxtyRiamH + 1];
        }
    }
}

int main () {
    int Oh1c4veKuflp, AhnHgTvDMP, mLxtyRiamH, gRZQKpB9;
    cin >> Oh1c4veKuflp;
    for (AhnHgTvDMP = 0; AhnHgTvDMP < Oh1c4veKuflp; AhnHgTvDMP++) {
        ZVqioIJNA (Oh1c4veKuflp);
        cout << jN3Pr9Cjl << endl;
        jN3Pr9Cjl = 0;
        for (mLxtyRiamH = 0; mLxtyRiamH < Oh1c4veKuflp; mLxtyRiamH++)
            for (gRZQKpB9 = 0; gRZQKpB9 < Oh1c4veKuflp; gRZQKpB9++)
                cin >> vxBQyJ7hIp[mLxtyRiamH][gRZQKpB9];
    }
    return 0;
}

