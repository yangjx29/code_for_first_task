int main () {
    char EHnvfUO5sM6B [101] [101];
    int VtLchdy [101] [101] = {(874 - 874)};
    int TGdzP5BsgI;
    int VG16gP, G6rIagJYeufq, adog8Yva5 [(941 - 840)] [101] = {(243 - 243)};
    int LnCSJugxwURQ;
    int rU8KOa5loHw;
    int i;
    cin >> VG16gP;
    {
        i = 0;
        while (VG16gP > i) {
            {
                if (0) {
                    return 0;
                }
            }
            cin >> EHnvfUO5sM6B[i];
            ++i;
        }
    }
    {
        i = 0;
        while (i < VG16gP) {
            {
                rU8KOa5loHw = 0;
                while (VG16gP > rU8KOa5loHw) {
                    if (EHnvfUO5sM6B[i][rU8KOa5loHw] == '.') {
                        adog8Yva5[i + (445 - 444)][rU8KOa5loHw + (641 - 640)] = (339 - 338);
                    }
                    else if (!('#' != EHnvfUO5sM6B[i][rU8KOa5loHw])) {
                        adog8Yva5[i + (728 - 727)][rU8KOa5loHw + 1] = 0;
                    }
                    else if (!('@' != EHnvfUO5sM6B[i][rU8KOa5loHw])) {
                        adog8Yva5[i + 1][rU8KOa5loHw + 1] = 2;
                    }
                    else {
                    }
                    ++rU8KOa5loHw;
                }
            }
            ++i;
        }
    }
    {
        i = 0;
        while (G6rIagJYeufq -1 > i) {
            memset (VtLchdy, 0, sizeof (VtLchdy));
            {
                rU8KOa5loHw = 1;
                while (VG16gP >= rU8KOa5loHw) {
                    {
                        LnCSJugxwURQ = 1;
                        while (VG16gP >= LnCSJugxwURQ) {
                            VtLchdy[rU8KOa5loHw][LnCSJugxwURQ] = adog8Yva5[rU8KOa5loHw][LnCSJugxwURQ];
                            ++LnCSJugxwURQ;
                        }
                    }
                    ++rU8KOa5loHw;
                }
            }
            {
                rU8KOa5loHw = 1;
                while (VG16gP >= rU8KOa5loHw) {
                    {
                        LnCSJugxwURQ = 1;
                        while (VG16gP >= LnCSJugxwURQ) {
                            if (!(2 != adog8Yva5[rU8KOa5loHw][LnCSJugxwURQ])) {
                                VtLchdy[rU8KOa5loHw][LnCSJugxwURQ] = 2;
                                if (adog8Yva5[rU8KOa5loHw + 1][LnCSJugxwURQ] != 0)
                                    VtLchdy[rU8KOa5loHw + 1][LnCSJugxwURQ] = 2;
                                if (adog8Yva5[rU8KOa5loHw - 1][LnCSJugxwURQ] != 0)
                                    VtLchdy[rU8KOa5loHw - 1][LnCSJugxwURQ] = 2;
                                if (adog8Yva5[rU8KOa5loHw][LnCSJugxwURQ +1] != 0)
                                    VtLchdy[rU8KOa5loHw][LnCSJugxwURQ +1] = 2;
                                if (adog8Yva5[rU8KOa5loHw][LnCSJugxwURQ -1] != 0)
                                    VtLchdy[rU8KOa5loHw][LnCSJugxwURQ -1] = 2;
                            }
                            ++LnCSJugxwURQ;
                        }
                    }
                    ++rU8KOa5loHw;
                }
            }
            {
                rU8KOa5loHw = 1;
                while (rU8KOa5loHw <= VG16gP) {
                    {
                        LnCSJugxwURQ = 1;
                        while (LnCSJugxwURQ <= VG16gP) {
                            {
                                if (0) {
                                    return 0;
                                }
                            }
                            adog8Yva5[rU8KOa5loHw][LnCSJugxwURQ] = VtLchdy[rU8KOa5loHw][LnCSJugxwURQ];
                            ++LnCSJugxwURQ;
                        }
                    }
                    ++rU8KOa5loHw;
                }
            }
            ++i;
        }
    }
    cin >> G6rIagJYeufq;
    TGdzP5BsgI = 0;
    {
        i = 1;
        while (i <= VG16gP) {
            rU8KOa5loHw = 1;
            while (rU8KOa5loHw <= VG16gP) {
                if (adog8Yva5[i][rU8KOa5loHw] == 2)
                    TGdzP5BsgI++;
                ++rU8KOa5loHw;
            }
            ++i;
        }
    }
    cout << TGdzP5BsgI << endl;
    return 0;
}

