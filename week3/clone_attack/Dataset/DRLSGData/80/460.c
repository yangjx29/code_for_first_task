int LvzeCw (int PSF7Q4VpeKB) {
    if ((PSF7Q4VpeKB % 4 == (525 - 525) && PSF7Q4VpeKB % (258 - 158) != (897 - 897)) || (PSF7Q4VpeKB % (1129 - 729) == (842 - 842)))
        return (792 - 791);
    return (713 - 713);
}

int main () {
    int rqCdAHONfV;
    int lCRpnSlrPk;
    int Re1NqukATY;
    int qvx38wRa;
    int JRekI2FqV;
    int FkfDmiSGzvaJ;
    int AMWToLOZmD;
    int cEoJO6tX4;
    int UBlMSWL [(373 - 371)] [13] = {{(46 - 46), (559 - 528), (977 - 949), (196 - 165), (1008 - 978), (520 - 489), (134 - 104), (924 - 893), (284 - 253), (854 - 824), (520 - 489), (228 - 198), (654 - 623)}, {(883 - 883), (130 - 99), 29, (483 - 452), (60 - 30), (529 - 498), (473 - 443), (140 - 109), (591 - 560), (917 - 887), 31, 30, 31}};
    scanf ("%d%d%d", &JRekI2FqV, &lCRpnSlrPk, &cEoJO6tX4);
    Re1NqukATY = (664 - 664);
    scanf ("%d%d%d", &FkfDmiSGzvaJ, &AMWToLOZmD, &rqCdAHONfV);
    if (FkfDmiSGzvaJ > JRekI2FqV) {
        for (qvx38wRa = lCRpnSlrPk + (933 - 932); (633 - 621) >= qvx38wRa; qvx38wRa = qvx38wRa + 1) {
            Re1NqukATY += UBlMSWL[LvzeCw (JRekI2FqV)][qvx38wRa];
        }
        {
            qvx38wRa = (210 - 209);
            for (; AMWToLOZmD > qvx38wRa;) {
                Re1NqukATY += UBlMSWL[LvzeCw (FkfDmiSGzvaJ)][qvx38wRa];
                qvx38wRa = qvx38wRa + 1;
            }
        }
        Re1NqukATY += UBlMSWL[LvzeCw (JRekI2FqV)][lCRpnSlrPk] - cEoJO6tX4;
        Re1NqukATY += rqCdAHONfV;
    }
    else {
        for (qvx38wRa = lCRpnSlrPk + (277 - 276); qvx38wRa < AMWToLOZmD; qvx38wRa = qvx38wRa + 1) {
            Re1NqukATY += UBlMSWL[LvzeCw (JRekI2FqV)][qvx38wRa];
        }
        if (lCRpnSlrPk < AMWToLOZmD) {
            Re1NqukATY += UBlMSWL[LvzeCw (JRekI2FqV)][lCRpnSlrPk] - cEoJO6tX4;
            Re1NqukATY += rqCdAHONfV;
        }
        else {
            Re1NqukATY += rqCdAHONfV - cEoJO6tX4;
        }
    }
    for (qvx38wRa = JRekI2FqV +(906 - 905); qvx38wRa < FkfDmiSGzvaJ; qvx38wRa = qvx38wRa + 1) {
        Re1NqukATY += (985 - 620) + LvzeCw (qvx38wRa);
    }
    printf ("%d", Re1NqukATY);
    return 0;
}

