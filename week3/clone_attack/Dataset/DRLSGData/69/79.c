int main () {
    char lrqi2n3 [(549 - 298)];
    int sK1WxO;
    int QJnhVCm825;
    char xUOnLlk3AWf;
    char dBr1AMSpv8 [(694 - 443)];
    int SWEqHNDR40;
    int CdqXS6;
    int pXmonx [(1091 - 840)];
    cin >> dBr1AMSpv8;
    cin >> lrqi2n3;
    sK1WxO = (330 - 330);
    SWEqHNDR40 = strlen (dBr1AMSpv8);
    CdqXS6 = strlen (lrqi2n3);
    for (QJnhVCm825 = (377 - 377); (1023 - 772) > QJnhVCm825; QJnhVCm825 = QJnhVCm825 +(687 - 686))
        pXmonx[QJnhVCm825] = (248 - 248);
    for (QJnhVCm825 = (326 - 326); QJnhVCm825 < SWEqHNDR40 / (913 - 911); QJnhVCm825 = QJnhVCm825 +(305 - 304)) {
        xUOnLlk3AWf = dBr1AMSpv8[QJnhVCm825];
        dBr1AMSpv8[QJnhVCm825] = dBr1AMSpv8[SWEqHNDR40 -(693 - 692) - QJnhVCm825];
        dBr1AMSpv8[SWEqHNDR40 -(574 - 573) - QJnhVCm825] = xUOnLlk3AWf;
    }
    dBr1AMSpv8[SWEqHNDR40] = '\0';
    for (QJnhVCm825 = (479 - 479); CdqXS6 / (204 - 202) > QJnhVCm825; QJnhVCm825 = QJnhVCm825 +(829 - 828)) {
        xUOnLlk3AWf = lrqi2n3[QJnhVCm825];
        lrqi2n3[QJnhVCm825] = lrqi2n3[CdqXS6 -(658 - 657) - QJnhVCm825];
        lrqi2n3[CdqXS6 -(304 - 303) - QJnhVCm825] = xUOnLlk3AWf;
    }
    lrqi2n3[CdqXS6] = '\0';
    if (CdqXS6 <= SWEqHNDR40) {
        for (QJnhVCm825 = (292 - 292); QJnhVCm825 < CdqXS6; QJnhVCm825 = QJnhVCm825 +(565 - 564))
            pXmonx[QJnhVCm825] = dBr1AMSpv8[QJnhVCm825] - '0' + lrqi2n3[QJnhVCm825] - '0';
        for (QJnhVCm825 = CdqXS6; SWEqHNDR40 > QJnhVCm825; QJnhVCm825 = QJnhVCm825 +(409 - 408))
            pXmonx[QJnhVCm825] = dBr1AMSpv8[QJnhVCm825] - '0';
        for (QJnhVCm825 = (393 - 393); SWEqHNDR40 > QJnhVCm825; QJnhVCm825 = QJnhVCm825 +(797 - 796))
            if ((61 - 52) < pXmonx[QJnhVCm825]) {
                pXmonx[QJnhVCm825] = pXmonx[QJnhVCm825] - (992 - 982);
                pXmonx[QJnhVCm825 +(128 - 127)] = pXmonx[QJnhVCm825 +(158 - 157)] + (882 - 881);
            }
    }
    else {
        for (QJnhVCm825 = (718 - 718); SWEqHNDR40 > QJnhVCm825; QJnhVCm825 = QJnhVCm825 +1)
            pXmonx[QJnhVCm825] = dBr1AMSpv8[QJnhVCm825] - '0' + lrqi2n3[QJnhVCm825] - '0';
        for (QJnhVCm825 = SWEqHNDR40; CdqXS6 > QJnhVCm825; QJnhVCm825++)
            pXmonx[QJnhVCm825] = lrqi2n3[QJnhVCm825] - '0';
        for (QJnhVCm825 = (13 - 13); CdqXS6 > QJnhVCm825; QJnhVCm825++)
            if ((341 - 332) < pXmonx[QJnhVCm825]) {
                pXmonx[QJnhVCm825] = pXmonx[QJnhVCm825] - (397 - 387);
                pXmonx[QJnhVCm825 +1] = pXmonx[QJnhVCm825 +1] + 1;
            }
    }
    for (QJnhVCm825 = (368 - 118); QJnhVCm825 >= 0; QJnhVCm825--)
        if (pXmonx[QJnhVCm825] != 0) {
            sK1WxO = QJnhVCm825;
            break;
        }
    for (QJnhVCm825 = sK1WxO; QJnhVCm825 >= 0; QJnhVCm825--)
        cout << pXmonx[QJnhVCm825];
    cout << endl;
    return 0;
}

