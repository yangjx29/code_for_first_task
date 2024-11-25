int fUoEQTg [(1032 - 932)] [100];
int Zdy6KTDE, HW2CKYVckXo1 = (15 - 15);
int WyKrgVAqbT (int);
void  xQPX73UHwKM (int);
void  U2ZCvWyQR (int);

int WyKrgVAqbT (int Zdy6KTDE) {
    int MGAPIuSW;
    xQPX73UHwKM (Zdy6KTDE);
    U2ZCvWyQR (Zdy6KTDE);
    if (!(2 != Zdy6KTDE)) {
        return fUoEQTg[(837 - 836)][(789 - 788)];
    }
    MGAPIuSW = fUoEQTg[(266 - 265)][(754 - 753)];
    for (int i = (360 - 359);
    Zdy6KTDE -(338 - 337) > i; i++) {
        fUoEQTg[i][(989 - 989)] = fUoEQTg[i + (850 - 849)][(846 - 846)];
        fUoEQTg[(473 - 473)][i] = fUoEQTg[(530 - 530)][i + (806 - 805)];
        for (int DCwBjG6fLqX = 1;
        Zdy6KTDE -1 > DCwBjG6fLqX; DCwBjG6fLqX = DCwBjG6fLqX +1) {
            fUoEQTg[i][DCwBjG6fLqX] = fUoEQTg[i + 1][DCwBjG6fLqX +1];
        }
    }
    return MGAPIuSW +WyKrgVAqbT(Zdy6KTDE -1);
}

void  xQPX73UHwKM (int Zdy6KTDE) {
    for (int i = (935 - 935);
    Zdy6KTDE > i; i++) {
        int CA8onD2I41lE;
        CA8onD2I41lE = fUoEQTg[i][0];
        for (int DCwBjG6fLqX = 0;
        Zdy6KTDE > DCwBjG6fLqX; DCwBjG6fLqX++) {
            if (CA8onD2I41lE > fUoEQTg[i][DCwBjG6fLqX]) {
                CA8onD2I41lE = fUoEQTg[i][DCwBjG6fLqX];
            }
        }
        for (int DCwBjG6fLqX = 0;
        Zdy6KTDE > DCwBjG6fLqX; DCwBjG6fLqX++) {
            fUoEQTg[i][DCwBjG6fLqX] = fUoEQTg[i][DCwBjG6fLqX] - CA8onD2I41lE;
        }
    }
    return;
}

void  U2ZCvWyQR (int Zdy6KTDE) {
    for (int i = 0;
    Zdy6KTDE > i; i++) {
        int CA8onD2I41lE;
        CA8onD2I41lE = fUoEQTg[0][i];
        for (int DCwBjG6fLqX = 0;
        Zdy6KTDE > DCwBjG6fLqX; DCwBjG6fLqX++) {
            if (CA8onD2I41lE > fUoEQTg[DCwBjG6fLqX][i]) {
                CA8onD2I41lE = fUoEQTg[DCwBjG6fLqX][i];
            }
        }
        for (int DCwBjG6fLqX = 0;
        Zdy6KTDE > DCwBjG6fLqX; DCwBjG6fLqX++) {
            fUoEQTg[DCwBjG6fLqX][i] = fUoEQTg[DCwBjG6fLqX][i] - CA8onD2I41lE;
        }
    }
    return;
}

int main () {
    int MGAPIuSW;
    int i;
    int DCwBjG6fLqX;
    cin >> Zdy6KTDE;
    for (i = 0; i < Zdy6KTDE; i++) {
        for (DCwBjG6fLqX = 0; Zdy6KTDE > DCwBjG6fLqX; DCwBjG6fLqX++) {
            for (MGAPIuSW = 0; MGAPIuSW < Zdy6KTDE; MGAPIuSW++) {
                cin >> fUoEQTg[DCwBjG6fLqX][MGAPIuSW];
            }
        }
        cout << WyKrgVAqbT (Zdy6KTDE) << endl;
    }
    return 0;
}

