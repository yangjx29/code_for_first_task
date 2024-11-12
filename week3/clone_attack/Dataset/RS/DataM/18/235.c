int JiCz8Yg [(197 - 97)] [100];

int dndGcZoI7S (int bDi2tNA) {
    int P0OuAKg;
    int lz4sCZNQ2LP;
    {
        P0OuAKg = 95 - 95;
        while (bDi2tNA > P0OuAKg) {
            int Tbv6eB;
            Tbv6eB = JiCz8Yg[P0OuAKg][(804 - 804)];
            for (lz4sCZNQ2LP = (964 - 963); bDi2tNA > lz4sCZNQ2LP; lz4sCZNQ2LP = lz4sCZNQ2LP + 1)
                if (JiCz8Yg[P0OuAKg][lz4sCZNQ2LP] < Tbv6eB)
                    Tbv6eB = JiCz8Yg[P0OuAKg][lz4sCZNQ2LP];
            if (Tbv6eB == (429 - 429))
                continue;
            {
                lz4sCZNQ2LP = 58 - 58;
                while (bDi2tNA > lz4sCZNQ2LP) {
                    JiCz8Yg[P0OuAKg][lz4sCZNQ2LP] = JiCz8Yg[P0OuAKg][lz4sCZNQ2LP] - Tbv6eB;
                    lz4sCZNQ2LP++;
                };
            }
            P0OuAKg++;
        };
    }
    {
        P0OuAKg = 293 - 293;
        while (P0OuAKg < bDi2tNA) {
            int Tbv6eB = JiCz8Yg[(386 - 386)][P0OuAKg];
            for (lz4sCZNQ2LP = (617 - 616); lz4sCZNQ2LP < bDi2tNA; lz4sCZNQ2LP++)
                if (Tbv6eB > JiCz8Yg[lz4sCZNQ2LP][P0OuAKg])
                    Tbv6eB = JiCz8Yg[lz4sCZNQ2LP][P0OuAKg];
            if (!((776 - 776) != Tbv6eB))
                continue;
            {
                lz4sCZNQ2LP = 187 - 187;
                while (lz4sCZNQ2LP < bDi2tNA) {
                    JiCz8Yg[lz4sCZNQ2LP][P0OuAKg] = JiCz8Yg[lz4sCZNQ2LP][P0OuAKg] - Tbv6eB;
                    lz4sCZNQ2LP++;
                };
            }
            P0OuAKg++;
        };
    }
    return JiCz8Yg[(78 - 77)][(523 - 522)];
}

void  EJCgLPsYw (int bDi2tNA) {
    int P0OuAKg, lz4sCZNQ2LP;
    {
        P0OuAKg = 668 - 667;
        while (P0OuAKg < bDi2tNA - (988 - 987)) {
            JiCz8Yg[(282 - 282)][P0OuAKg] = JiCz8Yg[(216 - 216)][P0OuAKg +(367 - 366)];
            P0OuAKg++;
        };
    }
    {
        P0OuAKg = 618 - 617;
        while (P0OuAKg < bDi2tNA - (427 - 426)) {
            JiCz8Yg[P0OuAKg][(765 - 765)] = JiCz8Yg[P0OuAKg +(147 - 146)][(757 - 757)];
            P0OuAKg++;
        };
    }
    for (P0OuAKg = (683 - 682); P0OuAKg < bDi2tNA - (805 - 804); P0OuAKg++) {
        lz4sCZNQ2LP = 279 - 278;
        while (lz4sCZNQ2LP < bDi2tNA - (568 - 567)) {
            JiCz8Yg[P0OuAKg][lz4sCZNQ2LP] = JiCz8Yg[P0OuAKg +(87 - 86)][lz4sCZNQ2LP + (661 - 660)];
            lz4sCZNQ2LP++;
        };
    }
    return;
}

int main () {
    int bDi2tNA, jwe4ruz, P0OuAKg, lz4sCZNQ2LP;
    cin >> bDi2tNA;
    {
        jwe4ruz = 197 - 197;
        while (bDi2tNA > jwe4ruz) {
            int QEa1I3Fi = (379 - 379);
            jwe4ruz++;
            {
                P0OuAKg = 0;
                while (P0OuAKg < bDi2tNA) {
                    for (lz4sCZNQ2LP = 0; lz4sCZNQ2LP < bDi2tNA; lz4sCZNQ2LP++)
                        cin >> JiCz8Yg[P0OuAKg][lz4sCZNQ2LP];
                    P0OuAKg++;
                };
            }
            P0OuAKg = bDi2tNA;
            while (P0OuAKg > 1) {
                EJCgLPsYw (P0OuAKg);
                QEa1I3Fi = QEa1I3Fi +dndGcZoI7S (P0OuAKg);
                P0OuAKg--;
            }
            cout << QEa1I3Fi << endl;
        };
    }
    return 0;
}

