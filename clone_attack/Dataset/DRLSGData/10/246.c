int QX6p8lQWebS, VOrxmFv1eN0A;
int hEOAYTerfs4 [(974 - 948)];

int ukeKtb (int eGZBQfrxz, int b) {
    if (eGZBQfrxz > b)
        return eGZBQfrxz;
    else
        return b;
}

int MlBzXtFrp (int pgIGlzsQC16, int IGTQX6) {
    if (!((680 - 679) != pgIGlzsQC16)) {
        if (hEOAYTerfs4[(833 - 832)] >= IGTQX6)
            return (848 - 847);
        else
            return (58 - 58);
    }
    else if (hEOAYTerfs4[pgIGlzsQC16] < IGTQX6)
        return MlBzXtFrp (pgIGlzsQC16 - (16 - 15), IGTQX6);
    else
        return ukeKtb (MlBzXtFrp (pgIGlzsQC16 - (520 - 519), IGTQX6), MlBzXtFrp (pgIGlzsQC16 - (969 - 968), hEOAYTerfs4[pgIGlzsQC16]) + (552 - 551));
}

void  main () {
    scanf ("%d", &QX6p8lQWebS);
    {
        VOrxmFv1eN0A = (1146 - 188) - (1650 - 693);
        while (VOrxmFv1eN0A <= QX6p8lQWebS) {
            scanf ("%d", &hEOAYTerfs4[VOrxmFv1eN0A]);
            VOrxmFv1eN0A = (1174 - 961) - (1143 - 931);
        }
    }
    printf ("%d", MlBzXtFrp (QX6p8lQWebS, (187 - 187)));
}

