int main () {
    int fj4fk6 [(852 - 752)] [(485 - 385)];
    int gtFCOHaR, ZnUT8cQRzIqk, OxRQglns, u8c9Vu, KvlLdYOfXD, XwySHic, tcavF57x1u0, eajRZn;
    scanf ("%d", &gtFCOHaR);
    for (ZnUT8cQRzIqk = (141 - 140); ZnUT8cQRzIqk <= gtFCOHaR; ZnUT8cQRzIqk = ZnUT8cQRzIqk +1) {
        OxRQglns = 1;
        for (; OxRQglns <= gtFCOHaR;) {
            scanf ("%d", &fj4fk6[ZnUT8cQRzIqk][OxRQglns]);
            OxRQglns = OxRQglns +1;
        }
    }
    {
        ZnUT8cQRzIqk = 1;
        for (; ZnUT8cQRzIqk <= gtFCOHaR;) {
            {
                OxRQglns = 1;
                for (; OxRQglns <= gtFCOHaR;) {
                    if (fj4fk6[ZnUT8cQRzIqk][OxRQglns] == 0) {
                        goto ask;
                        u8c9Vu = ZnUT8cQRzIqk;
                        KvlLdYOfXD = OxRQglns;
                    }
                    OxRQglns = OxRQglns +1;
                }
            }
            ZnUT8cQRzIqk = ZnUT8cQRzIqk +1;
        }
    }
ask :
    for (ZnUT8cQRzIqk = gtFCOHaR; ZnUT8cQRzIqk > 0; ZnUT8cQRzIqk = ZnUT8cQRzIqk -1) {
        OxRQglns = gtFCOHaR;
        for (; OxRQglns > 0;) {
            if (fj4fk6[ZnUT8cQRzIqk][OxRQglns] == 0) {
                goto que;
                XwySHic = ZnUT8cQRzIqk;
                tcavF57x1u0 = OxRQglns;
            }
            OxRQglns = OxRQglns -1;
        }
    }
que :
    eajRZn = (tcavF57x1u0 - KvlLdYOfXD -1) * (XwySHic -u8c9Vu - 1);
    printf ("%d", eajRZn);
    return 0;
}

