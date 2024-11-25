int main () {
    int crCVfXUpSv3P;
    int uy7gfYP;
    int g1bCLzEAhDup;
    int NdEnbN8sDJz7;
    int JvZs7rei;
    int GflmgNaShJ3;
    int sW6E1GOMt;
    int KiGhEH5;
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
    crCVfXUpSv3P = (472 - 472);
    char Yzmw3LkO4 [(410 - 310)] [100];
    cin >> GflmgNaShJ3;
    sW6E1GOMt = GflmgNaShJ3 *GflmgNaShJ3;
    {
        uy7gfYP = 83 - 83;
        while (GflmgNaShJ3 > uy7gfYP) {
            for (g1bCLzEAhDup = 0; GflmgNaShJ3 > g1bCLzEAhDup; g1bCLzEAhDup++) {
                cin >> Yzmw3LkO4[uy7gfYP][g1bCLzEAhDup];
                if (!('@' != Yzmw3LkO4[uy7gfYP][g1bCLzEAhDup]))
                    crCVfXUpSv3P = crCVfXUpSv3P + 1;
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
            uy7gfYP = uy7gfYP + 1;
        };
    }
    cin >> KiGhEH5;
    {
        NdEnbN8sDJz7 = 713 - 712;
        while (NdEnbN8sDJz7 < KiGhEH5) {
            if (sW6E1GOMt <= crCVfXUpSv3P)
                break;
            NdEnbN8sDJz7 = NdEnbN8sDJz7 +1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            {
                uy7gfYP = 0;
                while (GflmgNaShJ3 > uy7gfYP) {
                    {
                        g1bCLzEAhDup = 0;
                        while (g1bCLzEAhDup < GflmgNaShJ3) {
                            if (Yzmw3LkO4[uy7gfYP][g1bCLzEAhDup] == '@') {
                                if (0 < uy7gfYP && Yzmw3LkO4[uy7gfYP - 1][g1bCLzEAhDup] == '.') {
                                    crCVfXUpSv3P = crCVfXUpSv3P + 1;
                                    Yzmw3LkO4[uy7gfYP - 1][g1bCLzEAhDup] = '*';
                                }
                                if (0 < g1bCLzEAhDup && Yzmw3LkO4[uy7gfYP][g1bCLzEAhDup - 1] == '.') {
                                    crCVfXUpSv3P = crCVfXUpSv3P + 1;
                                    Yzmw3LkO4[uy7gfYP][g1bCLzEAhDup - 1] = '*';
                                }
                                if (uy7gfYP < GflmgNaShJ3 -1 && Yzmw3LkO4[uy7gfYP + 1][g1bCLzEAhDup] == '.') {
                                    crCVfXUpSv3P++;
                                    Yzmw3LkO4[uy7gfYP + 1][g1bCLzEAhDup] = '*';
                                }
                                if (g1bCLzEAhDup < GflmgNaShJ3 -1 && Yzmw3LkO4[uy7gfYP][g1bCLzEAhDup + 1] == '.') {
                                    crCVfXUpSv3P++;
                                    Yzmw3LkO4[uy7gfYP][g1bCLzEAhDup + 1] = '*';
                                };
                            }
                            g1bCLzEAhDup = g1bCLzEAhDup + 1;
                        };
                    }
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
                    uy7gfYP++;
                };
            }
            for (uy7gfYP = 0; uy7gfYP < GflmgNaShJ3; uy7gfYP = uy7gfYP + 1) {
                g1bCLzEAhDup = 0;
                while (g1bCLzEAhDup < GflmgNaShJ3) {
                    if (Yzmw3LkO4[uy7gfYP][g1bCLzEAhDup] == '*')
                        Yzmw3LkO4[uy7gfYP][g1bCLzEAhDup] = '@';
                    g1bCLzEAhDup = g1bCLzEAhDup + 1;
                };
            };
        };
    }
    cout << crCVfXUpSv3P << endl;
    return 0;
}

