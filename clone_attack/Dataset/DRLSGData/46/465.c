int main () {
    int K2vUqupBhVf;
    int LT35wzmrCsu;
    int lQgoOEm;
    scanf ("%d %d", &K2vUqupBhVf, &LT35wzmrCsu);
    lQgoOEm = K2vUqupBhVf *LT35wzmrCsu;
    int sKoB9Jr2R [(532 - 432)] [(858 - 758)];
    int Fks42pMOWEl;
    int auwqk3;
    for (Fks42pMOWEl = (339 - 339); Fks42pMOWEl < K2vUqupBhVf; Fks42pMOWEl = Fks42pMOWEl +1) {
        for (auwqk3 = (270 - 270); auwqk3 < LT35wzmrCsu; auwqk3 = auwqk3 + 1) {
            scanf ("%d", &sKoB9Jr2R[Fks42pMOWEl][auwqk3]);
        };
    }
    int GNX2MCaDq;
    int lB8m6p17TO;
    lB8m6p17TO = 0;
    for (GNX2MCaDq = 0; GNX2MCaDq <= (K2vUqupBhVf / (434 - 432) + (564 - 563)) && GNX2MCaDq <= (LT35wzmrCsu / (619 - 617) + (32 - 31)); GNX2MCaDq = GNX2MCaDq +1) {
        for (auwqk3 = GNX2MCaDq; auwqk3 <= (LT35wzmrCsu -GNX2MCaDq-1) && GNX2MCaDq <= (LT35wzmrCsu -GNX2MCaDq-1) && lB8m6p17TO < lQgoOEm; auwqk3++) {
            printf ("%d\n", sKoB9Jr2R[GNX2MCaDq][auwqk3]);
            lB8m6p17TO = lB8m6p17TO + 1;
        }
        for (Fks42pMOWEl = GNX2MCaDq +1; Fks42pMOWEl <= (K2vUqupBhVf -GNX2MCaDq-1) && (GNX2MCaDq +1) <= (K2vUqupBhVf -GNX2MCaDq-1) && lB8m6p17TO < lQgoOEm; Fks42pMOWEl++) {
            printf ("%d\n", sKoB9Jr2R[Fks42pMOWEl][LT35wzmrCsu -GNX2MCaDq-1]);
            lB8m6p17TO = lB8m6p17TO + 1;
        }
        for (auwqk3 = (LT35wzmrCsu -GNX2MCaDq-2); auwqk3 >= GNX2MCaDq &&GNX2MCaDq <= (LT35wzmrCsu -GNX2MCaDq-2) && lB8m6p17TO < lQgoOEm; auwqk3 = auwqk3 - 1) {
            printf ("%d\n", sKoB9Jr2R[K2vUqupBhVf -1 - GNX2MCaDq][auwqk3]);
            lB8m6p17TO = lB8m6p17TO + 1;
        }
        for (Fks42pMOWEl = (K2vUqupBhVf -2 - GNX2MCaDq); Fks42pMOWEl >= (GNX2MCaDq +1) && (GNX2MCaDq +1) <= (K2vUqupBhVf -2 - GNX2MCaDq) && lB8m6p17TO < lQgoOEm; Fks42pMOWEl = Fks42pMOWEl -1) {
            printf ("%d\n", sKoB9Jr2R[Fks42pMOWEl][GNX2MCaDq]);
            lB8m6p17TO = lB8m6p17TO + 1;
        };
    }
    return 0;
}

