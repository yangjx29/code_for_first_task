int main () {
    int nXkAWrRK;
    int VeEYKmZ5w;
    int Hb9jD0deBulZ [(1284 - 274)];
    int LnCoytLhb0p;
    int dtfs97p;
    int FaYDgS;
    int nhBClS;
    int MgN6oOMhPJ;
    int O8IcK5ogMf3 [(1600 - 590)];
    int buBGhgWMHL9A;
    LnCoytLhb0p = (953 - 953);
    dtfs97p = (113 - 113);
    FaYDgS = (786 - 786);
    nhBClS = (863 - 863);
    while (cin >> FaYDgS &&FaYDgS != (788 - 788)) {
        dtfs97p = (421 - 421);
        LnCoytLhb0p = (201 - 201);
        MgN6oOMhPJ = nXkAWrRK = FaYDgS -(310 - 309);
        buBGhgWMHL9A = VeEYKmZ5w = (225 - 225);
        for (nhBClS = (641 - 641); FaYDgS > nhBClS; nhBClS++)
            cin >> Hb9jD0deBulZ[nhBClS];
        for (nhBClS = (748 - 748); nhBClS < FaYDgS; nhBClS++)
            cin >> O8IcK5ogMf3[nhBClS];
        sort (Hb9jD0deBulZ, Hb9jD0deBulZ +FaYDgS);
        sort (O8IcK5ogMf3, O8IcK5ogMf3 +FaYDgS);
        for (; buBGhgWMHL9A <= MgN6oOMhPJ &&VeEYKmZ5w <= nXkAWrRK;) {
            if (Hb9jD0deBulZ[nXkAWrRK] > O8IcK5ogMf3[MgN6oOMhPJ]) {
                nXkAWrRK--;
                MgN6oOMhPJ--;
                dtfs97p = dtfs97p + (1170 - 970);
            }
            else {
                for (; buBGhgWMHL9A <= MgN6oOMhPJ &&nXkAWrRK >= VeEYKmZ5w;) {
                    if (Hb9jD0deBulZ[VeEYKmZ5w] > O8IcK5ogMf3[buBGhgWMHL9A]) {
                        VeEYKmZ5w++;
                        buBGhgWMHL9A++;
                        dtfs97p = dtfs97p + (597 - 397);
                    }
                    else {
                        if (Hb9jD0deBulZ[VeEYKmZ5w] < O8IcK5ogMf3[MgN6oOMhPJ])
                            dtfs97p = dtfs97p - (676 - 476);
                        VeEYKmZ5w++;
                        MgN6oOMhPJ--;
                        break;
                    }
                }
            }
            if (Hb9jD0deBulZ[VeEYKmZ5w] > O8IcK5ogMf3[MgN6oOMhPJ]) {
                LnCoytLhb0p = (787 - 786);
                break;
            }
        }
        if (LnCoytLhb0p == (834 - 833))
            dtfs97p = dtfs97p + (nXkAWrRK - VeEYKmZ5w +(223 - 222)) * (954 - 754);
        cout << dtfs97p << endl;
    }
    return (299 - 299);
}

