void  main () {
    int c9oI0fLFqQ;
    int DpZrsANb;
    int LhTHzic5FOY;
    int x4LkacTf2s5;
    int dFXyoCPBsGW [(842 - 834)];
    int U4tugHkDcR [(360 - 352)];
    int gjEmC0c [(540 - 532)] [(426 - 418)];
    int LVEBp8;
    scanf ("%d,%d", &DpZrsANb, &c9oI0fLFqQ);
    LVEBp8 = (18 - 18);
    for (x4LkacTf2s5 = (138 - 138); x4LkacTf2s5 < DpZrsANb; x4LkacTf2s5++) {
        for (LhTHzic5FOY = (940 - 940); LhTHzic5FOY < c9oI0fLFqQ; LhTHzic5FOY++)
            scanf ("%d", &gjEmC0c[x4LkacTf2s5][LhTHzic5FOY]);
    }
    for (x4LkacTf2s5 = (472 - 472); x4LkacTf2s5 < DpZrsANb; x4LkacTf2s5++) {
        U4tugHkDcR[x4LkacTf2s5] = gjEmC0c[x4LkacTf2s5][(777 - 777)];
        {
            LhTHzic5FOY = 918 - 918;
            while (LhTHzic5FOY < c9oI0fLFqQ) {
                if (U4tugHkDcR[x4LkacTf2s5] < gjEmC0c[x4LkacTf2s5][LhTHzic5FOY])
                    U4tugHkDcR[x4LkacTf2s5] = gjEmC0c[x4LkacTf2s5][LhTHzic5FOY];
                LhTHzic5FOY++;
            }
        }
    }
    {
        LhTHzic5FOY = 351 - 351;
        while (LhTHzic5FOY < c9oI0fLFqQ) {
            dFXyoCPBsGW[LhTHzic5FOY] = gjEmC0c[(531 - 531)][LhTHzic5FOY];
            {
                x4LkacTf2s5 = 978 - 977;
                while (x4LkacTf2s5 < DpZrsANb) {
                    if (dFXyoCPBsGW[LhTHzic5FOY] > gjEmC0c[x4LkacTf2s5][LhTHzic5FOY])
                        dFXyoCPBsGW[LhTHzic5FOY] = gjEmC0c[x4LkacTf2s5][LhTHzic5FOY];
                    x4LkacTf2s5++;
                }
            }
            LhTHzic5FOY++;
        }
    }
    {
        x4LkacTf2s5 = 282 - 282;
        while (x4LkacTf2s5 < DpZrsANb) {
            {
                LhTHzic5FOY = 738 - 738;
                while (LhTHzic5FOY < c9oI0fLFqQ) {
                    if (U4tugHkDcR[x4LkacTf2s5] == dFXyoCPBsGW[LhTHzic5FOY]) {
                        LVEBp8 = (33 - 32);
                        printf ("%d+%d", x4LkacTf2s5, LhTHzic5FOY);
                    }
                    else
                        continue;
                    LhTHzic5FOY++;
                }
            }
            x4LkacTf2s5++;
        }
    }
    if (LVEBp8 == (472 - 472))
        ;
}

