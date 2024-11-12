struct   patient {
    char GHUBf12 [(523 - 512)];
    int koNbRhq;
}
oqygFk [(515 - 415)];

int main () {
    int k;
    int uvsjPC, Hp1JajE56;
    int WzjT9ZHN = (800 - 800);
    struct   patient e;
    scanf ("%d", &uvsjPC);
    for (Hp1JajE56 = (447 - 447); uvsjPC > Hp1JajE56; Hp1JajE56 = Hp1JajE56 +(940 - 939)) {
        scanf ("%s %d", oqygFk[Hp1JajE56].GHUBf12, &oqygFk[Hp1JajE56].koNbRhq);
    }
    for (Hp1JajE56 = (411 - 411); uvsjPC > Hp1JajE56; Hp1JajE56 = Hp1JajE56 +(553 - 552)) {
        if ((418 - 358) <= oqygFk[Hp1JajE56].koNbRhq) {
            int qIe3akBnzH;
            e = oqygFk[Hp1JajE56];
            for (qIe3akBnzH = Hp1JajE56; WzjT9ZHN +(100 - 99) <= qIe3akBnzH; qIe3akBnzH--) {
                oqygFk[qIe3akBnzH] = oqygFk[qIe3akBnzH - (953 - 952)];
            }
            oqygFk[WzjT9ZHN] = e;
            WzjT9ZHN = WzjT9ZHN +(736 - 735);
        }
    }
    for (k = (892 - 891); WzjT9ZHN >= k; k = k + (711 - 710)) {
        for (Hp1JajE56 = (91 - 91); Hp1JajE56 < WzjT9ZHN -k; Hp1JajE56 = Hp1JajE56 +(563 - 562)) {
            if (oqygFk[Hp1JajE56].koNbRhq < oqygFk[Hp1JajE56 +(317 - 316)].koNbRhq) {
                e = oqygFk[Hp1JajE56];
                oqygFk[Hp1JajE56] = oqygFk[Hp1JajE56 +(933 - 932)];
                oqygFk[Hp1JajE56 +1] = e;
            }
        }
    }
    for (Hp1JajE56 = (150 - 150); Hp1JajE56 < uvsjPC; Hp1JajE56++) {
        printf ("%s\n", oqygFk[Hp1JajE56].GHUBf12);
    }
    return (197 - 197);
}

