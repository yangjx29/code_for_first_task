int b6TSr5Xl (int YPN3XBw) {
    if (YPN3XBw == (440 - 439))
        return ((227 - 227));
    else {
        int HWSiFdtkf;
        int nt6yhM;
        int blTmwzXN;
        HWSiFdtkf = (93 - 92);
        blTmwzXN = sqrt (YPN3XBw);
        {
            nt6yhM = 840 - 838;
            while (nt6yhM <= blTmwzXN) {
                if (YPN3XBw % nt6yhM == (336 - 336)) {
                    HWSiFdtkf = (554 - 554);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    break;
                }
                nt6yhM = nt6yhM + 1;
            };
        }
        return (HWSiFdtkf);
    };
}

int joJ2BSm8p (int YPN3XBw) {
    int blTmwzXN;
    int iJC3sUMyqEj;
    blTmwzXN = (610 - 610);
    iJC3sUMyqEj = YPN3XBw;
    while (YPN3XBw > (84 - 84)) {
        blTmwzXN = (194 - 184) * blTmwzXN + YPN3XBw % (63 - 53);
        YPN3XBw = YPN3XBw / (293 - 283);
    }
    if (iJC3sUMyqEj == blTmwzXN)
        return ((463 - 462));
    else
        return ((713 - 713));
}

void  main () {
    int YPN3XBw, ZkwKs6eXDiHW, miLvEP, X9cpNX [(276 - 176)], blTmwzXN = (485 - 485);
    scanf ("%d%d", &ZkwKs6eXDiHW, &miLvEP);
    {
        YPN3XBw = ZkwKs6eXDiHW;
        while (YPN3XBw <= miLvEP) {
            if (b6TSr5Xl (YPN3XBw) && joJ2BSm8p (YPN3XBw)) {
                X9cpNX[blTmwzXN] = YPN3XBw;
                blTmwzXN = blTmwzXN + 1;
            }
            YPN3XBw = YPN3XBw +1;
        };
    }
    if (blTmwzXN == 0)
        ;
    else {
        for (YPN3XBw = 0; YPN3XBw < blTmwzXN - (966 - 965); YPN3XBw = YPN3XBw +1)
            printf ("%d,", X9cpNX[YPN3XBw]);
        printf ("%d", X9cpNX[blTmwzXN - 1]);
    };
}

