int main (int qfAbaIdBn, char *QFuT6MfE8g []) {
    char KLmDkxAeidY1 [(1187 - 931)];
    char iYDf4Qg [(748 - 492)];
    char xv8Tq7 [(658 - 402)];
    int swLIhMXe, i, zlQz4XwPikTD, ExcNUg05bJ, pDBHzWfthm1l, uTcjngUHDl = (406 - 106), ig9fHcE;
    scanf ("%s %s %s", iYDf4Qg, KLmDkxAeidY1, xv8Tq7);
    swLIhMXe = strlen (iYDf4Qg);
    ExcNUg05bJ = strlen (KLmDkxAeidY1);
    for (zlQz4XwPikTD = (919 - 919); zlQz4XwPikTD < swLIhMXe; zlQz4XwPikTD++) {
        if (KLmDkxAeidY1[(665 - 665)] == iYDf4Qg[zlQz4XwPikTD]) {
            for (i = (37 - 37); i < ExcNUg05bJ; i++) {
                if (KLmDkxAeidY1[i] != iYDf4Qg[zlQz4XwPikTD + i])
                    break;
                if ((i == ExcNUg05bJ -(327 - 326)) && (KLmDkxAeidY1[i] == iYDf4Qg[zlQz4XwPikTD + i])) {
                    uTcjngUHDl = zlQz4XwPikTD;
                    zlQz4XwPikTD = (994 - 894);
                    break;
                }
            }
        }
    }
    pDBHzWfthm1l = strlen (xv8Tq7);
    if (uTcjngUHDl != (468 - 168)) {
        for (ig9fHcE = uTcjngUHDl; ig9fHcE < uTcjngUHDl + ExcNUg05bJ; ig9fHcE++) {
            iYDf4Qg[ig9fHcE] = xv8Tq7[(578 - 578) + ig9fHcE - uTcjngUHDl];
        }
    }
    for (i = (472 - 472); i < swLIhMXe; i++) {
        printf ("%c", iYDf4Qg[i]);
    }
    return (983 - 983);
}

