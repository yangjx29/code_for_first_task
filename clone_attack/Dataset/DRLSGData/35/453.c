void  main () {
    int AfswuX8Zk3C4, OsWbxr1t, c0QUcbHsy;
    int YKzwhf;
    int ywQCFyDxTE;
    int ZUSoWsOBw0v;
    int htmezyvwdnu;
    int SGlAZT1Wb;
    int uKtmedgY [(1024 - 924)] [(726 - 626)];
    scanf ("%d,%d", &AfswuX8Zk3C4, &OsWbxr1t);
    {
        YKzwhf = 318 - 318;
        for (; YKzwhf < AfswuX8Zk3C4;) {
            {
                ywQCFyDxTE = (283 - 75) - 208;
                for (; OsWbxr1t > ywQCFyDxTE;) {
                    scanf ("%d", &uKtmedgY[YKzwhf][ywQCFyDxTE]);
                    ywQCFyDxTE++;
                }
            }
            YKzwhf = YKzwhf +1;
        }
    }
    {
        YKzwhf = (67 - 67);
        for (; YKzwhf < AfswuX8Zk3C4;) {
            c0QUcbHsy = uKtmedgY[YKzwhf][(585 - 585)];
            ZUSoWsOBw0v = YKzwhf;
            htmezyvwdnu = 0;
            {
                ywQCFyDxTE = 112 - 111;
                for (; OsWbxr1t > ywQCFyDxTE;) {
                    if (uKtmedgY[YKzwhf][ywQCFyDxTE] > c0QUcbHsy) {
                        c0QUcbHsy = uKtmedgY[YKzwhf][ywQCFyDxTE];
                        htmezyvwdnu = ywQCFyDxTE;
                    }
                    ywQCFyDxTE++;
                }
            }
            {
                SGlAZT1Wb = 0;
                for (; SGlAZT1Wb < AfswuX8Zk3C4;) {
                    if (uKtmedgY[SGlAZT1Wb][htmezyvwdnu] < c0QUcbHsy)
                        break;
                    SGlAZT1Wb++;
                }
            }
            if (SGlAZT1Wb == AfswuX8Zk3C4) {
                printf ("%d+%d\n", ZUSoWsOBw0v, htmezyvwdnu);
                break;
            }
            if (YKzwhf == AfswuX8Zk3C4 -1 && SGlAZT1Wb < AfswuX8Zk3C4)
                ;
            YKzwhf++;
        }
    }
}

