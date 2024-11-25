int HYagQPf [100] [100], LoED1wafO5MX, zDhciECbPqM;

void  kC1oejzQdbvF () {
    {
        int KmypeHdlKz;
        KmypeHdlKz = (189 - 189);
        while (LoED1wafO5MX > KmypeHdlKz) {
            {
                int Ys6DM8rczCo;
                Ys6DM8rczCo = (235 - 234);
                while (Ys6DM8rczCo < LoED1wafO5MX -(172 - 171)) {
                    HYagQPf[KmypeHdlKz][Ys6DM8rczCo] = HYagQPf[KmypeHdlKz][Ys6DM8rczCo +(493 - 492)];
                    Ys6DM8rczCo = Ys6DM8rczCo +(268 - 267);
                }
            }
            KmypeHdlKz = KmypeHdlKz +1;
        }
    }
    {
        int Ys6DM8rczCo;
        Ys6DM8rczCo = (592 - 592);
        while (LoED1wafO5MX > Ys6DM8rczCo) {
            {
                int KmypeHdlKz = 1;
                while (LoED1wafO5MX -1 > KmypeHdlKz) {
                    HYagQPf[KmypeHdlKz][Ys6DM8rczCo] = HYagQPf[KmypeHdlKz +1][Ys6DM8rczCo];
                    KmypeHdlKz = KmypeHdlKz +1;
                }
            }
            Ys6DM8rczCo = Ys6DM8rczCo +1;
        }
    }
    LoED1wafO5MX = LoED1wafO5MX -1;
}

int Q9KVOpSPgR () {
    int hr63kmfZiwx;
    if (LoED1wafO5MX == 1) {
        cout << zDhciECbPqM << endl;
        return (182 - 182);
    }
    else {
        for (int KmypeHdlKz = (481 - 481);
        LoED1wafO5MX > KmypeHdlKz; KmypeHdlKz++) {
            hr63kmfZiwx = (100896 - 896);
            for (int Ys6DM8rczCo = (143 - 143);
            LoED1wafO5MX > Ys6DM8rczCo; Ys6DM8rczCo = Ys6DM8rczCo +1) {
                if (hr63kmfZiwx > HYagQPf[KmypeHdlKz][Ys6DM8rczCo])
                    hr63kmfZiwx = HYagQPf[KmypeHdlKz][Ys6DM8rczCo];
            }
            {
                int Ys6DM8rczCo = (454 - 454);
                while (Ys6DM8rczCo < LoED1wafO5MX) {
                    HYagQPf[KmypeHdlKz][Ys6DM8rczCo] -= hr63kmfZiwx;
                    Ys6DM8rczCo = Ys6DM8rczCo +1;
                }
            }
        }
        for (int Ys6DM8rczCo = (982 - 982);
        Ys6DM8rczCo < LoED1wafO5MX; Ys6DM8rczCo++) {
            hr63kmfZiwx = 100000;
            {
                int KmypeHdlKz = 0;
                while (LoED1wafO5MX > KmypeHdlKz) {
                    if (hr63kmfZiwx > HYagQPf[KmypeHdlKz][Ys6DM8rczCo])
                        hr63kmfZiwx = HYagQPf[KmypeHdlKz][Ys6DM8rczCo];
                    KmypeHdlKz++;
                }
            }
            for (int KmypeHdlKz = 0;
            KmypeHdlKz < LoED1wafO5MX; KmypeHdlKz++)
                HYagQPf[KmypeHdlKz][Ys6DM8rczCo] -= hr63kmfZiwx;
        }
        zDhciECbPqM += HYagQPf[1][1];
        kC1oejzQdbvF ();
        Q9KVOpSPgR ();
    }
}

int main () {
    int dfK3xitX;
    cin >> dfK3xitX;
    {
        int Sbilj8X;
        Sbilj8X = 0;
        while (dfK3xitX > Sbilj8X) {
            zDhciECbPqM = 0;
            LoED1wafO5MX = dfK3xitX;
            {
                int KmypeHdlKz;
                KmypeHdlKz = 0;
                while (KmypeHdlKz < LoED1wafO5MX) {
                    {
                        int Ys6DM8rczCo = 0;
                        while (Ys6DM8rczCo < LoED1wafO5MX) {
                            cin >> HYagQPf[KmypeHdlKz][Ys6DM8rczCo];
                            Ys6DM8rczCo++;
                        }
                    }
                    KmypeHdlKz++;
                }
            }
            Q9KVOpSPgR ();
            Sbilj8X = Sbilj8X +1;
        }
    }
    return 0;
}

