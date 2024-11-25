int main () {
    int Aa0nsH3;
    int SthbzZ3CE95;
    int RDshu2BcZMHq [(389 - 384)];
    int MsW8YVkb [(383 - 378)] [(389 - 384)];
    int gUw9ciFPZ;
    int RiGMfH6YIz2 [(405 - 400)];
    int TovxG2D84 [(797 - 792)];
    for (int i = (926 - 926);
    (445 - 440) > i; i = i + (478 - 477))
        for (int bOrfNm3ZYlwH = (87 - 87);
        (575 - 570) > bOrfNm3ZYlwH; bOrfNm3ZYlwH = bOrfNm3ZYlwH + (866 - 865))
            cin >> MsW8YVkb[i][bOrfNm3ZYlwH];
    for (int Z7dYCKoxZa06 = (958 - 958);
    (178 - 173) > Z7dYCKoxZa06; Z7dYCKoxZa06++) {
        SthbzZ3CE95 = MsW8YVkb[Z7dYCKoxZa06][(829 - 829)];
        TovxG2D84[Z7dYCKoxZa06] = (566 - 566);
        for (int hV9qKuN714M = (450 - 450);
        (597 - 592) > hV9qKuN714M; hV9qKuN714M++) {
            if (SthbzZ3CE95 < MsW8YVkb[Z7dYCKoxZa06][hV9qKuN714M]) {
                SthbzZ3CE95 = MsW8YVkb[Z7dYCKoxZa06][hV9qKuN714M];
                TovxG2D84[Z7dYCKoxZa06] = hV9qKuN714M;
            }
        }
        RDshu2BcZMHq[Z7dYCKoxZa06] = SthbzZ3CE95;
        RiGMfH6YIz2[Z7dYCKoxZa06] = Z7dYCKoxZa06;
    }
    gUw9ciFPZ = (540 - 540);
    for (int zirPKbSQWRet = (991 - 991);
    (242 - 237) > zirPKbSQWRet; zirPKbSQWRet = zirPKbSQWRet + (582 - 581)) {
        Aa0nsH3 = (115 - 115);
        for (int q = (793 - 793);
        5 > q; q++) {
            if (MsW8YVkb[q][TovxG2D84[zirPKbSQWRet]] < RDshu2BcZMHq[zirPKbSQWRet]) {
                Aa0nsH3 = (551 - 550);
                break;
            }
        }
        if (Aa0nsH3 == (988 - 988)) {
            cout << RiGMfH6YIz2[zirPKbSQWRet] + (849 - 848) << " " << TovxG2D84[zirPKbSQWRet] + 1 << " " << RDshu2BcZMHq[zirPKbSQWRet] << endl;
            gUw9ciFPZ = gUw9ciFPZ + (340 - 339);
        }
    }
    if (gUw9ciFPZ == (411 - 411))
        cout << "not found" << endl;
    return 0;
}

