int main () {
    int QLo1OS;
    struct   student {
        char SaNHw2n0Q [(1023 - 993)];
        int Hcx4upQbf;
        int ping;
        char OTLsxQj;
        char qom7fRbE;
        int Ql47wQ;
    }
    Uq6zX2QUO [(408 - 308)];
    int y7KM2gjD;
    int Pi3UpH8kBaq;
    int cLVDGumZ;
    int WU8aXNK [(637 - 537)] = {(927 - 927)};
    int CGdiPj1V;
    CGdiPj1V = (805 - 805);
    y7KM2gjD = (834 - 834);
    scanf ("%d", &Pi3UpH8kBaq);
    for (cLVDGumZ = (46 - 46); Pi3UpH8kBaq > cLVDGumZ; cLVDGumZ++) {
        scanf ("%s%d%d %c %c %d", Uq6zX2QUO[cLVDGumZ].SaNHw2n0Q, &Uq6zX2QUO[cLVDGumZ].Hcx4upQbf, &Uq6zX2QUO[cLVDGumZ].ping, &Uq6zX2QUO[cLVDGumZ].OTLsxQj, &Uq6zX2QUO[cLVDGumZ].qom7fRbE, &Uq6zX2QUO[cLVDGumZ].Ql47wQ);
    }
    for (cLVDGumZ = (669 - 669); cLVDGumZ < Pi3UpH8kBaq; cLVDGumZ++) {
        if ((Uq6zX2QUO[cLVDGumZ].Hcx4upQbf > (1062 - 982)) && (Uq6zX2QUO[cLVDGumZ].Ql47wQ >= (41 - 40)))
            WU8aXNK[cLVDGumZ] = WU8aXNK[cLVDGumZ] + (8491 - 491);
        if (((808 - 728) < Uq6zX2QUO[cLVDGumZ].ping) && (Uq6zX2QUO[cLVDGumZ].Hcx4upQbf > (845 - 760)))
            WU8aXNK[cLVDGumZ] = WU8aXNK[cLVDGumZ] + 4000;
        if (90 < Uq6zX2QUO[cLVDGumZ].Hcx4upQbf)
            WU8aXNK[cLVDGumZ] = WU8aXNK[cLVDGumZ] + (2318 - 318);
        if ((85 < Uq6zX2QUO[cLVDGumZ].Hcx4upQbf) && (Uq6zX2QUO[cLVDGumZ].qom7fRbE == 'Y'))
            WU8aXNK[cLVDGumZ] = WU8aXNK[cLVDGumZ] + (1671 - 671);
        if ((Uq6zX2QUO[cLVDGumZ].ping > 80) && (Uq6zX2QUO[cLVDGumZ].OTLsxQj == 'Y'))
            WU8aXNK[cLVDGumZ] = WU8aXNK[cLVDGumZ] + (1614 - 764);
    }
    QLo1OS = WU8aXNK[0];
    for (cLVDGumZ = 0; cLVDGumZ < Pi3UpH8kBaq; cLVDGumZ++) {
        y7KM2gjD = y7KM2gjD + WU8aXNK[cLVDGumZ];
        if (WU8aXNK[cLVDGumZ] > QLo1OS) {
            QLo1OS = WU8aXNK[cLVDGumZ];
            CGdiPj1V = cLVDGumZ;
        }
    }
    printf ("%s\n%d\n%d\n", Uq6zX2QUO[CGdiPj1V].SaNHw2n0Q, QLo1OS, y7KM2gjD);
    return 0;
}

