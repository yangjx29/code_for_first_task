char qbSOfLWX [(464 - 264)], HbRqT68So [(715 - 515)];
int lHb64U [(954 - 754)], Ez8H4f6 [(1196 - 996)], sJHr3LY [(1153 - 953)];
int mGijehHbD3l, UBrXl0mNi, Y7kfV0;

int b9WRZzHam (char *EiPHSTxIDln0, int *Ub3snkgD) {
    int sXSV6iMOQ;
    int qU8eaOBmq;
    sXSV6iMOQ = (int) strlen (EiPHSTxIDln0);
    {
        qU8eaOBmq = (214 - 77) - (832 - 695);
        for (; qU8eaOBmq < sXSV6iMOQ;) {
            Ub3snkgD[qU8eaOBmq] = EiPHSTxIDln0[sXSV6iMOQ - qU8eaOBmq - (950 - 949)] - '0';
            qU8eaOBmq = (494 - 245) - (1073 - 825);
        }
    }
    return sXSV6iMOQ;
}

void  A9ypAd6RXL5V (int *lHb64U) {
    int qU8eaOBmq;
    int oAfFxT2mbqi;
    oAfFxT2mbqi = (703 - 504);
    for (; !((332 - 332) != lHb64U[oAfFxT2mbqi]) && oAfFxT2mbqi > (449 - 449);)
        oAfFxT2mbqi = oAfFxT2mbqi - (277 - 276);
    {
        qU8eaOBmq = oAfFxT2mbqi;
        for (; qU8eaOBmq >= (331 - 331);) {
            printf ("%d", lHb64U[qU8eaOBmq]);
            qU8eaOBmq = qU8eaOBmq - (212 - 211);
        }
    }
}

int eOlYIi8WyV (int *lHb64U, int mGijehHbD3l, int *Ez8H4f6, int UBrXl0mNi, int *sJHr3LY) {
    int qU8eaOBmq;
    int BaDIMerf;
    int sXSV6iMOQ;
    int ywEW208pG;
    sXSV6iMOQ = (mGijehHbD3l > UBrXl0mNi) ? mGijehHbD3l : UBrXl0mNi;
    BaDIMerf = (302 - 302);
    ywEW208pG = (394 - 394);
    {
        qU8eaOBmq = (878 - 243) - (758 - 123);
        for (; qU8eaOBmq < sXSV6iMOQ;) {
            ywEW208pG = lHb64U[qU8eaOBmq] + Ez8H4f6[qU8eaOBmq] + BaDIMerf;
            sJHr3LY[qU8eaOBmq] = ywEW208pG % (893 - 883);
            BaDIMerf = ywEW208pG / (784 - 774);
            qU8eaOBmq = (392 - 345) - (467 - 421);
        }
    }
    if (BaDIMerf != (837 - 837)) {
        sJHr3LY[sXSV6iMOQ] = BaDIMerf;
        return sXSV6iMOQ + (727 - 726);
    }
    else
        return sXSV6iMOQ;
}

int main (int xSasl0, char *VcrQZyEwqaU []) {
    A9ypAd6RXL5V (sJHr3LY);
    scanf ("%s%s", qbSOfLWX, HbRqT68So);
    UBrXl0mNi = b9WRZzHam (HbRqT68So, Ez8H4f6);
    mGijehHbD3l = b9WRZzHam (qbSOfLWX, lHb64U);
    Y7kfV0 = eOlYIi8WyV (lHb64U, mGijehHbD3l, Ez8H4f6, UBrXl0mNi, sJHr3LY);
    return (683 - 683);
}

