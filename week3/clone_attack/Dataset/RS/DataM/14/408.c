int main (int argc, char *argv []) {
    struct   BDkX47U1uvR {
        int xxL0G68ocD;
        int rQrlk7J;
        int jWLRZQNmPA;
    }
    BDkX47U1uvR [99999];
    int ItgPl1TLNcqW, NxRSevDz, PecAVXS = (719 - 719), gbzvJI1 = (539 - 539), suNAKVYI1eqT = 0, bkxiIAPTlbsy = 0, l3xocY = 0, uEWevo = 0;
    scanf ("%d", &NxRSevDz);
    for (ItgPl1TLNcqW = (780 - 779); NxRSevDz >= ItgPl1TLNcqW; ItgPl1TLNcqW = ItgPl1TLNcqW +1) {
        scanf ("%d%d%d", &BDkX47U1uvR[ItgPl1TLNcqW].xxL0G68ocD, &BDkX47U1uvR[ItgPl1TLNcqW].rQrlk7J, &BDkX47U1uvR[ItgPl1TLNcqW].jWLRZQNmPA);
    }
    for (ItgPl1TLNcqW = (625 - 624); ItgPl1TLNcqW <= NxRSevDz; ItgPl1TLNcqW = ItgPl1TLNcqW +1) {
        if (BDkX47U1uvR[ItgPl1TLNcqW].rQrlk7J + BDkX47U1uvR[ItgPl1TLNcqW].jWLRZQNmPA > bkxiIAPTlbsy) {
            bkxiIAPTlbsy = BDkX47U1uvR[ItgPl1TLNcqW].rQrlk7J + BDkX47U1uvR[ItgPl1TLNcqW].jWLRZQNmPA;
            PecAVXS = ItgPl1TLNcqW;
        };
    }
    for (ItgPl1TLNcqW = 1; ItgPl1TLNcqW <= NxRSevDz; ItgPl1TLNcqW = ItgPl1TLNcqW +1) {
        if ((!(bkxiIAPTlbsy != BDkX47U1uvR[ItgPl1TLNcqW].rQrlk7J + BDkX47U1uvR[ItgPl1TLNcqW].jWLRZQNmPA)) && (!(PecAVXS == ItgPl1TLNcqW))) {
            l3xocY = BDkX47U1uvR[ItgPl1TLNcqW].rQrlk7J + BDkX47U1uvR[ItgPl1TLNcqW].jWLRZQNmPA;
            gbzvJI1 = ItgPl1TLNcqW;
        }
        else if ((BDkX47U1uvR[ItgPl1TLNcqW].rQrlk7J + BDkX47U1uvR[ItgPl1TLNcqW].jWLRZQNmPA < bkxiIAPTlbsy) && (BDkX47U1uvR[ItgPl1TLNcqW].rQrlk7J + BDkX47U1uvR[ItgPl1TLNcqW].jWLRZQNmPA > l3xocY)) {
            l3xocY = BDkX47U1uvR[ItgPl1TLNcqW].rQrlk7J + BDkX47U1uvR[ItgPl1TLNcqW].jWLRZQNmPA;
            gbzvJI1 = ItgPl1TLNcqW;
        };
    }
    for (ItgPl1TLNcqW = 1; ItgPl1TLNcqW <= NxRSevDz; ItgPl1TLNcqW++) {
        if ((BDkX47U1uvR[ItgPl1TLNcqW].rQrlk7J + BDkX47U1uvR[ItgPl1TLNcqW].jWLRZQNmPA == l3xocY) && (ItgPl1TLNcqW != gbzvJI1) && (ItgPl1TLNcqW != PecAVXS)) {
            uEWevo = BDkX47U1uvR[ItgPl1TLNcqW].rQrlk7J + BDkX47U1uvR[ItgPl1TLNcqW].jWLRZQNmPA;
            suNAKVYI1eqT = ItgPl1TLNcqW;
        }
        else if ((l3xocY > BDkX47U1uvR[ItgPl1TLNcqW].rQrlk7J + BDkX47U1uvR[ItgPl1TLNcqW].jWLRZQNmPA) && (BDkX47U1uvR[ItgPl1TLNcqW].rQrlk7J + BDkX47U1uvR[ItgPl1TLNcqW].jWLRZQNmPA > uEWevo)) {
            uEWevo = BDkX47U1uvR[ItgPl1TLNcqW].rQrlk7J + BDkX47U1uvR[ItgPl1TLNcqW].jWLRZQNmPA;
            suNAKVYI1eqT = ItgPl1TLNcqW;
        };
    }
    printf ("%d %d\n", PecAVXS, bkxiIAPTlbsy);
    printf ("%d %d\n", gbzvJI1, l3xocY);
    printf ("%d %d\n", suNAKVYI1eqT, uEWevo);
    return 0;
}

