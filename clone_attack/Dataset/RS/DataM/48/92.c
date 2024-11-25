void  germs (int JMN19Z, int g1hnHpKst2rF [11] [11], int GRkPL5B [11] [11]);

int main () {
    int vbSepCVWM;
    int j;
    int m;
    int JMN19Z;
    int g1hnHpKst2rF [11] [11] = {0};
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
    int GRkPL5B [11] [11] = {0};
    cin >> m >> JMN19Z;
    g1hnHpKst2rF[5][5] = m;
    germs (JMN19Z, g1hnHpKst2rF, GRkPL5B);
    {
        vbSepCVWM = 684 - 683;
        while (vbSepCVWM <= 9) {
            for (j = (576 - 575); j < 9; j = j + 1)
                cout << g1hnHpKst2rF[vbSepCVWM][j] << " ";
            cout << g1hnHpKst2rF[vbSepCVWM][j] << endl;
            vbSepCVWM = vbSepCVWM + 1;
        };
    };
}

void  germs (int JMN19Z, int g1hnHpKst2rF [11] [11], int GRkPL5B [11] [11]) {
    int vbSepCVWM;
    int j;
    if (JMN19Z > 0) {
        for (vbSepCVWM = (191 - 190); vbSepCVWM <= 9; vbSepCVWM = vbSepCVWM + 1)
            for (j = (81 - 80); j <= 9; j = j + 1)
                GRkPL5B[vbSepCVWM][j] = 0;
        for (vbSepCVWM = 1; vbSepCVWM <= 9; vbSepCVWM = vbSepCVWM + 1) {
            for (j = 1; j <= 9; j = j + 1) {
                if (g1hnHpKst2rF[vbSepCVWM][j] == 0)
                    continue;
                else {
                    GRkPL5B[vbSepCVWM][j] += g1hnHpKst2rF[vbSepCVWM][j] * 2;
                    GRkPL5B[vbSepCVWM + 1][j] += g1hnHpKst2rF[vbSepCVWM][j];
                    GRkPL5B[vbSepCVWM - 1][j] += g1hnHpKst2rF[vbSepCVWM][j];
                    GRkPL5B[vbSepCVWM][j + 1] = GRkPL5B[vbSepCVWM][j + 1] + g1hnHpKst2rF[vbSepCVWM][j];
                    GRkPL5B[vbSepCVWM][j - 1] += g1hnHpKst2rF[vbSepCVWM][j];
                    GRkPL5B[vbSepCVWM + 1][j + 1] = GRkPL5B[vbSepCVWM + 1][j + 1] + g1hnHpKst2rF[vbSepCVWM][j];
                    GRkPL5B[vbSepCVWM - 1][j + 1] = GRkPL5B[vbSepCVWM - 1][j + 1] + g1hnHpKst2rF[vbSepCVWM][j];
                    GRkPL5B[vbSepCVWM + 1][j - 1] += g1hnHpKst2rF[vbSepCVWM][j];
                    GRkPL5B[vbSepCVWM - 1][j - 1] += g1hnHpKst2rF[vbSepCVWM][j];
                };
            };
        }
        {
            vbSepCVWM = 1;
            while (vbSepCVWM <= 9) {
                for (j = 1; j <= 9; j++)
                    g1hnHpKst2rF[vbSepCVWM][j] = GRkPL5B[vbSepCVWM][j];
                vbSepCVWM++;
            };
        }
        germs (JMN19Z -1, g1hnHpKst2rF, GRkPL5B);
    };
}

