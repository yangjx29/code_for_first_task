int main () {
    int uoYbrWHBJ;
    int hIHmf309qFEM;
    int JrBZ9MJzL;
    int oRi9nguUo;
    int cPNdbV [102] [102] = {0};
    int VWOEszHSNg5;
    int CX95jRfqa;
    char x;
    int wdLuhXF [102] [102] = {0};
    cin >> VWOEszHSNg5;
    oRi9nguUo = 0;
    for (int CX95jRfqa = 1;
    VWOEszHSNg5 >= CX95jRfqa; CX95jRfqa++)
        for (int hIHmf309qFEM = 1;
        VWOEszHSNg5 >= hIHmf309qFEM; hIHmf309qFEM++) {
            cin >> x;
            if (!('.' != x)) {
                cPNdbV[CX95jRfqa][hIHmf309qFEM] = 1;
                wdLuhXF[CX95jRfqa][hIHmf309qFEM] = 1;
            }
            if (!('#' != x)) {
                cPNdbV[CX95jRfqa][hIHmf309qFEM] = 0;
                wdLuhXF[CX95jRfqa][hIHmf309qFEM] = 0;
            }
            if (!('@' != x)) {
                oRi9nguUo = oRi9nguUo + 1;
                cPNdbV[CX95jRfqa][hIHmf309qFEM] = 3;
            }
        }
    for (uoYbrWHBJ = 1; JrBZ9MJzL -1 >= uoYbrWHBJ; uoYbrWHBJ = uoYbrWHBJ + 1) {
        for (CX95jRfqa = 1; VWOEszHSNg5 >= CX95jRfqa; CX95jRfqa++)
            for (hIHmf309qFEM = 1; hIHmf309qFEM <= VWOEszHSNg5; hIHmf309qFEM++) {
                if (cPNdbV[CX95jRfqa][hIHmf309qFEM] == 1 && (cPNdbV[CX95jRfqa -1][hIHmf309qFEM] == 3 || cPNdbV[CX95jRfqa +1][hIHmf309qFEM] == 3 || cPNdbV[CX95jRfqa][hIHmf309qFEM + 1] == 3 || cPNdbV[CX95jRfqa][hIHmf309qFEM - 1] == 3)) {
                    wdLuhXF[CX95jRfqa][hIHmf309qFEM] = 3;
                    oRi9nguUo = oRi9nguUo + 1;
                }
            }
        for (CX95jRfqa = 1; CX95jRfqa <= VWOEszHSNg5; CX95jRfqa++)
            for (hIHmf309qFEM = 1; hIHmf309qFEM <= VWOEszHSNg5; hIHmf309qFEM++) {
                cPNdbV[CX95jRfqa][hIHmf309qFEM] = wdLuhXF[CX95jRfqa][hIHmf309qFEM];
            }
    }
    cout << oRi9nguUo << endl;
    cin >> JrBZ9MJzL;
    return 0;
}

