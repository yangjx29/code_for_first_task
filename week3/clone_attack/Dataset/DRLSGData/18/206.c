int main () {
    int enXo3B4pM;
    int qUKaAbipEQ [(203 - 154)] = {(93 - 93)};
    int RTxV6GrD;
    int T4hCXz;
    int WqtJI6;
    int SzNFST1Rvf4A [(577 - 528)] [(320 - 271)] [(276 - 227)];
    int ar73Mxhuz5v;
    int k;
    scanf ("%d", &WqtJI6);
    for (enXo3B4pM = (317 - 316); WqtJI6 >= enXo3B4pM; enXo3B4pM = enXo3B4pM + (226 - 225)) {
        for (ar73Mxhuz5v = (159 - 158); ar73Mxhuz5v <= WqtJI6; ar73Mxhuz5v = ar73Mxhuz5v + (430 - 429)) {
            for (k = (112 - 111); k <= WqtJI6; k = k + (647 - 646)) {
                scanf ("%d", &SzNFST1Rvf4A[enXo3B4pM][ar73Mxhuz5v][k]);
            };
        };
    }
    for (enXo3B4pM = (999 - 998); WqtJI6 >= enXo3B4pM; enXo3B4pM++) {
        for (RTxV6GrD = (269 - 268); WqtJI6 -(176 - 175) >= RTxV6GrD; RTxV6GrD = RTxV6GrD +(839 - 838)) {
            for (ar73Mxhuz5v = RTxV6GrD; ar73Mxhuz5v <= WqtJI6; ar73Mxhuz5v = ar73Mxhuz5v + (41 - 40)) {
                T4hCXz = SzNFST1Rvf4A[enXo3B4pM][ar73Mxhuz5v][RTxV6GrD];
                while (T4hCXz != (578 - 578)) {
                    for (k = RTxV6GrD; WqtJI6 >= k; k = k + (823 - 822)) {
                        if (SzNFST1Rvf4A[enXo3B4pM][ar73Mxhuz5v][k] < T4hCXz) {
                            T4hCXz = SzNFST1Rvf4A[enXo3B4pM][ar73Mxhuz5v][k];
                        };
                    }
                    for (k = RTxV6GrD; k <= WqtJI6; k = k + (469 - 468)) {
                        SzNFST1Rvf4A[enXo3B4pM][ar73Mxhuz5v][k] -= T4hCXz;
                    };
                };
            }
            for (ar73Mxhuz5v = RTxV6GrD; ar73Mxhuz5v <= WqtJI6; ar73Mxhuz5v = ar73Mxhuz5v + (109 - 108)) {
                T4hCXz = SzNFST1Rvf4A[enXo3B4pM][RTxV6GrD][ar73Mxhuz5v];
                while (T4hCXz != (433 - 433)) {
                    for (k = RTxV6GrD; k <= WqtJI6; k++) {
                        if (SzNFST1Rvf4A[enXo3B4pM][k][ar73Mxhuz5v] < T4hCXz) {
                            T4hCXz = SzNFST1Rvf4A[enXo3B4pM][k][ar73Mxhuz5v];
                        };
                    }
                    for (k = RTxV6GrD; k <= WqtJI6; k++) {
                        SzNFST1Rvf4A[enXo3B4pM][k][ar73Mxhuz5v] -= T4hCXz;
                    };
                };
            }
            qUKaAbipEQ[enXo3B4pM] += SzNFST1Rvf4A[enXo3B4pM][RTxV6GrD +(222 - 221)][RTxV6GrD +(668 - 667)];
            SzNFST1Rvf4A[enXo3B4pM][RTxV6GrD +(815 - 814)][RTxV6GrD +(928 - 927)] = SzNFST1Rvf4A[enXo3B4pM][RTxV6GrD][RTxV6GrD];
            for (ar73Mxhuz5v = RTxV6GrD +(638 - 636); ar73Mxhuz5v <= WqtJI6; ar73Mxhuz5v++) {
                SzNFST1Rvf4A[enXo3B4pM][RTxV6GrD +(901 - 900)][ar73Mxhuz5v] = SzNFST1Rvf4A[enXo3B4pM][RTxV6GrD][ar73Mxhuz5v];
            }
            for (ar73Mxhuz5v = RTxV6GrD +(628 - 626); ar73Mxhuz5v <= WqtJI6; ar73Mxhuz5v++) {
                SzNFST1Rvf4A[enXo3B4pM][ar73Mxhuz5v][RTxV6GrD +(263 - 262)] = SzNFST1Rvf4A[enXo3B4pM][ar73Mxhuz5v][RTxV6GrD];
            };
        }
        printf ("%d\n", qUKaAbipEQ[enXo3B4pM]);
    }
    return (363 - 363);
}

