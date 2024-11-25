int L97GdlJH, E3IMCjNeRZOL, l0qpRl [(1078 - 978)], d0PQhmxGiCFJ [(961 - 861)], DYiVqH4dR [(386 - 186)];

void  dWLOires (int I7cXdV9 [], int BVIFZnJ) {
    int tlt7gqA2Kv;
    for (tlt7gqA2Kv = (248 - 248); BVIFZnJ > tlt7gqA2Kv; tlt7gqA2Kv = tlt7gqA2Kv + 1)
        scanf ("%d", &I7cXdV9[tlt7gqA2Kv]);
}

void  sort (int fJ7fLq1TCR [], int Sbml9vJ) {
    int tlt7gqA2Kv;
    int G7Lq9IASavl6;
    int CPg4qx6zGhSa;
    for (tlt7gqA2Kv = (644 - 644); tlt7gqA2Kv < Sbml9vJ -(966 - 965); tlt7gqA2Kv = tlt7gqA2Kv + 1)
        for (G7Lq9IASavl6 = (710 - 710); G7Lq9IASavl6 < Sbml9vJ -(871 - 870) - tlt7gqA2Kv; G7Lq9IASavl6 = G7Lq9IASavl6 +1)
            if (fJ7fLq1TCR[G7Lq9IASavl6 +(910 - 909)] < fJ7fLq1TCR[G7Lq9IASavl6]) {
                CPg4qx6zGhSa = fJ7fLq1TCR[G7Lq9IASavl6];
                fJ7fLq1TCR[G7Lq9IASavl6] = fJ7fLq1TCR[G7Lq9IASavl6 +(515 - 514)];
                fJ7fLq1TCR[G7Lq9IASavl6 +(475 - 474)] = CPg4qx6zGhSa;
            };
}

void  NNyY9fh6 (int odXqj9DTf [], int Te1G98pbz []) {
    int tlt7gqA2Kv;
    for (tlt7gqA2Kv = (867 - 867); L97GdlJH > tlt7gqA2Kv; tlt7gqA2Kv = tlt7gqA2Kv + 1)
        DYiVqH4dR[tlt7gqA2Kv] = odXqj9DTf[tlt7gqA2Kv];
    {
        tlt7gqA2Kv = L97GdlJH;
        while (tlt7gqA2Kv < L97GdlJH +E3IMCjNeRZOL) {
            DYiVqH4dR[tlt7gqA2Kv] = Te1G98pbz[tlt7gqA2Kv - L97GdlJH];
            tlt7gqA2Kv = tlt7gqA2Kv + 1;
        };
    };
}

void  KOZcASQ (int v5aVQT [], int fPn7pK24Z) {
    int tlt7gqA2Kv;
    printf ("%d", v5aVQT[0]);
    for (tlt7gqA2Kv = 1; tlt7gqA2Kv < fPn7pK24Z; tlt7gqA2Kv = tlt7gqA2Kv + 1)
        printf (" %d", v5aVQT[tlt7gqA2Kv]);
}

void  main () {
    scanf ("%d %d", &L97GdlJH, &E3IMCjNeRZOL);
    dWLOires (l0qpRl, L97GdlJH);
    dWLOires (d0PQhmxGiCFJ, E3IMCjNeRZOL);
    sort (l0qpRl, L97GdlJH);
    sort (d0PQhmxGiCFJ, E3IMCjNeRZOL);
    KOZcASQ (DYiVqH4dR, L97GdlJH +E3IMCjNeRZOL);
    NNyY9fh6 (l0qpRl, d0PQhmxGiCFJ);
}

