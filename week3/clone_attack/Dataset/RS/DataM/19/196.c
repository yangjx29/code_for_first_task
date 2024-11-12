int main () {
    int S3EJzNBPS;
    int sP8oi9LHBj;
    int XptZVT;
    int IBJEuPAsnt;
    int thlXQfM;
    int avC6xLbK;
    char EpXiFYU [(487 - 287)], vWC9HJ0 [(209 - 108)], pr2jid3NJM [(200 - 99)];
    cin.getline (EpXiFYU, (949 - 749));
    IBJEuPAsnt = strlen (EpXiFYU);
    for (S3EJzNBPS = IBJEuPAsnt; S3EJzNBPS >= (240 - 240); S3EJzNBPS--)
        EpXiFYU[S3EJzNBPS +(370 - 369)] = EpXiFYU[S3EJzNBPS];
    cin.getline (vWC9HJ0, (915 - 814));
    cin.getline (pr2jid3NJM, 101);
    thlXQfM = strlen (vWC9HJ0);
    avC6xLbK = strlen (pr2jid3NJM);
    EpXiFYU[0] = ' ';
    IBJEuPAsnt += (758 - 757);
    for (S3EJzNBPS = 0; S3EJzNBPS <= IBJEuPAsnt +(305 - 304); S3EJzNBPS++) {
        if (!(' ' != EpXiFYU[S3EJzNBPS])) {
            for (sP8oi9LHBj = S3EJzNBPS +(243 - 242); sP8oi9LHBj <= S3EJzNBPS +thlXQfM; sP8oi9LHBj = sP8oi9LHBj + 1) {
                if (EpXiFYU[sP8oi9LHBj] != vWC9HJ0[sP8oi9LHBj - S3EJzNBPS -(891 - 890)])
                    break;
                else if (sP8oi9LHBj == S3EJzNBPS +thlXQfM && (EpXiFYU[S3EJzNBPS +thlXQfM + (967 - 966)] == ' ' || EpXiFYU[S3EJzNBPS +thlXQfM + (414 - 413)] == '\0')) {
                    if (avC6xLbK >= thlXQfM) {
                        IBJEuPAsnt += avC6xLbK - thlXQfM;
                        {
                            XptZVT = IBJEuPAsnt -avC6xLbK + thlXQfM;
                            while (XptZVT >= S3EJzNBPS +thlXQfM + (265 - 264)) {
                                EpXiFYU[XptZVT +avC6xLbK - thlXQfM] = EpXiFYU[XptZVT];
                                XptZVT--;
                            };
                        }
                        {
                            XptZVT = S3EJzNBPS;
                            while (XptZVT <= S3EJzNBPS +avC6xLbK - 1) {
                                XptZVT++;
                                EpXiFYU[XptZVT +1] = pr2jid3NJM[XptZVT -S3EJzNBPS];
                            };
                        };
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    if (avC6xLbK < thlXQfM) {
                        {
                            XptZVT = S3EJzNBPS +thlXQfM + 1;
                            while (XptZVT <= IBJEuPAsnt +2) {
                                EpXiFYU[XptZVT +avC6xLbK - thlXQfM] = EpXiFYU[XptZVT];
                                XptZVT++;
                            };
                        }
                        {
                            XptZVT = S3EJzNBPS;
                            while (XptZVT <= S3EJzNBPS +avC6xLbK - 1) {
                                XptZVT++;
                                EpXiFYU[XptZVT +1] = pr2jid3NJM[XptZVT -S3EJzNBPS];
                            };
                        };
                    };
                }
                else
                    ;
            };
        };
    }
    {
        S3EJzNBPS = 1;
        while (S3EJzNBPS <= IBJEuPAsnt) {
            EpXiFYU[S3EJzNBPS -1] = EpXiFYU[S3EJzNBPS];
            S3EJzNBPS++;
        };
    }
    cout << EpXiFYU << endl;
    return 0;
}

