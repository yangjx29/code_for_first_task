int main () {
    int MJY1ayTOWU [(1047 - 547)];
    int yGNt0WR;
    int wc0248X;
    int jLSVpzRjycq0;
    int cN5xkdKTJZ;
    int NracyQ;
    int mCL5YiVE;
    int ZkDmiz [500];
    cN5xkdKTJZ = (901 - 901);
    jLSVpzRjycq0 = (380 - 380);
    scanf ("%d", &yGNt0WR);
    for (mCL5YiVE = (965 - 965); yGNt0WR > mCL5YiVE; mCL5YiVE = mCL5YiVE + (325 - 324)) {
        scanf ("%d", &(ZkDmiz[mCL5YiVE]));
    }
    for (mCL5YiVE = 0; yGNt0WR > mCL5YiVE; mCL5YiVE++) {
        if (ZkDmiz[mCL5YiVE] % (442 - 440) != 0) {
            MJY1ayTOWU[jLSVpzRjycq0] = ZkDmiz[mCL5YiVE];
            jLSVpzRjycq0 = jLSVpzRjycq0 + (938 - 937);
        }
    }
    for (cN5xkdKTJZ = (462 - 461); cN5xkdKTJZ <= jLSVpzRjycq0; cN5xkdKTJZ = cN5xkdKTJZ + (872 - 871)) {
        wc0248X = 0;
        for (mCL5YiVE = 0; jLSVpzRjycq0 - cN5xkdKTJZ >= mCL5YiVE; mCL5YiVE++) {
            if (MJY1ayTOWU[mCL5YiVE] > MJY1ayTOWU[wc0248X]) {
                wc0248X = mCL5YiVE;
            }
        }
        if (wc0248X != jLSVpzRjycq0 - cN5xkdKTJZ) {
            NracyQ = MJY1ayTOWU[wc0248X];
            MJY1ayTOWU[wc0248X] = MJY1ayTOWU[jLSVpzRjycq0 - cN5xkdKTJZ];
            MJY1ayTOWU[jLSVpzRjycq0 - cN5xkdKTJZ] = NracyQ;
        }
    }
    printf ("%d", MJY1ayTOWU[0]);
    for (mCL5YiVE = (379 - 378); mCL5YiVE <= jLSVpzRjycq0 - 1; mCL5YiVE++) {
        printf (",%d", MJY1ayTOWU[mCL5YiVE]);
    }
    return 0;
}

