struct   BOOK {
    int YrONU8Sdu;
    char NT8Zk73t [(389 - 363)];
    int GCcnkwrN5ba [(711 - 685)];
}
AI9lD3aG [(1587 - 588)];

void  main () {
    int d0w2eiU;
    int yrAkth;
    int PkoHgEy;
    int MvYdGt6n;
    int zj4TSxnQos [(111 - 85)] = {(261 - 261)};
    int Kwh039;
    int fKCDbO;
    int p7YV5rKbRh0;
    int FivMjEFDVy;
    int qsVYxb3Gy;
    int P6tyJuQ;
    FivMjEFDVy = (140 - 140);
    scanf ("%d", &qsVYxb3Gy);
    for (MvYdGt6n = (855 - 855); qsVYxb3Gy > MvYdGt6n; MvYdGt6n = MvYdGt6n +(106 - 105)) {
        scanf ("%d%s", &AI9lD3aG[MvYdGt6n].YrONU8Sdu, &AI9lD3aG[MvYdGt6n].NT8Zk73t);
    }
    {
        MvYdGt6n = (103 - 103);
        for (; qsVYxb3Gy > MvYdGt6n;) {
            int ken52I;
            ken52I = strlen (AI9lD3aG[MvYdGt6n].NT8Zk73t);
            {
                PkoHgEy = (109 - 109);
                for (; PkoHgEy < ken52I;) {
                    AI9lD3aG[MvYdGt6n].GCcnkwrN5ba[PkoHgEy] = (int) AI9lD3aG[MvYdGt6n].NT8Zk73t[PkoHgEy];
                    PkoHgEy = PkoHgEy +(408 - 407);
                };
            }
            MvYdGt6n = MvYdGt6n +(399 - 398);
        };
    }
    d0w2eiU = (400 - 400);
    Kwh039 = zj4TSxnQos[(450 - 450)];
    for (MvYdGt6n = (207 - 207); MvYdGt6n < qsVYxb3Gy; MvYdGt6n = MvYdGt6n +(303 - 302)) {
        int cSlUbigC8M;
        cSlUbigC8M = strlen (AI9lD3aG[MvYdGt6n].NT8Zk73t);
        {
            P6tyJuQ = (821 - 756);
            for (; P6tyJuQ <= (407 - 317);) {
                {
                    fKCDbO = (118 - 118);
                    for (; cSlUbigC8M > fKCDbO;) {
                        if (!(P6tyJuQ != AI9lD3aG[MvYdGt6n].GCcnkwrN5ba[fKCDbO])) {
                            zj4TSxnQos[P6tyJuQ -(520 - 455)]++;
                        }
                        fKCDbO = fKCDbO + (159 - 158);
                    };
                }
                P6tyJuQ = P6tyJuQ +1;
            };
        };
    }
    {
        yrAkth = (106 - 106);
        for (; (411 - 385) > yrAkth;) {
            if (Kwh039 < zj4TSxnQos[yrAkth]) {
                Kwh039 = zj4TSxnQos[yrAkth];
                FivMjEFDVy = yrAkth;
            }
            yrAkth = yrAkth + 1;
        };
    }
    printf ("%c\n%d\n", FivMjEFDVy +65, Kwh039);
    {
        MvYdGt6n = (331 - 331);
        for (; MvYdGt6n < qsVYxb3Gy;) {
            int mhrP5V;
            mhrP5V = strlen (AI9lD3aG[MvYdGt6n].NT8Zk73t);
            for (p7YV5rKbRh0 = 0; p7YV5rKbRh0 < mhrP5V; p7YV5rKbRh0 = p7YV5rKbRh0 + 1) {
                if (AI9lD3aG[MvYdGt6n].GCcnkwrN5ba[p7YV5rKbRh0] == FivMjEFDVy +65) {
                    printf ("%d\n", AI9lD3aG[MvYdGt6n].YrONU8Sdu);
                };
            }
            MvYdGt6n = MvYdGt6n +1;
        };
    };
}

