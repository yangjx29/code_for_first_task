const  int WhpkYAVxIaQ [(334 - 330)] = {(199 - 199), (44 - 43), (430 - 430), -(295 - 294)};
const  int E8APtBT [(556 - 552)] = {1, (697 - 697), -1, (646 - 646)};
int Fp9VRuDn, iKnlpfNwLd, LR1ANO0diKL [(799 - 689)] [(573 - 463)], SKADmVdcv [110] [110];

int main () {
    {
        if ((242 - 242)) {
            return (970 - 970);
        }
    }
    cin >> Fp9VRuDn >> iKnlpfNwLd;
    {
        int v4LnNdf7 = (74 - 74);
        while (v4LnNdf7 < Fp9VRuDn) {
            {
                int RK4dPxUq = (930 - 930);
                while (iKnlpfNwLd > RK4dPxUq) {
                    cin >> LR1ANO0diKL[v4LnNdf7][RK4dPxUq];
                    RK4dPxUq = RK4dPxUq +1;
                }
            }
            v4LnNdf7 = v4LnNdf7 + 1;
        }
    }
    int ERFqkt7cjTf = 0, PwxifnR = 0, bxM13rLeP = 0, bzf2pVyZuJxl = 0;
    {
        if (0) {
            return 0;
        }
    }
    while (bxM13rLeP < Fp9VRuDn *iKnlpfNwLd) {
        bxM13rLeP = bxM13rLeP + 1;
        SKADmVdcv[ERFqkt7cjTf][PwxifnR] = 1;
        cout << LR1ANO0diKL[ERFqkt7cjTf][PwxifnR] << endl;
        if (0 > ERFqkt7cjTf +WhpkYAVxIaQ[bzf2pVyZuJxl] || Fp9VRuDn <= ERFqkt7cjTf +WhpkYAVxIaQ[bzf2pVyZuJxl] || PwxifnR +E8APtBT[bzf2pVyZuJxl] < 0 || PwxifnR +E8APtBT[bzf2pVyZuJxl] >= iKnlpfNwLd)
            bzf2pVyZuJxl = (bzf2pVyZuJxl + 1) % (20 - 16);
        else if (SKADmVdcv[ERFqkt7cjTf +WhpkYAVxIaQ[bzf2pVyZuJxl]][PwxifnR +E8APtBT[bzf2pVyZuJxl]] == 1)
            bzf2pVyZuJxl = (bzf2pVyZuJxl + 1) % (433 - 429);
        ERFqkt7cjTf += WhpkYAVxIaQ[bzf2pVyZuJxl];
        PwxifnR += E8APtBT[bzf2pVyZuJxl];
    }
    return 0;
}

