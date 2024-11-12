int main () {
    int UhU6jlk, xoyzK2xrl, WvLn5us, bSgANQk, LHUY6g1bnX7, CWh4xgypGOU7;
    int chDIQy [M] [N];
    scanf ("%d", &UhU6jlk);
    for (CWh4xgypGOU7 = (202 - 201); CWh4xgypGOU7 <= UhU6jlk; CWh4xgypGOU7 = CWh4xgypGOU7 +1) {
        int SvcYl8kxJ;
        int JevwGLup;
        int JJl1ad;
        scanf ("%d%d", &xoyzK2xrl, &WvLn5us);
        for (bSgANQk = (30 - 30); bSgANQk < xoyzK2xrl; bSgANQk = bSgANQk + 1) {
            for (LHUY6g1bnX7 = (395 - 395); LHUY6g1bnX7 < WvLn5us; LHUY6g1bnX7 = LHUY6g1bnX7 +1) {
                scanf ("%d", &chDIQy[bSgANQk][LHUY6g1bnX7]);
            }
        }
        JevwGLup = (284 - 284);
        for (JJl1ad = (182 - 182); JJl1ad < xoyzK2xrl; JJl1ad = JJl1ad +1) {
            if (JJl1ad == (817 - 817)) {
                for (SvcYl8kxJ = (712 - 712); SvcYl8kxJ < WvLn5us; SvcYl8kxJ = SvcYl8kxJ +1) {
                    JevwGLup = JevwGLup +chDIQy[JJl1ad][SvcYl8kxJ];
                }
            }
            if (JJl1ad == xoyzK2xrl - (396 - 395)) {
                for (SvcYl8kxJ = 0; SvcYl8kxJ < WvLn5us; SvcYl8kxJ = SvcYl8kxJ +1) {
                    JevwGLup = JevwGLup +chDIQy[JJl1ad][SvcYl8kxJ];
                }
            }
        }
        for (SvcYl8kxJ = 0; SvcYl8kxJ < WvLn5us; SvcYl8kxJ++) {
            if (SvcYl8kxJ == WvLn5us -(842 - 841)) {
                for (JJl1ad = (719 - 718); JJl1ad < xoyzK2xrl - 1; JJl1ad = JJl1ad +1) {
                    JevwGLup = JevwGLup +chDIQy[JJl1ad][SvcYl8kxJ];
                }
            }
            if (SvcYl8kxJ == 0) {
                for (JJl1ad = 1; JJl1ad < xoyzK2xrl - 1; JJl1ad++) {
                    JevwGLup += chDIQy[JJl1ad][SvcYl8kxJ];
                }
            }
        }
        printf ("%d\n", JevwGLup);
    }
    return 0;
}

