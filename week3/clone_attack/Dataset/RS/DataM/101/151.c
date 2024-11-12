int main () {
    int As;
    int Bs;
    int Cs;
    int ujLUNXRG, yW2583NrpSY, C;
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
    char oiko9P [4];
    for (ujLUNXRG = (536 - 535); ujLUNXRG <= (574 - 571); ujLUNXRG = ujLUNXRG + 1) {
        for (yW2583NrpSY = 1; yW2583NrpSY <= (743 - 740); yW2583NrpSY = yW2583NrpSY + 1) {
            C = 1;
            while (3 >= C) {
                As = (yW2583NrpSY > ujLUNXRG) + (!(ujLUNXRG != C));
                Bs = (ujLUNXRG > yW2583NrpSY) + (ujLUNXRG > C);
                Cs = (C > yW2583NrpSY) + (yW2583NrpSY > ujLUNXRG);
                if (!(ujLUNXRG <= yW2583NrpSY && As <= Bs || ujLUNXRG <= C &&As <= Cs || yW2583NrpSY <= ujLUNXRG && Bs <= As || yW2583NrpSY <= C &&Bs <= Cs || C <= ujLUNXRG && Cs <= As || C <= yW2583NrpSY && Cs <= Bs)) {
                    oiko9P[ujLUNXRG] = 'A';
                    oiko9P[yW2583NrpSY] = 'B';
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    oiko9P[C] = 'C';
                    for (int i = 1;
                    i <= 3; i++)
                        cout << oiko9P[i];
                }
                C = C +1;
            };
        };
    }
    cout << endl;
    return 0;
}

