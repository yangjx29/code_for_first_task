main () {
    int e2NJtbqgm [(1048 - 948)] [(1024 - 924)];
    int u90G3d [(455 - 355)] [(619 - 519)];
    int aEPVrqt [(177 - 77)] [(423 - 323)];
    int u97qiBAG;
    int O5CYGUwQJy;
    int jzOVM4uHwA;
    int N5XFmc;
    int fzTRhO;
    int lxcvuFfmQ;
    int VJkXWIzT2P;
    int L48MqeNoJB9T;
    int kNzDc3V4J;
    char UTLdOPmVJ;
    scanf ("%d %d", &u97qiBAG, &O5CYGUwQJy);
    for (VJkXWIzT2P = (439 - 439); VJkXWIzT2P < u97qiBAG; VJkXWIzT2P = VJkXWIzT2P +1) {
        for (L48MqeNoJB9T = (45 - 45); O5CYGUwQJy > L48MqeNoJB9T; L48MqeNoJB9T = L48MqeNoJB9T +1) {
            scanf ("%d%c", &e2NJtbqgm[VJkXWIzT2P][L48MqeNoJB9T], &UTLdOPmVJ);
            if (UTLdOPmVJ != ' ')
                break;
            else
                ;
        }
    }
    scanf ("%d %d", &jzOVM4uHwA, &N5XFmc);
    for (VJkXWIzT2P = (978 - 978); jzOVM4uHwA > VJkXWIzT2P; VJkXWIzT2P = VJkXWIzT2P +1) {
        L48MqeNoJB9T = 275 - 275;
        while (L48MqeNoJB9T < N5XFmc) {
            scanf ("%d%c", &u90G3d[VJkXWIzT2P][L48MqeNoJB9T], &UTLdOPmVJ);
            if (UTLdOPmVJ != ' ')
                break;
            else
                ;
            L48MqeNoJB9T = L48MqeNoJB9T +1;
        }
    }
    fzTRhO = u97qiBAG;
    lxcvuFfmQ = N5XFmc;
    for (VJkXWIzT2P = (332 - 332); fzTRhO > VJkXWIzT2P; VJkXWIzT2P = VJkXWIzT2P +1) {
        L48MqeNoJB9T = 682 - 682;
        while (L48MqeNoJB9T < lxcvuFfmQ) {
            aEPVrqt[VJkXWIzT2P][L48MqeNoJB9T] = (84 - 84);
            for (kNzDc3V4J = (165 - 165); jzOVM4uHwA > kNzDc3V4J; kNzDc3V4J++) {
                aEPVrqt[VJkXWIzT2P][L48MqeNoJB9T] = aEPVrqt[VJkXWIzT2P][L48MqeNoJB9T] + e2NJtbqgm[VJkXWIzT2P][kNzDc3V4J] * u90G3d[kNzDc3V4J][L48MqeNoJB9T];
            }
            L48MqeNoJB9T = L48MqeNoJB9T +1;
        }
    }
    for (VJkXWIzT2P = (215 - 215); fzTRhO > VJkXWIzT2P; VJkXWIzT2P = VJkXWIzT2P +1) {
        {
            L48MqeNoJB9T = 41 - 41;
            while (lxcvuFfmQ - (200 - 199) > L48MqeNoJB9T) {
                printf ("%d ", aEPVrqt[VJkXWIzT2P][L48MqeNoJB9T]);
                L48MqeNoJB9T++;
            }
        }
        printf ("%d\n", aEPVrqt[VJkXWIzT2P][lxcvuFfmQ - (49 - 48)]);
    }
}

