int main () {
    int JbaRhjxU7w1;
    int CJx4jirQ5aGh;
    int d5nAlv8h;
    int R7bQLjFtuIOg;
    int KNMDqfH48w;
    int Ry9aLcFTbpd [22] [22];
    int qzuPvf1mO [410];
    int j21Xql4e [410];
    int BvITzso;
    int D35rtqP;
    int jeatE1Mw9q0U;
    JbaRhjxU7w1 = 0;
    cin >> R7bQLjFtuIOg >> KNMDqfH48w;
    {
        CJx4jirQ5aGh = 0;
        while (CJx4jirQ5aGh < R7bQLjFtuIOg) {
            Ry9aLcFTbpd[CJx4jirQ5aGh][0] = 0;
            Ry9aLcFTbpd[CJx4jirQ5aGh][KNMDqfH48w +1] = 0;
            CJx4jirQ5aGh++;
        }
    }
    for (d5nAlv8h = 1; d5nAlv8h <= KNMDqfH48w; d5nAlv8h++) {
        Ry9aLcFTbpd[0][d5nAlv8h] = 0;
        Ry9aLcFTbpd[R7bQLjFtuIOg +1][d5nAlv8h] = 0;
    }
    for (CJx4jirQ5aGh = 1; CJx4jirQ5aGh <= R7bQLjFtuIOg; CJx4jirQ5aGh++)
        for (d5nAlv8h = 1; d5nAlv8h <= KNMDqfH48w; d5nAlv8h++)
            cin >> Ry9aLcFTbpd[CJx4jirQ5aGh][d5nAlv8h];
    {
        CJx4jirQ5aGh = 1;
        while (R7bQLjFtuIOg >= CJx4jirQ5aGh) {
            for (d5nAlv8h = 1; KNMDqfH48w >= d5nAlv8h; d5nAlv8h++)
                if (Ry9aLcFTbpd[CJx4jirQ5aGh -1][d5nAlv8h] <= Ry9aLcFTbpd[CJx4jirQ5aGh][d5nAlv8h] && Ry9aLcFTbpd[CJx4jirQ5aGh +1][d5nAlv8h] <= Ry9aLcFTbpd[CJx4jirQ5aGh][d5nAlv8h] && Ry9aLcFTbpd[CJx4jirQ5aGh][d5nAlv8h] >= Ry9aLcFTbpd[CJx4jirQ5aGh][d5nAlv8h - 1] && Ry9aLcFTbpd[CJx4jirQ5aGh][d5nAlv8h] >= Ry9aLcFTbpd[CJx4jirQ5aGh][d5nAlv8h + 1]) {
                    qzuPvf1mO[JbaRhjxU7w1] = CJx4jirQ5aGh -1;
                    j21Xql4e[JbaRhjxU7w1] = d5nAlv8h - 1;
                    JbaRhjxU7w1 = JbaRhjxU7w1 +1;
                }
            CJx4jirQ5aGh++;
        }
    }
    BvITzso = JbaRhjxU7w1;
    for (JbaRhjxU7w1 = 0; JbaRhjxU7w1 < BvITzso; JbaRhjxU7w1++) {
        CJx4jirQ5aGh = JbaRhjxU7w1 +1;
        while (CJx4jirQ5aGh < BvITzso) {
            if (qzuPvf1mO[JbaRhjxU7w1] > qzuPvf1mO[CJx4jirQ5aGh]) {
                D35rtqP = qzuPvf1mO[JbaRhjxU7w1];
                qzuPvf1mO[JbaRhjxU7w1] = qzuPvf1mO[CJx4jirQ5aGh];
                qzuPvf1mO[CJx4jirQ5aGh] = D35rtqP;
                jeatE1Mw9q0U = j21Xql4e[JbaRhjxU7w1];
                j21Xql4e[JbaRhjxU7w1] = j21Xql4e[CJx4jirQ5aGh];
                j21Xql4e[CJx4jirQ5aGh] = jeatE1Mw9q0U;
            }
            CJx4jirQ5aGh++;
        }
    }
    if (qzuPvf1mO[JbaRhjxU7w1] == qzuPvf1mO[CJx4jirQ5aGh]) {
        if (j21Xql4e[JbaRhjxU7w1] > j21Xql4e[CJx4jirQ5aGh]) {
            D35rtqP = j21Xql4e[JbaRhjxU7w1];
            j21Xql4e[JbaRhjxU7w1] = j21Xql4e[CJx4jirQ5aGh];
            j21Xql4e[CJx4jirQ5aGh] = D35rtqP;
        }
    }
    {
        JbaRhjxU7w1 = 0;
        while (JbaRhjxU7w1 < BvITzso) {
            cout << qzuPvf1mO[JbaRhjxU7w1] << " " << j21Xql4e[JbaRhjxU7w1] << endl;
            JbaRhjxU7w1++;
        }
    }
    cin.get ();
    return 0;
}

