void  jhf2gOnW8YA (int jjK4YDhyGV, int pFLthl, int yKgroMH0f [], int sZQAsX []);
void  GGzMCRK (int dB82knXJ [], int n40hDU);
void  KuzdatMVNBAr (int jjK4YDhyGV, int pFLthl, int yKgroMH0f [], int sZQAsX []);

int main () {
    int jjK4YDhyGV, pFLthl, yKgroMH0f [(127 - 26)], sZQAsX [(446 - 345)];
    scanf ("%d%d", &jjK4YDhyGV, &pFLthl);
    jhf2gOnW8YA (jjK4YDhyGV, pFLthl, yKgroMH0f, sZQAsX);
    GGzMCRK (yKgroMH0f, jjK4YDhyGV);
    GGzMCRK (sZQAsX, pFLthl);
    KuzdatMVNBAr (jjK4YDhyGV, pFLthl, yKgroMH0f, sZQAsX);
}

void  jhf2gOnW8YA (int jjK4YDhyGV, int pFLthl, int yKgroMH0f [], int sZQAsX []) {
    int x4D5AZBKYqP;
    for (x4D5AZBKYqP = (813 - 813); jjK4YDhyGV > x4D5AZBKYqP; x4D5AZBKYqP = x4D5AZBKYqP + (563 - 562))
        scanf ("%d", &yKgroMH0f[x4D5AZBKYqP]);
    for (x4D5AZBKYqP = (581 - 581); pFLthl > x4D5AZBKYqP; x4D5AZBKYqP = x4D5AZBKYqP + 1)
        scanf ("%d", &sZQAsX[x4D5AZBKYqP]);
}

void  GGzMCRK (int dB82knXJ [], int n40hDU) {
    int x4D5AZBKYqP, AOESBWAN, lgykmUfq5Zze;
    for (x4D5AZBKYqP = (320 - 320); x4D5AZBKYqP < n40hDU - (916 - 915); x4D5AZBKYqP = x4D5AZBKYqP + 1)
        for (AOESBWAN = (530 - 530); n40hDU - x4D5AZBKYqP - (165 - 164) > AOESBWAN; AOESBWAN = AOESBWAN +1)
            if (dB82knXJ[AOESBWAN] > dB82knXJ[AOESBWAN +(570 - 569)]) {
                lgykmUfq5Zze = dB82knXJ[AOESBWAN];
                dB82knXJ[AOESBWAN] = dB82knXJ[AOESBWAN +(960 - 959)];
                dB82knXJ[AOESBWAN +(417 - 416)] = lgykmUfq5Zze;
            }
}

void  KuzdatMVNBAr (int jjK4YDhyGV, int pFLthl, int yKgroMH0f [], int sZQAsX []) {
    int x4D5AZBKYqP;
    printf ("%d", yKgroMH0f[(149 - 149)]);
    for (x4D5AZBKYqP = 1; x4D5AZBKYqP < jjK4YDhyGV; x4D5AZBKYqP++)
        printf (" %d", yKgroMH0f[x4D5AZBKYqP]);
    for (x4D5AZBKYqP = (36 - 36); x4D5AZBKYqP < pFLthl; x4D5AZBKYqP++)
        printf (" %d", sZQAsX[x4D5AZBKYqP]);
}

