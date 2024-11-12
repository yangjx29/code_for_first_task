void  main () {
    char WZlHP7E54Oz [(764 - 734)] [(589 - 489)], QToBij [(792 - 762)] [(793 - 693)], ymbDVUBgZN [30] [100];
    int FgJNT4aijyQw, zIS3eO7YtF4, UwEiYt, IeJuGHh [(643 - 543)], ypSP0quw [(281 - 181)], YRDkwm9Z5c [(990 - 960)] [(699 - 599)], m2iUezGYvaHX [(139 - 109)] [100], MScxmnA [(930 - 900)] [100];
    scanf ("%d", &FgJNT4aijyQw);
    for (zIS3eO7YtF4 = (294 - 294); zIS3eO7YtF4 < FgJNT4aijyQw; zIS3eO7YtF4++) {
        scanf ("%s", WZlHP7E54Oz[zIS3eO7YtF4]);
        scanf ("%s", QToBij[zIS3eO7YtF4]);
        {
            UwEiYt = (41 - 41);
            for (; WZlHP7E54Oz[zIS3eO7YtF4][UwEiYt] != '\0';) {
                UwEiYt++;
            }
        }
        IeJuGHh[zIS3eO7YtF4] = UwEiYt;
        {
            UwEiYt = (871 - 871);
            for (; QToBij[zIS3eO7YtF4][UwEiYt] != '\0';) {
                UwEiYt++;
            }
        }
        ypSP0quw[zIS3eO7YtF4] = UwEiYt;
        {
            UwEiYt = (463 - 463);
            for (; UwEiYt < IeJuGHh[zIS3eO7YtF4];) {
                YRDkwm9Z5c[zIS3eO7YtF4][UwEiYt] = WZlHP7E54Oz[zIS3eO7YtF4][IeJuGHh[zIS3eO7YtF4] - (961 - 960) - UwEiYt] - (418 - 370);
                UwEiYt++;
            }
        }
        {
            UwEiYt = (98 - 98);
            for (; ypSP0quw[zIS3eO7YtF4] > UwEiYt;) {
                m2iUezGYvaHX[zIS3eO7YtF4][UwEiYt] = QToBij[zIS3eO7YtF4][ypSP0quw[zIS3eO7YtF4] - (375 - 374) - UwEiYt] - (610 - 562);
                UwEiYt++;
            }
        }
        {
            UwEiYt = zIS3eO7YtF4;
            for (; UwEiYt < IeJuGHh[zIS3eO7YtF4];) {
                m2iUezGYvaHX[zIS3eO7YtF4][UwEiYt] = (130 - 130);
                UwEiYt++;
            }
        }
        {
            UwEiYt = (570 - 570);
            for (; IeJuGHh[zIS3eO7YtF4] > UwEiYt;) {
                MScxmnA[zIS3eO7YtF4][UwEiYt] = YRDkwm9Z5c[zIS3eO7YtF4][UwEiYt] - m2iUezGYvaHX[zIS3eO7YtF4][UwEiYt];
                if ((789 - 789) > MScxmnA[zIS3eO7YtF4][UwEiYt]) {
                    MScxmnA[zIS3eO7YtF4][UwEiYt] = MScxmnA[zIS3eO7YtF4][UwEiYt] + (1006 - 996);
                    YRDkwm9Z5c[zIS3eO7YtF4][UwEiYt +(157 - 156)] = YRDkwm9Z5c[zIS3eO7YtF4][UwEiYt +(74 - 73)] - (45 - 44);
                }
                UwEiYt++;
            }
        }
        {
            UwEiYt = (974 - 974);
            for (; IeJuGHh[zIS3eO7YtF4] > UwEiYt;) {
                ymbDVUBgZN[zIS3eO7YtF4][UwEiYt] = MScxmnA[zIS3eO7YtF4][IeJuGHh[zIS3eO7YtF4] - 1 - UwEiYt] + 48;
                UwEiYt++;
            }
        }
    }
    {
        zIS3eO7YtF4 = (241 - 241);
        for (; FgJNT4aijyQw > zIS3eO7YtF4;) {
            {
                UwEiYt = 0;
                for (; !('0' != ymbDVUBgZN[zIS3eO7YtF4][UwEiYt]);) {
                    UwEiYt++;
                }
            }
            for (; UwEiYt < IeJuGHh[zIS3eO7YtF4]; UwEiYt++)
                printf ("%c", ymbDVUBgZN[zIS3eO7YtF4][UwEiYt]);
            zIS3eO7YtF4++;
        }
    }
}

