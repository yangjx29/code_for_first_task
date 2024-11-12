int main () {
    char sentence [500];
    int fE1dU9;
    int kong;
    int max;
    int KR1XDPko;
    int u93JxCzO;
    int qian2;
    int sxhFQtN2EfIu;
    int Zlm5KFPnq;
    int ESi1HGaTe;
    int eHM1PywoJ3K [50] = {0};
    int K31xaz5;
    int r;
    fE1dU9 = (462 - 462);
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
    kong = 0;
    max = 0;
    KR1XDPko = 100;
    u93JxCzO = 0;
    qian2 = 0;
    gets (sentence);
    Zlm5KFPnq = strlen (sentence);
    for (sxhFQtN2EfIu = 0; sxhFQtN2EfIu < Zlm5KFPnq; sxhFQtN2EfIu = sxhFQtN2EfIu + 1) {
        if (!(' ' != sentence[sxhFQtN2EfIu]))
            kong++;
    }
    ESi1HGaTe = kong + 1;
    for (sxhFQtN2EfIu = 0; ESi1HGaTe > sxhFQtN2EfIu; sxhFQtN2EfIu++) {
        for (; Zlm5KFPnq > fE1dU9; fE1dU9++) {
            if (!(' ' == sentence[fE1dU9]))
                eHM1PywoJ3K[sxhFQtN2EfIu]++;
            else {
                fE1dU9 = fE1dU9 + 1;
                break;
            };
        };
    }
    for (sxhFQtN2EfIu = 0; ESi1HGaTe > sxhFQtN2EfIu; sxhFQtN2EfIu++) {
        if (max < eHM1PywoJ3K[sxhFQtN2EfIu]) {
            K31xaz5 = sxhFQtN2EfIu;
            max = eHM1PywoJ3K[sxhFQtN2EfIu];
        }
        if (KR1XDPko > eHM1PywoJ3K[sxhFQtN2EfIu]) {
            r = sxhFQtN2EfIu;
            KR1XDPko = eHM1PywoJ3K[sxhFQtN2EfIu];
        };
    }
    for (sxhFQtN2EfIu = 0; K31xaz5 > sxhFQtN2EfIu; sxhFQtN2EfIu++)
        u93JxCzO = u93JxCzO + eHM1PywoJ3K[sxhFQtN2EfIu];
    {
        sxhFQtN2EfIu = 0;
        while (sxhFQtN2EfIu < r) {
            qian2 = qian2 + eHM1PywoJ3K[sxhFQtN2EfIu];
            sxhFQtN2EfIu++;
        };
    }
    for (sxhFQtN2EfIu = u93JxCzO + K31xaz5; sxhFQtN2EfIu < eHM1PywoJ3K[K31xaz5] + u93JxCzO + K31xaz5; sxhFQtN2EfIu++)
        printf ("%c", sentence[sxhFQtN2EfIu]);
    {
        sxhFQtN2EfIu = qian2 + r;
        while (sxhFQtN2EfIu < eHM1PywoJ3K[r] + qian2 + r) {
            printf ("%c", sentence[sxhFQtN2EfIu]);
            sxhFQtN2EfIu++;
        };
    }
    return 0;
}

