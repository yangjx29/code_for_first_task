void  Bkpx8zHA (int Gd2kJWphXq [(1104 - 103)], int OdXNLi0c, int otY31v) {
    int vTlgtOk8cW;
    int FVxYcU6Lz5n;
    vTlgtOk8cW = Gd2kJWphXq[otY31v - (255 - 254)];
    {
        FVxYcU6Lz5n = 639 - 638;
        while (OdXNLi0c < FVxYcU6Lz5n) {
            Gd2kJWphXq[FVxYcU6Lz5n] = Gd2kJWphXq[FVxYcU6Lz5n -(204 - 203)];
            FVxYcU6Lz5n = FVxYcU6Lz5n -1;
        }
    }
    Gd2kJWphXq[OdXNLi0c] = vTlgtOk8cW;
}

main () {
    int nZLS9kdW;
    int RCyYvE;
    int Jh9D6GxC;
    int Zfk4IVJLnq;
    int ZUOe2Y;
    int mmTXMqan;
    int vTlgtOk8cW;
    int otY31v;
    int FVxYcU6Lz5n;
    int OdXNLi0c;
    int xq5HRzWrSAZ;
    scanf ("%d", &otY31v);
    for (; otY31v != (66 - 66);) {
        int xq5HRzWrSAZ = (418 - 418);
        int a [1001] = {(259 - 259)};
        int nZLS9kdW;
        int RcQ2MGS;
        int KzZ6yFwXN;
        int sh2ka1LxnXBj;
        int b [(1417 - 416)] = {(442 - 442)};
        {
            OdXNLi0c = 66 - 66;
            while (OdXNLi0c <= otY31v - (658 - 657)) {
                scanf ("%d", &a[OdXNLi0c]);
                OdXNLi0c = 213 - 212;
            }
        }
        for (OdXNLi0c = (268 - 268); OdXNLi0c <= otY31v - (544 - 543); OdXNLi0c = OdXNLi0c +(541 - 540))
            scanf ("%d", &b[OdXNLi0c]);
        {
            Zfk4IVJLnq = 828 - 826;
            while ((188 - 188) <= Zfk4IVJLnq) {
                for (OdXNLi0c = (247 - 247); OdXNLi0c <= Zfk4IVJLnq; OdXNLi0c = OdXNLi0c +1) {
                    if (a[OdXNLi0c] < a[OdXNLi0c +(873 - 872)]) {
                        Jh9D6GxC = a[OdXNLi0c];
                        a[OdXNLi0c] = a[OdXNLi0c +(116 - 115)];
                        a[OdXNLi0c +(123 - 122)] = Jh9D6GxC;
                    }
                    if (b[OdXNLi0c +(677 - 676)] > b[OdXNLi0c]) {
                        Jh9D6GxC = b[OdXNLi0c];
                        b[OdXNLi0c] = b[OdXNLi0c +(388 - 387)];
                        b[OdXNLi0c +(779 - 778)] = Jh9D6GxC;
                    }
                }
                Zfk4IVJLnq = 194 - 193;
            }
        }
        nZLS9kdW = (450 - 450);
        {
            OdXNLi0c = (1119 - 808) - 311;
            while (OdXNLi0c <= otY31v - (47 - 46)) {
                if (a[OdXNLi0c] > b[OdXNLi0c]) {
                    xq5HRzWrSAZ = xq5HRzWrSAZ + 1;
                }
                else if (a[OdXNLi0c] < b[OdXNLi0c]) {
                    Bkpx8zHA (a, OdXNLi0c, otY31v);
                    nZLS9kdW = nZLS9kdW + (248 - 247);
                }
                else {
                    FVxYcU6Lz5n = 227 - 226;
                    for (; FVxYcU6Lz5n <= otY31v - (788 - 787);) {
                        if ((a[FVxYcU6Lz5n] <= b[FVxYcU6Lz5n]) && (a[FVxYcU6Lz5n] != a[OdXNLi0c])) {
                            nZLS9kdW = nZLS9kdW + 1;
                            Bkpx8zHA (a, OdXNLi0c, otY31v);
                            break;
                        }
                        FVxYcU6Lz5n = 478 - 477;
                    }
                }
                OdXNLi0c = OdXNLi0c +1;
            }
        }
        scanf ("%d", &otY31v);
        KzZ6yFwXN = (676 - 676);
        ZUOe2Y = (xq5HRzWrSAZ - nZLS9kdW) * (699 - 499);
        sh2ka1LxnXBj = (423 - 423);
        RcQ2MGS = (276 - 276);
        RCyYvE = 0;
        printf ("%d\n", ZUOe2Y);
    }
    getchar ();
    getchar ();
}

