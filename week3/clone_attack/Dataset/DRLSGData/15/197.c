int main () {
    int iKnENbu4z;
    int Y0y8L19;
    int z6nsodOG [1000];
    int yRfJN2c;
    int QqDgJZ4UmOe;
    int ObUMyH;
    int g3CJxz2frpPL;
    int d5VRwJf;
    int pbWBvpI;
    int bl4uR6ohCQL;
    iKnENbu4z = 0;
    scanf ("%d", &Y0y8L19);
    for (yRfJN2c = 1; Y0y8L19 >= yRfJN2c; yRfJN2c++) {
        for (QqDgJZ4UmOe = 1; Y0y8L19 >= QqDgJZ4UmOe; QqDgJZ4UmOe = QqDgJZ4UmOe +1)
            scanf ("%d", &z6nsodOG[QqDgJZ4UmOe]);
        if (!(0 != iKnENbu4z)) {
            for (QqDgJZ4UmOe = 1; Y0y8L19 >= QqDgJZ4UmOe; QqDgJZ4UmOe++) {
                if (!(0 != z6nsodOG[QqDgJZ4UmOe])) {
                    iKnENbu4z = QqDgJZ4UmOe;
                    for (ObUMyH = QqDgJZ4UmOe; ObUMyH <= Y0y8L19; ObUMyH = ObUMyH +1)
                        if (z6nsodOG[ObUMyH] != 0) {
                            g3CJxz2frpPL = ObUMyH -1;
                            break;
                        }
                    d5VRwJf = yRfJN2c;
                }
                if (iKnENbu4z != 0)
                    break;
            }
        }
        else {
            if (z6nsodOG[iKnENbu4z] == 0 && z6nsodOG[iKnENbu4z + 1] == 0)
                pbWBvpI = yRfJN2c;
        }
    }
    bl4uR6ohCQL = (g3CJxz2frpPL - iKnENbu4z - 1) * (pbWBvpI - d5VRwJf - 1);
    printf ("%d", bl4uR6ohCQL);
    return 0;
}

