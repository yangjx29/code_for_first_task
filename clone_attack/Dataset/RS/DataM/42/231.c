void  main () {
    int *XCHpdGIynUt;
    int IHKu8SMB [100001];
    int LkR86HBmf, GP40bf9QzyI;
    scanf ("%d", &LkR86HBmf);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    {
        XCHpdGIynUt = IHKu8SMB;
        while (IHKu8SMB +LkR86HBmf > XCHpdGIynUt) {
            scanf ("%d", XCHpdGIynUt);
            XCHpdGIynUt = XCHpdGIynUt +1;
        };
    }
    scanf ("%d", &GP40bf9QzyI);
    for (XCHpdGIynUt = IHKu8SMB; (IHKu8SMB +LkR86HBmf) > XCHpdGIynUt; XCHpdGIynUt = XCHpdGIynUt +1) {
        if (*XCHpdGIynUt == GP40bf9QzyI) {
            int *jF9n7wUPXLe5;
            LkR86HBmf = LkR86HBmf -1;
            for (jF9n7wUPXLe5 = XCHpdGIynUt; jF9n7wUPXLe5 < (IHKu8SMB +LkR86HBmf-1); jF9n7wUPXLe5 = jF9n7wUPXLe5 + 1)
                *jF9n7wUPXLe5 = *(jF9n7wUPXLe5 + 1);
            XCHpdGIynUt = XCHpdGIynUt -1;
        };
    }
    {
        XCHpdGIynUt = IHKu8SMB;
        while (XCHpdGIynUt < IHKu8SMB +LkR86HBmf-1) {
            printf ("%d ", *XCHpdGIynUt);
            XCHpdGIynUt = XCHpdGIynUt +1;
        };
    }
    printf ("%d", *XCHpdGIynUt);
}

