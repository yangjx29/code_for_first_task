int main () {
    int lInhJeqXljOx = 0, Bs = 0, Cs = 0;
    int Qdxo8nufY;
    int rDjhr9cCq;
    int Cw;
    Qdxo8nufY = 0;
    rDjhr9cCq = 0;
    Cw = 0;
    int iw1tT0W;
    int t2PvBLI1lbx6;
    int C;
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
    iw1tT0W = (208 - 208);
    t2PvBLI1lbx6 = (499 - 499);
    C = 0;
    {
        iw1tT0W = 67 - 66;
        while (iw1tT0W <= (710 - 707)) {
            for (t2PvBLI1lbx6 = (582 - 581); t2PvBLI1lbx6 <= 3; t2PvBLI1lbx6++) {
                C = 1;
                while (3 >= C) {
                    Qdxo8nufY = (t2PvBLI1lbx6 > iw1tT0W) + (C == iw1tT0W);
                    rDjhr9cCq = (iw1tT0W > t2PvBLI1lbx6) + (iw1tT0W > C);
                    Cw = (C > t2PvBLI1lbx6) + (t2PvBLI1lbx6 > iw1tT0W);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    if (!(iw1tT0W <= t2PvBLI1lbx6 && Qdxo8nufY <= rDjhr9cCq || iw1tT0W <= C &&Qdxo8nufY <= Cw || t2PvBLI1lbx6 <= iw1tT0W && rDjhr9cCq <= Qdxo8nufY || t2PvBLI1lbx6 <= C &&rDjhr9cCq <= Cw || C <= iw1tT0W && Cw <= Qdxo8nufY)) {
                        lInhJeqXljOx = iw1tT0W;
                        Bs = t2PvBLI1lbx6;
                        Cs = C;
                    }
                    C++;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            iw1tT0W = iw1tT0W + 1;
        };
    }
    if (lInhJeqXljOx >= Bs &&Bs >= Cs)
        cout << "ABC" << endl;
    if (lInhJeqXljOx >= Cs &&Cs >= Bs)
        cout << "BCA" << endl;
    if (Bs >= lInhJeqXljOx && lInhJeqXljOx >= Cs)
        cout << "BAC" << endl;
    if (Bs >= Cs &&Cs >= lInhJeqXljOx)
        cout << "BCA" << endl;
    if (Cs >= lInhJeqXljOx && lInhJeqXljOx >= Bs)
        cout << "CAB" << endl;
    if (Cs >= Bs &&Bs >= lInhJeqXljOx)
        cout << "CBA" << endl;
    return 0;
}

