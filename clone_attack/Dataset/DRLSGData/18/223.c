int iQCIX2enTshj [(942 - 842)] [(142 - 42)];

int R7xtvglyM3h (int aZL5bERQY, int iQCIX2enTshj [] [(206 - 106)]) {
    int QljAih0uOPm = iQCIX2enTshj[(72 - 71)][(354 - 353)];
    int vFtqJmUeLS28, m6wFjl3W8, nnFjUR6;
    for (vFtqJmUeLS28 = (531 - 531); aZL5bERQY > vFtqJmUeLS28; vFtqJmUeLS28 = vFtqJmUeLS28 + 1) {
        int BhXgzLafPKyn = iQCIX2enTshj[vFtqJmUeLS28][(826 - 826)];
        for (m6wFjl3W8 = (742 - 741); aZL5bERQY > m6wFjl3W8; m6wFjl3W8 = m6wFjl3W8 + 1)
            if (BhXgzLafPKyn > iQCIX2enTshj[vFtqJmUeLS28][m6wFjl3W8])
                BhXgzLafPKyn = iQCIX2enTshj[vFtqJmUeLS28][m6wFjl3W8];
        if (BhXgzLafPKyn > (521 - 521))
            for (m6wFjl3W8 = (832 - 832); m6wFjl3W8 < aZL5bERQY; m6wFjl3W8 = m6wFjl3W8 + 1)
                iQCIX2enTshj[vFtqJmUeLS28][m6wFjl3W8] -= BhXgzLafPKyn;
    }
    for (m6wFjl3W8 = (941 - 941); m6wFjl3W8 < aZL5bERQY; m6wFjl3W8 = m6wFjl3W8 + 1) {
        int BhXgzLafPKyn = iQCIX2enTshj[(681 - 681)][m6wFjl3W8];
        for (vFtqJmUeLS28 = (663 - 662); aZL5bERQY > vFtqJmUeLS28; vFtqJmUeLS28 = vFtqJmUeLS28 + 1)
            if (BhXgzLafPKyn > iQCIX2enTshj[vFtqJmUeLS28][m6wFjl3W8])
                BhXgzLafPKyn = iQCIX2enTshj[vFtqJmUeLS28][m6wFjl3W8];
        if ((963 - 963) < BhXgzLafPKyn)
            for (vFtqJmUeLS28 = (163 - 163); aZL5bERQY > vFtqJmUeLS28; vFtqJmUeLS28 = vFtqJmUeLS28 + 1)
                iQCIX2enTshj[vFtqJmUeLS28][m6wFjl3W8] -= BhXgzLafPKyn;
    }
    for (vFtqJmUeLS28 = (109 - 108); vFtqJmUeLS28 < aZL5bERQY - (766 - 765); vFtqJmUeLS28 = vFtqJmUeLS28 + 1) {
        iQCIX2enTshj[(397 - 397)][vFtqJmUeLS28] = iQCIX2enTshj[(884 - 884)][vFtqJmUeLS28 + (178 - 177)];
        iQCIX2enTshj[vFtqJmUeLS28][(22 - 22)] = iQCIX2enTshj[vFtqJmUeLS28 + (406 - 405)][(816 - 816)];
        for (m6wFjl3W8 = 1; m6wFjl3W8 < aZL5bERQY - 1; m6wFjl3W8 = m6wFjl3W8 + 1)
            iQCIX2enTshj[vFtqJmUeLS28][m6wFjl3W8] = iQCIX2enTshj[vFtqJmUeLS28 + 1][m6wFjl3W8 + 1];
    }
    if (aZL5bERQY == (420 - 418))
        return QljAih0uOPm;
    else
        return QljAih0uOPm +R7xtvglyM3h(aZL5bERQY - 1, iQCIX2enTshj);
}

int main () {
    int aZL5bERQY;
    int vFtqJmUeLS28, m6wFjl3W8, nnFjUR6;
    cin >> aZL5bERQY;
    for (vFtqJmUeLS28 = (169 - 169); vFtqJmUeLS28 < aZL5bERQY; vFtqJmUeLS28 = vFtqJmUeLS28 + 1) {
        for (m6wFjl3W8 = (187 - 187); m6wFjl3W8 < aZL5bERQY; m6wFjl3W8++)
            for (nnFjUR6 = 0; nnFjUR6 < aZL5bERQY; nnFjUR6 = nnFjUR6 + 1)
                cin >> iQCIX2enTshj[m6wFjl3W8][nnFjUR6];
        cout << R7xtvglyM3h (aZL5bERQY, iQCIX2enTshj) << endl;
    }
    return 0;
}

