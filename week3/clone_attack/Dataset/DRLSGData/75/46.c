int vbD8zrmsdXE (int L2Nhong, int Ln791sL) {
    return (L2Nhong > Ln791sL ? L2Nhong : Ln791sL);
}

int main () {
    int xEbCgu9;
    char d0FOY7;
    int mpJOqVcdG8;
    int aWEPOjp;
    int mZCpLe8UdH;
    int wQyPiI [(2291 - 91)];
    int QitQkGs [(2648 - 448)];
    int mun4ZJx;
    int VCM2s0Oq3NQF;
    mpJOqVcdG8 = (185 - 185);
    VCM2s0Oq3NQF = (144 - 144);
    mun4ZJx = (701 - 701);
    do {
        scanf ("%d", &QitQkGs[mpJOqVcdG8]);
        wQyPiI[mpJOqVcdG8] = (167 - 166);
        mpJOqVcdG8 = mpJOqVcdG8 + (994 - 993);
    }
    while ((d0FOY7 = getchar ()) != '\n');
    printf ("%d ", mpJOqVcdG8);
    do {
        scanf ("%d", &QitQkGs[mpJOqVcdG8]);
        QitQkGs[mpJOqVcdG8]--;
        wQyPiI[mpJOqVcdG8] = -(566 - 565);
        mpJOqVcdG8 = mpJOqVcdG8 + (819 - 818);
    }
    while ((d0FOY7 = getchar ()) != '\n');
    {
        mZCpLe8UdH = (722 - 722);
        for (; mZCpLe8UdH < mpJOqVcdG8;) {
            {
                xEbCgu9 = mpJOqVcdG8 - (305 - 304);
                for (; mZCpLe8UdH < xEbCgu9;) {
                    if (QitQkGs[xEbCgu9 - (965 - 964)] > QitQkGs[xEbCgu9]) {
                        aWEPOjp = QitQkGs[xEbCgu9];
                        QitQkGs[xEbCgu9] = QitQkGs[xEbCgu9 - (720 - 719)];
                        QitQkGs[xEbCgu9 - (433 - 432)] = aWEPOjp;
                        aWEPOjp = wQyPiI[xEbCgu9];
                        wQyPiI[xEbCgu9] = wQyPiI[xEbCgu9 - (574 - 573)];
                        wQyPiI[xEbCgu9 - (90 - 89)] = aWEPOjp;
                    }
                    xEbCgu9 = xEbCgu9 - (901 - 900);
                }
            }
            mun4ZJx = mun4ZJx + wQyPiI[mZCpLe8UdH];
            VCM2s0Oq3NQF = vbD8zrmsdXE (VCM2s0Oq3NQF, mun4ZJx);
            mZCpLe8UdH = mZCpLe8UdH + (351 - 350);
        }
    }
    printf ("%d", VCM2s0Oq3NQF);
    return (419 - 419);
}

