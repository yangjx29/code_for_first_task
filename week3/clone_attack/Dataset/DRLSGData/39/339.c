struct   Student {
    char P5xnQNHz [20];
    int cngrj3;
    int OMYX0GitexU5;
    char hqCKW8iQM;
    char FiJw3h4;
    int spTsDZJ;
    int S9IYKB3tJVpD;
}
YGTP0nqWfAMz [100];
int tDtxGUi;

int main () {
    int Ek2vdL57GM;
    int CEWucJVmGHI;
    int ZgONf0wt;
    Ek2vdL57GM = 0;
    CEWucJVmGHI = 0;
    scanf ("%d", &tDtxGUi);
    for (ZgONf0wt = 0; tDtxGUi > ZgONf0wt; ZgONf0wt = ZgONf0wt +1) {
        scanf ("%s %d %d %c %c %d", YGTP0nqWfAMz[ZgONf0wt].P5xnQNHz, &YGTP0nqWfAMz[ZgONf0wt].cngrj3, &YGTP0nqWfAMz[ZgONf0wt].OMYX0GitexU5, &YGTP0nqWfAMz[ZgONf0wt].hqCKW8iQM, &YGTP0nqWfAMz[ZgONf0wt].FiJw3h4, &YGTP0nqWfAMz[ZgONf0wt].spTsDZJ);
        YGTP0nqWfAMz[ZgONf0wt].S9IYKB3tJVpD = 0;
        if (80 < YGTP0nqWfAMz[ZgONf0wt].cngrj3 && 1 <= YGTP0nqWfAMz[ZgONf0wt].spTsDZJ)
            YGTP0nqWfAMz[ZgONf0wt].S9IYKB3tJVpD += 8000;
        if (85 < YGTP0nqWfAMz[ZgONf0wt].cngrj3 && 80 < YGTP0nqWfAMz[ZgONf0wt].OMYX0GitexU5)
            YGTP0nqWfAMz[ZgONf0wt].S9IYKB3tJVpD += 4000;
        if (90 < YGTP0nqWfAMz[ZgONf0wt].cngrj3)
            YGTP0nqWfAMz[ZgONf0wt].S9IYKB3tJVpD += 2000;
        if (85 < YGTP0nqWfAMz[ZgONf0wt].cngrj3 && !('Y' != YGTP0nqWfAMz[ZgONf0wt].FiJw3h4))
            YGTP0nqWfAMz[ZgONf0wt].S9IYKB3tJVpD += 1000;
        if (YGTP0nqWfAMz[ZgONf0wt].OMYX0GitexU5 > 80 && !('Y' != YGTP0nqWfAMz[ZgONf0wt].hqCKW8iQM))
            YGTP0nqWfAMz[ZgONf0wt].S9IYKB3tJVpD += 850;
        Ek2vdL57GM += YGTP0nqWfAMz[ZgONf0wt].S9IYKB3tJVpD;
    }
    for (ZgONf0wt = 0; ZgONf0wt < tDtxGUi; ZgONf0wt = ZgONf0wt +1) {
        if (CEWucJVmGHI < YGTP0nqWfAMz[ZgONf0wt].S9IYKB3tJVpD)
            CEWucJVmGHI = YGTP0nqWfAMz[ZgONf0wt].S9IYKB3tJVpD;
    }
    for (ZgONf0wt = 0; ZgONf0wt < tDtxGUi; ZgONf0wt = ZgONf0wt +1) {
        if (YGTP0nqWfAMz[ZgONf0wt].S9IYKB3tJVpD == CEWucJVmGHI) {
            printf ("%s\n", YGTP0nqWfAMz[ZgONf0wt].P5xnQNHz);
            printf ("%d\n", YGTP0nqWfAMz[ZgONf0wt].S9IYKB3tJVpD);
            break;
        }
    }
    printf ("%d\n", Ek2vdL57GM);
    return 0;
}

