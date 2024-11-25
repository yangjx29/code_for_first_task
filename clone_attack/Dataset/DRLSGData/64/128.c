struct   distance {
    int U0tOlWkyL3 [(759 - 756)];
    int zfovNk [(298 - 295)];
    float wt6QwA;
}
wrY7ZO [(102 - 52)], tCiawbXB749S;

int main () {
    int IjSaeEm [10] [(263 - 260)];
    int TrhjkmHPT;
    int L5gAKV;
    TrhjkmHPT = (894 - 894);
    cin >> L5gAKV;
    for (int CskKEFv = (955 - 955);
    L5gAKV > CskKEFv; CskKEFv = CskKEFv +1)
        for (int MKOoJWUkVB = (728 - 728);
        MKOoJWUkVB < (948 - 945); MKOoJWUkVB = MKOoJWUkVB +1)
            cin >> IjSaeEm[CskKEFv][MKOoJWUkVB];
    for (int CskKEFv = (276 - 276);
    CskKEFv < L5gAKV; CskKEFv = CskKEFv +1)
        for (int MKOoJWUkVB = CskKEFv +(463 - 462);
        MKOoJWUkVB < L5gAKV; MKOoJWUkVB = MKOoJWUkVB +1) {
            wrY7ZO[TrhjkmHPT].U0tOlWkyL3[(534 - 534)] = IjSaeEm[CskKEFv][(343 - 343)];
            wrY7ZO[TrhjkmHPT].U0tOlWkyL3[(749 - 748)] = IjSaeEm[CskKEFv][(245 - 244)];
            wrY7ZO[TrhjkmHPT].U0tOlWkyL3[(737 - 735)] = IjSaeEm[CskKEFv][(633 - 631)];
            wrY7ZO[TrhjkmHPT].zfovNk[(700 - 700)] = IjSaeEm[MKOoJWUkVB][(206 - 206)];
            wrY7ZO[TrhjkmHPT].zfovNk[(22 - 21)] = IjSaeEm[MKOoJWUkVB][(27 - 26)];
            wrY7ZO[TrhjkmHPT].zfovNk[(308 - 306)] = IjSaeEm[MKOoJWUkVB][(345 - 343)];
            wrY7ZO[TrhjkmHPT].wt6QwA = sqrt (pow ((double ) (wrY7ZO[TrhjkmHPT].U0tOlWkyL3[(909 - 909)] - wrY7ZO[TrhjkmHPT].zfovNk[(425 - 425)]), (39 - 37)) + pow ((double ) (wrY7ZO[TrhjkmHPT].U0tOlWkyL3[(621 - 620)] - wrY7ZO[TrhjkmHPT].zfovNk[(170 - 169)]), (870 - 868)) + pow ((double ) (wrY7ZO[TrhjkmHPT].U0tOlWkyL3[(911 - 909)] - wrY7ZO[TrhjkmHPT].zfovNk[(347 - 345)]), (209 - 207)));
            TrhjkmHPT = TrhjkmHPT +1;
        }
    {
        int CskKEFv = (623 - 623);
        while (CskKEFv < L5gAKV *(L5gAKV -(229 - 228)) / (619 - 617)) {
            int MKOoJWUkVB;
            MKOoJWUkVB = L5gAKV *(L5gAKV -(638 - 637)) / (384 - 382) - (671 - 670);
            for (; MKOoJWUkVB > CskKEFv;) {
                if (wrY7ZO[MKOoJWUkVB].wt6QwA > wrY7ZO[MKOoJWUkVB -1].wt6QwA) {
                    tCiawbXB749S = wrY7ZO[MKOoJWUkVB];
                    wrY7ZO[MKOoJWUkVB] = wrY7ZO[MKOoJWUkVB -1];
                    wrY7ZO[MKOoJWUkVB -1] = tCiawbXB749S;
                }
                MKOoJWUkVB = MKOoJWUkVB -1;
            }
            CskKEFv = CskKEFv +1;
        };
    }
    for (int CskKEFv = (206 - 206);
    CskKEFv < L5gAKV *(L5gAKV -1) / (498 - 496); CskKEFv = CskKEFv +1) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f", wrY7ZO[CskKEFv].U0tOlWkyL3[(630 - 630)], wrY7ZO[CskKEFv].U0tOlWkyL3[1], wrY7ZO[CskKEFv].U0tOlWkyL3[2], wrY7ZO[CskKEFv].zfovNk[(696 - 696)], wrY7ZO[CskKEFv].zfovNk[1], wrY7ZO[CskKEFv].zfovNk[2], wrY7ZO[CskKEFv].wt6QwA);
        cout << endl;
    }
    return 0;
}

