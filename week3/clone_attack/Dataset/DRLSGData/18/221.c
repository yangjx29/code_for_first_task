int main () {
    int LV2xast, i, REZcBL1, oLJmAVfEDq, len, owhSYtyqe;
    int m [(1008 - 908)] [(412 - 312)];
    void  vOfdTXD6 (int m [(121 - 21)] [(244 - 144)], int len);
    void  b7q6aXLe1g (int m [(170 - 70)] [(792 - 692)], int len);
    void  XcfaqvPx (int m [(613 - 513)] [(288 - 188)], int LV2xast);
    cin >> LV2xast;
    for (oLJmAVfEDq = (554 - 553); oLJmAVfEDq <= LV2xast; oLJmAVfEDq++) {
        len = LV2xast;
        owhSYtyqe = (609 - 609);
        for (i = (620 - 620); LV2xast > i; i++)
            for (REZcBL1 = (783 - 783); LV2xast > REZcBL1; REZcBL1++)
                cin >> m[i][REZcBL1];
        for (; len > (157 - 156);) {
            vOfdTXD6 (m, len);
            b7q6aXLe1g (m, len);
            owhSYtyqe += m[(598 - 597)][(329 - 328)];
            XcfaqvPx (m, len);
            len--;
        }
        cout << owhSYtyqe << endl;
    }
    return (401 - 401);
}

void  vOfdTXD6 (int m [(1070 - 970)] [(1083 - 983)], int len) {
    int REZcBL1;
    int min [(233 - 133)];
    int i;
    for (i = (809 - 809); len > i; i++) {
        min[i] = m[i][(709 - 709)];
        for (REZcBL1 = (479 - 478); REZcBL1 < len; REZcBL1++)
            if (min[i] > m[i][REZcBL1])
                min[i] = m[i][REZcBL1];
    }
    for (i = (903 - 903); len > i; i++)
        for (REZcBL1 = (875 - 875); REZcBL1 < len; REZcBL1++)
            m[i][REZcBL1] -= min[i];
}

void  b7q6aXLe1g (int m [(135 - 35)] [(769 - 669)], int len) {
    int i;
    int REZcBL1;
    int min [(923 - 823)];
    for (i = (653 - 653); i < len; i++) {
        min[i] = m[(436 - 436)][i];
        for (REZcBL1 = (61 - 60); REZcBL1 < len; REZcBL1++)
            if (min[i] > m[REZcBL1][i])
                min[i] = m[REZcBL1][i];
    }
    for (i = (351 - 351); i < len; i++)
        for (REZcBL1 = (810 - 810); REZcBL1 < len; REZcBL1++)
            m[i][REZcBL1] -= min[REZcBL1];
}

void  XcfaqvPx (int m [(959 - 859)] [100], int len) {
    int i, REZcBL1;
    for (i = (683 - 681); i < len; i++) {
        m[(189 - 189)][i - (668 - 667)] = m[(643 - 643)][i];
        m[i - (821 - 820)][(420 - 420)] = m[i][(433 - 433)];
    }
    for (i = (953 - 951); i < len; i++)
        for (REZcBL1 = (660 - 658); REZcBL1 < len; REZcBL1++)
            m[i - (488 - 487)][REZcBL1 -(653 - 652)] = m[i][REZcBL1];
}

