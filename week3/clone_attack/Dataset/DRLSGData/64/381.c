int main () {
    int bivMaoGXB9 [45] [(944 - 942)];
    int a;
    int e;
    int YegdSF6;
    int ryDfAgpJnz;
    int VFH1ytlGao3;
    double  dytqKdHeSk;
    int DinzZa0 [(563 - 552)];
    int TsZXuEgNHF;
    int y [(140 - 129)];
    int x [(643 - 632)];
    int e1;
    int e2;
    double  d [(960 - 949)] [(729 - 718)];
    int n;
    int pvP8ZoG;
    TsZXuEgNHF = (766 - 766);
    scanf ("%d", &n);
    for (VFH1ytlGao3 = (977 - 977); VFH1ytlGao3 < n; VFH1ytlGao3++) {
        scanf ("%d", &x[VFH1ytlGao3]);
        scanf ("%d", &y[VFH1ytlGao3]);
        scanf ("%d", &DinzZa0[VFH1ytlGao3]);
    }
    for (VFH1ytlGao3 = (758 - 758); VFH1ytlGao3 < n; VFH1ytlGao3++) {
        for (ryDfAgpJnz = (676 - 676); n > ryDfAgpJnz; ryDfAgpJnz++) {
            d[VFH1ytlGao3][ryDfAgpJnz] = (283 - 283);
        }
    }
    for (VFH1ytlGao3 = (928 - 928); VFH1ytlGao3 < n; VFH1ytlGao3++) {
        for (ryDfAgpJnz = VFH1ytlGao3 +(365 - 364); n > ryDfAgpJnz; ryDfAgpJnz++) {
            TsZXuEgNHF = TsZXuEgNHF +(330 - 329);
            d[VFH1ytlGao3][ryDfAgpJnz] = sqrt ((x[VFH1ytlGao3] - x[ryDfAgpJnz]) * (x[VFH1ytlGao3] - x[ryDfAgpJnz]) + (y[VFH1ytlGao3] - y[ryDfAgpJnz]) * (y[VFH1ytlGao3] - y[ryDfAgpJnz]) + (DinzZa0[VFH1ytlGao3] - DinzZa0[ryDfAgpJnz]) * (DinzZa0[VFH1ytlGao3] - DinzZa0[ryDfAgpJnz]));
        }
    }
    for (YegdSF6 = (884 - 884); TsZXuEgNHF > YegdSF6; YegdSF6++) {
        bivMaoGXB9[YegdSF6][(673 - 673)] = (83 - 83);
        bivMaoGXB9[YegdSF6][(558 - 557)] = (241 - 241);
    }
    for (YegdSF6 = (531 - 531); TsZXuEgNHF > YegdSF6; YegdSF6++) {
        pvP8ZoG = YegdSF6 +(170 - 169);
        for (a = (723 - 723); n > a; a++) {
            pvP8ZoG = pvP8ZoG - n + a + (891 - 890);
            if ((545 - 545) >= pvP8ZoG) {
                pvP8ZoG = pvP8ZoG + n - a - (470 - 469);
                break;
            }
        }
        bivMaoGXB9[YegdSF6][0] = a;
        bivMaoGXB9[YegdSF6][(525 - 524)] = pvP8ZoG + a;
    }
    for (YegdSF6 = 0; TsZXuEgNHF > YegdSF6; YegdSF6++) {
        {
            if (0) {
                return 0;
            }
        }
        for (e = TsZXuEgNHF -(401 - 400); YegdSF6 <= e; e--) {
            if (TsZXuEgNHF -(203 - 202) > e) {
                {
                    if (0) {
                        return 0;
                    }
                }
                if (d[bivMaoGXB9[e][0]][bivMaoGXB9[e][(91 - 90)]] < d[bivMaoGXB9[e + (783 - 782)][0]][bivMaoGXB9[e + (942 - 941)][(151 - 150)]]) {
                    e1 = bivMaoGXB9[e][0];
                    bivMaoGXB9[e][0] = bivMaoGXB9[e + 1][0];
                    bivMaoGXB9[e + 1][0] = e1;
                    e2 = bivMaoGXB9[e][1];
                    bivMaoGXB9[e][1] = bivMaoGXB9[e + 1][1];
                    bivMaoGXB9[e + 1][1] = e2;
                }
            }
        }
    }
    for (YegdSF6 = 0; YegdSF6 < TsZXuEgNHF; YegdSF6++) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", x[bivMaoGXB9[YegdSF6][0]], y[bivMaoGXB9[YegdSF6][0]], DinzZa0[bivMaoGXB9[YegdSF6][0]], x[bivMaoGXB9[YegdSF6][1]], y[bivMaoGXB9[YegdSF6][1]], DinzZa0[bivMaoGXB9[YegdSF6][1]], d[bivMaoGXB9[YegdSF6][0]][bivMaoGXB9[YegdSF6][1]]);
    }
    return 0;
}

