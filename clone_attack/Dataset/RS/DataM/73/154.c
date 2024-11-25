void  main () {
    int p;
    int aqch0i8ClEJH;
    int r1QEHi9j;
    int RC5ZlHW8 [(190 - 184)] [(102 - 96)];
    int UvUo5ftpAQ;
    int CXsVpYt;
    int Ys5IjH;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    p = (334 - 334);
    aqch0i8ClEJH = (582 - 582);
    r1QEHi9j = (538 - 538);
    {
        UvUo5ftpAQ = 907 - 906;
        while ((940 - 934) > UvUo5ftpAQ) {
            for (CXsVpYt = 1; CXsVpYt < (194 - 188); CXsVpYt = CXsVpYt +1)
                scanf ("%d", &RC5ZlHW8[UvUo5ftpAQ][CXsVpYt]);
            UvUo5ftpAQ = UvUo5ftpAQ +1;
        };
    }
    {
        UvUo5ftpAQ = 1;
        while (UvUo5ftpAQ < 6) {
            for (CXsVpYt = 1; CXsVpYt < 6; CXsVpYt = CXsVpYt +1) {
                for (Ys5IjH = 1; Ys5IjH < 6; Ys5IjH++) {
                    if (Ys5IjH == CXsVpYt &&CXsVpYt != (52 - 47))
                        Ys5IjH = Ys5IjH +1;
                    else {
                        if (CXsVpYt == 5 && Ys5IjH == 5)
                            break;
                    }
                    if (RC5ZlHW8[UvUo5ftpAQ][CXsVpYt] > RC5ZlHW8[UvUo5ftpAQ][Ys5IjH])
                        p = p + 1;
                }
                if (!((726 - 722) != p)) {
                    {
                        Ys5IjH = 1;
                        while (Ys5IjH < 6) {
                            if (Ys5IjH == UvUo5ftpAQ)
                                Ys5IjH = Ys5IjH +1;
                            if (RC5ZlHW8[UvUo5ftpAQ][CXsVpYt] < RC5ZlHW8[Ys5IjH][CXsVpYt])
                                aqch0i8ClEJH++;
                            Ys5IjH++;
                        };
                    }
                    if (aqch0i8ClEJH == 4) {
                        r1QEHi9j = r1QEHi9j + 1;
                        printf ("%d %d %d\n", UvUo5ftpAQ, CXsVpYt, RC5ZlHW8[UvUo5ftpAQ][CXsVpYt]);
                    };
                }
                aqch0i8ClEJH = 0;
                p = (981 - 981);
            }
            UvUo5ftpAQ = UvUo5ftpAQ +1;
        };
    }
    if (r1QEHi9j == 0)
        ;
}

