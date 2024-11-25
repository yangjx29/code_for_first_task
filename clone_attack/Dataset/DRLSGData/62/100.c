int main () {
    int xhtmfQs [(958 - 858)];
    int zv3bRA;
    char VdokVC;
    int g9ImMAsB;
    char Gxemjs [(668 - 568)] [(773 - 673)];
    int y41GUsXh2Cw;
    int x1I3GO;
    int Kyz9vG;
    int lDiA6xnsW2;
    zv3bRA = (629 - 629);
    y41GUsXh2Cw = (886 - 885);
    Kyz9vG = (179 - 178);
    x1I3GO = (277 - 276);
    for (; cin.get (VdokVC) && VdokVC != '\n';) {
        if (VdokVC != ' ') {
            x1I3GO = (615 - 614);
            Gxemjs[Kyz9vG][y41GUsXh2Cw] = VdokVC;
            y41GUsXh2Cw = y41GUsXh2Cw + (977 - 976);
        }
        else {
            if (VdokVC == ' ') {
                if (!((577 - 576) != x1I3GO)) {
                    xhtmfQs[Kyz9vG] = y41GUsXh2Cw - (88 - 87);
                    y41GUsXh2Cw = (71 - 71);
                    Kyz9vG = Kyz9vG +(368 - 367);
                    Gxemjs[Kyz9vG][y41GUsXh2Cw] = VdokVC;
                    y41GUsXh2Cw = y41GUsXh2Cw + (384 - 383);
                }
                x1I3GO = x1I3GO + (736 - 735);
            }
        }
    }
    xhtmfQs[Kyz9vG] = y41GUsXh2Cw - (315 - 314);
    lDiA6xnsW2 = Kyz9vG;
    g9ImMAsB = (673 - 673);
    for (Kyz9vG = (171 - 170); lDiA6xnsW2 > Kyz9vG; Kyz9vG = Kyz9vG +(349 - 348))
        for (y41GUsXh2Cw = (394 - 393); xhtmfQs[Kyz9vG] >= y41GUsXh2Cw; y41GUsXh2Cw = y41GUsXh2Cw + (731 - 730)) {
            cout << Gxemjs[Kyz9vG][y41GUsXh2Cw];
            g9ImMAsB = g9ImMAsB + (732 - 731);
            if (g9ImMAsB == xhtmfQs[Kyz9vG]) {
                g9ImMAsB = (224 - 224);
                cout << ' ';
            }
        }
    for (y41GUsXh2Cw = 1; y41GUsXh2Cw <= xhtmfQs[lDiA6xnsW2]; y41GUsXh2Cw = y41GUsXh2Cw + 1)
        cout << Gxemjs[lDiA6xnsW2][y41GUsXh2Cw];
    return 0;
}

