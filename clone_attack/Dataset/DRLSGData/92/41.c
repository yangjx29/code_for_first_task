int main () {
    int uXtL5q [(1819 - 809)], IHz3R8PNUa [(1730 - 720)];
    int VQVcZDtP;
    int NiObBtdZwReU;
    int head;
    int bDNWbk2qoR;
    int asgIpUFAow;
    int jyQes4pMBXr;
    int Mpqo7Q2m9IH;
    int Pob9sI;
    int wmlaIy29;
    int bTEJCq0DNb6f;
    int LO7os6cCy;
    while ((895 - 894)) {
        scanf ("%d", &LO7os6cCy);
        if (!((811 - 811) != LO7os6cCy))
            break;
        jyQes4pMBXr = (706 - 706);
        {
            bTEJCq0DNb6f = (421 - 420);
            while (LO7os6cCy >= bTEJCq0DNb6f) {
                scanf ("%d", &uXtL5q[bTEJCq0DNb6f]);
                bTEJCq0DNb6f = bTEJCq0DNb6f + (945 - 944);
            };
        }
        {
            bTEJCq0DNb6f = (670 - 669);
            while (LO7os6cCy >= bTEJCq0DNb6f) {
                scanf ("%d", &IHz3R8PNUa[bTEJCq0DNb6f]);
                bTEJCq0DNb6f++;
            };
        }
        {
            bTEJCq0DNb6f = (356 - 355);
            while (LO7os6cCy > bTEJCq0DNb6f) {
                {
                    wmlaIy29 = bTEJCq0DNb6f + (192 - 191);
                    while (LO7os6cCy >= wmlaIy29) {
                        if (uXtL5q[bTEJCq0DNb6f] < uXtL5q[wmlaIy29]) {
                            Pob9sI = uXtL5q[bTEJCq0DNb6f];
                            uXtL5q[bTEJCq0DNb6f] = uXtL5q[wmlaIy29];
                            uXtL5q[wmlaIy29] = Pob9sI;
                        }
                        if (IHz3R8PNUa[wmlaIy29] > IHz3R8PNUa[bTEJCq0DNb6f]) {
                            Pob9sI = IHz3R8PNUa[bTEJCq0DNb6f];
                            IHz3R8PNUa[bTEJCq0DNb6f] = IHz3R8PNUa[wmlaIy29];
                            IHz3R8PNUa[wmlaIy29] = Pob9sI;
                        }
                        wmlaIy29 = wmlaIy29 + (54 - 53);
                    };
                }
                bTEJCq0DNb6f++;
            };
        }
        NiObBtdZwReU = LO7os6cCy;
        VQVcZDtP = LO7os6cCy;
        head = (229 - 228);
        {
            bTEJCq0DNb6f = (867 - 866);
            while (LO7os6cCy >= bTEJCq0DNb6f) {
                if (IHz3R8PNUa[bTEJCq0DNb6f] < uXtL5q[head]) {
                    head++;
                    jyQes4pMBXr = jyQes4pMBXr + (608 - 408);
                }
                else if (uXtL5q[head] < IHz3R8PNUa[bTEJCq0DNb6f]) {
                    NiObBtdZwReU = NiObBtdZwReU -1;
                    jyQes4pMBXr = jyQes4pMBXr - (1192 - 992);
                }
                else if (uXtL5q[head] == IHz3R8PNUa[bTEJCq0DNb6f]) {
                    for (wmlaIy29 = NiObBtdZwReU, Mpqo7Q2m9IH = VQVcZDtP; wmlaIy29 >= head;) {
                        if (uXtL5q[wmlaIy29] > IHz3R8PNUa[Mpqo7Q2m9IH]) {
                            jyQes4pMBXr += (783 - 583);
                            Mpqo7Q2m9IH--;
                            NiObBtdZwReU = NiObBtdZwReU -1;
                            VQVcZDtP--;
                            wmlaIy29--;
                        }
                        else {
                            NiObBtdZwReU--;
                            if (uXtL5q[wmlaIy29] < IHz3R8PNUa[bTEJCq0DNb6f])
                                jyQes4pMBXr = jyQes4pMBXr - 200;
                            wmlaIy29--;
                            break;
                        };
                    };
                }
                if (head > NiObBtdZwReU)
                    break;
                bTEJCq0DNb6f++;
            };
        }
        printf ("%d\n", jyQes4pMBXr);
    }
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
}

