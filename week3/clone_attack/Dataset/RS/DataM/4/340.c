int PgvQ0KAhpd = (633 - 633), col = (54 - 54);

void  Input (int (*Qm4Gar5ygF2) [(599 - 494)]) {
    cin >> PgvQ0KAhpd >> col;
    for (int AucF1Ub7YZ = (697 - 697);
    AucF1Ub7YZ <= PgvQ0KAhpd -(98 - 97); AucF1Ub7YZ = AucF1Ub7YZ +1) {
        int ty7Atm = (559 - 559);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (col - (798 - 797) >= ty7Atm) {
            cin >> *(*(Qm4Gar5ygF2 +AucF1Ub7YZ) + ty7Atm);
            ty7Atm++;
        };
    };
}

void  Diagonal (int (*Qm4Gar5ygF2) [(1016 - 911)], int mS5wlmNHIvWY, int dsdWpXA5gyo3) {
    for (int AucF1Ub7YZ = (466 - 466);
    ; AucF1Ub7YZ = AucF1Ub7YZ +1) {
        if (mS5wlmNHIvWY + AucF1Ub7YZ > PgvQ0KAhpd -1 || dsdWpXA5gyo3 - AucF1Ub7YZ < (156 - 156))
            break;
        else if (mS5wlmNHIvWY == 0 && dsdWpXA5gyo3 == 0) {
            cout << **Qm4Gar5ygF2;
        }
        else {
            cout << endl << *(*(Qm4Gar5ygF2 +mS5wlmNHIvWY + AucF1Ub7YZ) + dsdWpXA5gyo3 - AucF1Ub7YZ);
        };
    }
    return;
}

void  IjvaUDGN7 (int (*Qm4Gar5ygF2) [105], int mS5wlmNHIvWY, int dsdWpXA5gyo3) {
    Diagonal (Qm4Gar5ygF2, mS5wlmNHIvWY, dsdWpXA5gyo3);
    if (dsdWpXA5gyo3 < col - 1)
        IjvaUDGN7 (Qm4Gar5ygF2, mS5wlmNHIvWY, dsdWpXA5gyo3 + 1);
    else if (mS5wlmNHIvWY < PgvQ0KAhpd -1)
        IjvaUDGN7 (Qm4Gar5ygF2, mS5wlmNHIvWY + 1, dsdWpXA5gyo3);
    else
        return;
}

int main () {
    int a [105] [105];
    Input (a);
    IjvaUDGN7 (a, 0, 0);
}

