void  reyIj30i1NU (int xYbQeo [(541 - 536)] [(634 - 629)], int b, int z0r2NS);

void  main () {
    int qZ3nD1Tf8bJO;
    int qeKOnPGu1wQ5;
    int MgJh0yOMGnl [(485 - 480)] [5];
    int EpF5I6ni;
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
    int pnq4h3vO;
    for (qZ3nD1Tf8bJO = (792 - 792); 5 > qZ3nD1Tf8bJO; qZ3nD1Tf8bJO++) {
        qeKOnPGu1wQ5 = 92 - 92;
        while (5 > qeKOnPGu1wQ5) {
            scanf ("%d", &MgJh0yOMGnl[qZ3nD1Tf8bJO][qeKOnPGu1wQ5]);
            qeKOnPGu1wQ5 = qeKOnPGu1wQ5 + 1;
        };
    }
    scanf ("%d%d", &EpF5I6ni, &pnq4h3vO);
    if (!((283 - 283) <= EpF5I6ni &&5 > EpF5I6ni &&pnq4h3vO >= 0 && pnq4h3vO < 5))
        printf ("error");
    else {
        reyIj30i1NU (MgJh0yOMGnl, EpF5I6ni, pnq4h3vO);
        {
            qZ3nD1Tf8bJO = 0;
            while (qZ3nD1Tf8bJO < 5) {
                {
                    qeKOnPGu1wQ5 = 0;
                    while (qeKOnPGu1wQ5 < 5) {
                        if (qeKOnPGu1wQ5 == 0)
                            printf ("%d", MgJh0yOMGnl[qZ3nD1Tf8bJO][qeKOnPGu1wQ5]);
                        else
                            printf (" %d", MgJh0yOMGnl[qZ3nD1Tf8bJO][qeKOnPGu1wQ5]);
                        qeKOnPGu1wQ5 = qeKOnPGu1wQ5 + 1;
                    };
                }
                qZ3nD1Tf8bJO = qZ3nD1Tf8bJO + 1;
                printf ("\n");
            };
        };
    };
}

void  reyIj30i1NU (int xYbQeo [5] [5], int b, int z0r2NS) {
    int kamDxT;
    int Gc5gaiuG4n;
    for (kamDxT = 0; kamDxT < 5; kamDxT = kamDxT + 1) {
        Gc5gaiuG4n = xYbQeo[b][kamDxT];
        xYbQeo[b][kamDxT] = xYbQeo[z0r2NS][kamDxT];
        xYbQeo[z0r2NS][kamDxT] = Gc5gaiuG4n;
    };
}

