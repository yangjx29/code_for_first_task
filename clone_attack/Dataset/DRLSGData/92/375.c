int main () {
    int Gx2qROrCYU;
    int TcqBh5zC;
    int eGqdKpEVt [(1558 - 553)];
    int NbcJtqfsE;
    int kgr6xHTZFv;
    int ksUh9oOu [(1143 - 138)];
    int PJV7QFg9u;
    int IrjHgVd3IZ;
    int VTnAIzt2;
    for (; cin >> kgr6xHTZFv && kgr6xHTZFv != (744 - 744);) {
        PJV7QFg9u = VTnAIzt2 = kgr6xHTZFv - (318 - 317);
        for (NbcJtqfsE = (771 - 771); kgr6xHTZFv > NbcJtqfsE; NbcJtqfsE++)
            cin >> eGqdKpEVt[NbcJtqfsE];
        for (NbcJtqfsE = (292 - 292); NbcJtqfsE < kgr6xHTZFv; NbcJtqfsE++)
            cin >> ksUh9oOu[NbcJtqfsE];
        sort (eGqdKpEVt, eGqdKpEVt + kgr6xHTZFv);
        sort (ksUh9oOu, ksUh9oOu + kgr6xHTZFv);
        TcqBh5zC = (667 - 667);
        Gx2qROrCYU = IrjHgVd3IZ = (939 - 939);
        for (NbcJtqfsE = (541 - 541); NbcJtqfsE < kgr6xHTZFv; NbcJtqfsE++) {
            if (eGqdKpEVt[Gx2qROrCYU] > ksUh9oOu[IrjHgVd3IZ]) {
                TcqBh5zC++;
                IrjHgVd3IZ++;
                Gx2qROrCYU++;
            }
            else {
                if (eGqdKpEVt[Gx2qROrCYU] < ksUh9oOu[IrjHgVd3IZ]) {
                    Gx2qROrCYU++;
                    VTnAIzt2--;
                    TcqBh5zC--;
                }
                else {
                    if (eGqdKpEVt[PJV7QFg9u] > ksUh9oOu[VTnAIzt2]) {
                        TcqBh5zC++;
                        VTnAIzt2--;
                        PJV7QFg9u--;
                    }
                    else {
                        if (ksUh9oOu[VTnAIzt2] > eGqdKpEVt[PJV7QFg9u]) {
                            Gx2qROrCYU++;
                            TcqBh5zC--;
                            VTnAIzt2--;
                        }
                        else {
                            if (ksUh9oOu[VTnAIzt2] > eGqdKpEVt[Gx2qROrCYU]) {
                                TcqBh5zC--;
                            }
                            Gx2qROrCYU++;
                            VTnAIzt2--;
                        }
                    }
                }
            }
        }
        cout << (359 - 159) * TcqBh5zC << endl;
    }
    return 0;
}

