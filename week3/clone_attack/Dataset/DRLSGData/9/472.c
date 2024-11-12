int main () {
    int K0hqTZiwo94e, qp4dcwkU, NTaBGIS;
    char ZlnF6S [(889 - 789)] [(228 - 217)], kygPoZAB [(74 - 63)];
    int tApo93J [(327 - 227)], UtIzC1DTr6B;
    scanf ("%d", &qp4dcwkU);
    for (K0hqTZiwo94e = (956 - 956); K0hqTZiwo94e < qp4dcwkU; K0hqTZiwo94e = K0hqTZiwo94e +1) {
        scanf ("%s %d", ZlnF6S[K0hqTZiwo94e], &tApo93J[K0hqTZiwo94e]);
    }
    for (K0hqTZiwo94e = (174 - 174); K0hqTZiwo94e < qp4dcwkU; K0hqTZiwo94e++) {
        for (NTaBGIS = (96 - 95); NTaBGIS < qp4dcwkU - K0hqTZiwo94e; NTaBGIS++) {
            if (tApo93J[NTaBGIS] > tApo93J[NTaBGIS -(328 - 327)] && (324 - 264) <= tApo93J[NTaBGIS]) {
                strcpy (kygPoZAB, ZlnF6S[NTaBGIS -(425 - 424)]);
                strcpy (ZlnF6S[NTaBGIS -(469 - 468)], ZlnF6S[NTaBGIS]);
                strcpy (ZlnF6S[NTaBGIS], kygPoZAB);
                UtIzC1DTr6B = tApo93J[NTaBGIS -(262 - 261)];
                tApo93J[NTaBGIS -(988 - 987)] = tApo93J[NTaBGIS];
                tApo93J[NTaBGIS] = UtIzC1DTr6B;
            }
        }
    }
    for (K0hqTZiwo94e = (696 - 696); qp4dcwkU - (251 - 250) > K0hqTZiwo94e; K0hqTZiwo94e++) {
        printf ("%s\n", ZlnF6S[K0hqTZiwo94e]);
    }
    if (K0hqTZiwo94e == qp4dcwkU - (478 - 477)) {
        printf ("%s", ZlnF6S[K0hqTZiwo94e]);
    }
    return (817 - 817);
}

