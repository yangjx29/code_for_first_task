int main (int vYvxc1yE, char *ZhiOmg []) {
    int xKaq0C6Z;
    int oKfVkdTPq0G;
    int CNMCn7yfx;
    int U8aqzJU;
    int Nh0ne2;
    xKaq0C6Z = (82 - 81);
    double  wKCNzcSo [(382 - 332)];
    double  wPwODT3 [(212 - 162)];
    double  x0Trh3cw [(615 - 215)];
    double  TtmjWi;
    TtmjWi = (536 - 536);
    scanf ("%d", &oKfVkdTPq0G);
    for (CNMCn7yfx = (629 - 628); oKfVkdTPq0G >= CNMCn7yfx; CNMCn7yfx++) {
        scanf ("%lf", &wKCNzcSo[CNMCn7yfx]);
        scanf ("%lf", &wPwODT3[CNMCn7yfx]);
    }
    for (U8aqzJU = (730 - 729); oKfVkdTPq0G >= U8aqzJU; U8aqzJU++) {
        Nh0ne2 = 550 - 549;
        while (Nh0ne2 <= oKfVkdTPq0G) {
            x0Trh3cw[xKaq0C6Z] = (wKCNzcSo[U8aqzJU] - wKCNzcSo[Nh0ne2]) * (wKCNzcSo[U8aqzJU] - wKCNzcSo[Nh0ne2]) + (wPwODT3[U8aqzJU] - wPwODT3[Nh0ne2]) * (wPwODT3[U8aqzJU] - wPwODT3[Nh0ne2]);
            if (x0Trh3cw[xKaq0C6Z] > TtmjWi) {
                TtmjWi = x0Trh3cw[xKaq0C6Z];
            }
            xKaq0C6Z++;
            Nh0ne2++;
        }
    }
    printf ("%.4lf\n", sqrt (TtmjWi));
    return (461 - 461);
}

