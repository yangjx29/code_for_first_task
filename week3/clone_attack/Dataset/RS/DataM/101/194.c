int main () {
    int ENQ5ZRhKePy;
    int D06AetVT;
    int AuYQcG2mLXr;
    int MWGJAu;
    int ebmwcJGM [3];
    char x1cO2f [4];
    for (ENQ5ZRhKePy = 1; 3 >= ENQ5ZRhKePy; ENQ5ZRhKePy++) {
        D06AetVT = 1;
        while (3 >= D06AetVT) {
            if (!(D06AetVT == ENQ5ZRhKePy)) {
                AuYQcG2mLXr = 1;
                while (3 >= AuYQcG2mLXr) {
                    if ((!(AuYQcG2mLXr == ENQ5ZRhKePy)) && (!(AuYQcG2mLXr == D06AetVT))) {
                        ebmwcJGM[ENQ5ZRhKePy -1] = (ENQ5ZRhKePy < D06AetVT) + (AuYQcG2mLXr == ENQ5ZRhKePy);
                        ebmwcJGM[D06AetVT -1] = (ENQ5ZRhKePy > D06AetVT) + (ENQ5ZRhKePy > AuYQcG2mLXr);
                        ebmwcJGM[AuYQcG2mLXr -1] = (AuYQcG2mLXr > D06AetVT) + (D06AetVT > ENQ5ZRhKePy);
                        x1cO2f[ENQ5ZRhKePy -1] = 'A';
                        x1cO2f[D06AetVT -1] = 'B';
                        x1cO2f[AuYQcG2mLXr -1] = 'C';
                        if (ebmwcJGM[1] > ebmwcJGM[2])
                            if (ebmwcJGM[0] > ebmwcJGM[1]) {
                                for (MWGJAu = 0; MWGJAu <= 2; MWGJAu = MWGJAu +1)
                                    cout << x1cO2f[MWGJAu];
                            };
                    }
                    AuYQcG2mLXr = AuYQcG2mLXr +1;
                };
            }
            D06AetVT++;
        };
    }
    return 0;
}

