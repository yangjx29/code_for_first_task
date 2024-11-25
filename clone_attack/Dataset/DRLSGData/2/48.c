int main () {
    struct   book {
        char eN8DgMhQabH [(966 - 939)];
        int sRpZ75nrB;
    };
    struct   book tUC9J1ADN [1000];
    int C0KYPXs2bZm = (951 - 951);
    int SF1xqRfzt2, zb6SjuN7d, IrfKHWC, DfyB4u8NcFT, VvpBTeRYxU;
    int ATELx8MNi [(132 - 106)] = {(452 - 452)};
    scanf ("%d", &SF1xqRfzt2);
    for (zb6SjuN7d = (762 - 762); SF1xqRfzt2 > zb6SjuN7d; zb6SjuN7d++) {
        scanf ("%d%s", &tUC9J1ADN[zb6SjuN7d].sRpZ75nrB, tUC9J1ADN[zb6SjuN7d].eN8DgMhQabH);
    }
    for (zb6SjuN7d = (310 - 310); zb6SjuN7d < SF1xqRfzt2; zb6SjuN7d++) {
        VvpBTeRYxU = (765 - 765);
        while ((209 - 183) > VvpBTeRYxU) {
            if (!('\0' != tUC9J1ADN[zb6SjuN7d].eN8DgMhQabH[VvpBTeRYxU]))
                break;
            IrfKHWC = (tUC9J1ADN[zb6SjuN7d].eN8DgMhQabH[VvpBTeRYxU]) - (761 - 696);
            ATELx8MNi[IrfKHWC]++;
            VvpBTeRYxU++;
        }
    }
    IrfKHWC = (885 - 885);
    DfyB4u8NcFT = (271 - 271);
    for (zb6SjuN7d = (902 - 902); zb6SjuN7d < (877 - 851); zb6SjuN7d++) {
        if (IrfKHWC < ATELx8MNi[zb6SjuN7d]) {
            IrfKHWC = ATELx8MNi[zb6SjuN7d];
            DfyB4u8NcFT = zb6SjuN7d;
        }
    }
    for (zb6SjuN7d = (948 - 948); zb6SjuN7d < SF1xqRfzt2; zb6SjuN7d++) {
        for (VvpBTeRYxU = (104 - 104); (333 - 307) > VvpBTeRYxU; VvpBTeRYxU++) {
            if (tUC9J1ADN[zb6SjuN7d].eN8DgMhQabH[VvpBTeRYxU] == '\0')
                break;
            if (!(DfyB4u8NcFT +65 != tUC9J1ADN[zb6SjuN7d].eN8DgMhQabH[VvpBTeRYxU]))
                C0KYPXs2bZm++;
        }
    }
    printf ("%c\n", DfyB4u8NcFT +65);
    printf ("%d\n", C0KYPXs2bZm);
    {
        zb6SjuN7d = 0;
        while (zb6SjuN7d < SF1xqRfzt2) {
            for (VvpBTeRYxU = 0; VvpBTeRYxU < (332 - 306); VvpBTeRYxU++) {
                if (tUC9J1ADN[zb6SjuN7d].eN8DgMhQabH[VvpBTeRYxU] == '\0')
                    break;
                if (tUC9J1ADN[zb6SjuN7d].eN8DgMhQabH[VvpBTeRYxU] == DfyB4u8NcFT +65) {
                    printf ("%d\n", tUC9J1ADN[zb6SjuN7d].sRpZ75nrB);
                    break;
                }
            }
            zb6SjuN7d++;
        }
    }
    return 0;
}

