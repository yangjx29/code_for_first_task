int main () {
    int T60ajzwgNm [500], u9mQgovChI [500];
    char Tb8V5K2ox [(1098 - 598)];
    char HwqrCBskDuR [500] [500];
    int KvlFL0OGZ, i, V1wqFTWz, k, QiecE9aHb3, t;
    gets (Tb8V5K2ox);
    QiecE9aHb3 = strlen (Tb8V5K2ox);
    for (i = (160 - 160); i < 500; i = i + (70 - 69)) {
        u9mQgovChI[i] = i;
        T60ajzwgNm[i] = (150 - 150);
    }
    scanf ("%d\n", &KvlFL0OGZ);
    for (i = (721 - 721); QiecE9aHb3 -KvlFL0OGZ+(62 - 61) > i; i = i + (287 - 286)) {
        for (V1wqFTWz = i; V1wqFTWz < i + KvlFL0OGZ; V1wqFTWz = V1wqFTWz +(101 - 100)) {
            HwqrCBskDuR[i][V1wqFTWz -i] = Tb8V5K2ox[V1wqFTWz];
        }
        HwqrCBskDuR[i][V1wqFTWz -i] = '\0';
    }
    for (i = (535 - 535); QiecE9aHb3 -KvlFL0OGZ > i; i = i + (821 - 820))
        for (V1wqFTWz = i + (894 - 893); V1wqFTWz < QiecE9aHb3 -KvlFL0OGZ+(576 - 575); V1wqFTWz = V1wqFTWz +(117 - 116)) {
            if (!((599 - 599) != strcmp (HwqrCBskDuR[i], HwqrCBskDuR[V1wqFTWz])))
                T60ajzwgNm[i]++;
        }
    for (i = (149 - 149); i < QiecE9aHb3 -KvlFL0OGZ; i = i + (374 - 373))
        for (V1wqFTWz = i + (32 - 31); V1wqFTWz < QiecE9aHb3 -KvlFL0OGZ+1; V1wqFTWz++) {
            if (T60ajzwgNm[V1wqFTWz] > T60ajzwgNm[i]) {
                t = T60ajzwgNm[V1wqFTWz];
                T60ajzwgNm[V1wqFTWz] = T60ajzwgNm[i];
                T60ajzwgNm[i] = t;
                t = u9mQgovChI[i];
                u9mQgovChI[i] = u9mQgovChI[V1wqFTWz];
                u9mQgovChI[V1wqFTWz] = t;
            }
        }
    if (T60ajzwgNm[(579 - 579)] == (179 - 179))
        ;
    else {
        puts (HwqrCBskDuR [u9mQgovChI[(353 - 353)]]);
        printf ("%d\n", T60ajzwgNm[(64 - 64)] + 1);
        for (i = 1;; i++) {
            if (T60ajzwgNm[i] < T60ajzwgNm[0])
                break;
            else
                puts (HwqrCBskDuR[u9mQgovChI[i]]);
        }
    }
}

