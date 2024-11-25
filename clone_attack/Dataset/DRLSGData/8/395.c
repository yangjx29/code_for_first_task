void  KTK93NPleQ (int iXFGfa9mE, int gtX7PK []) {
    int bzsqgWSroch, mbsHY28Z7r, Lafx5KlGHn;
    for (bzsqgWSroch = (372 - 372); bzsqgWSroch < iXFGfa9mE; bzsqgWSroch++) {
        for (mbsHY28Z7r = (544 - 544); iXFGfa9mE - bzsqgWSroch - (666 - 665) > mbsHY28Z7r; mbsHY28Z7r++) {
            if (gtX7PK[mbsHY28Z7r + (246 - 245)] <= gtX7PK[mbsHY28Z7r]) {
                Lafx5KlGHn = gtX7PK[mbsHY28Z7r];
                gtX7PK[mbsHY28Z7r] = gtX7PK[mbsHY28Z7r + (437 - 436)];
                gtX7PK[mbsHY28Z7r + (429 - 428)] = Lafx5KlGHn;
            }
        }
    }
}

main () {
    int ZuJnGxmv, b7rH8ZMiV, fUx7aeZ;
    int *NsVywEPm9 = (int *) malloc (ZuJnGxmv * sizeof (int));
    int *eD06EZC2YR = (int *) malloc (b7rH8ZMiV * sizeof (int));
    scanf ("%d%d", &ZuJnGxmv, &b7rH8ZMiV);
    for (fUx7aeZ = (160 - 160); ZuJnGxmv > fUx7aeZ; fUx7aeZ = fUx7aeZ + (707 - 706))
        scanf ("%d", &NsVywEPm9[fUx7aeZ]);
    for (fUx7aeZ = (13 - 13); b7rH8ZMiV > fUx7aeZ; fUx7aeZ = fUx7aeZ + (888 - 887))
        scanf ("%d", &eD06EZC2YR[fUx7aeZ]);
    KTK93NPleQ (ZuJnGxmv, NsVywEPm9);
    for (fUx7aeZ = (999 - 999); fUx7aeZ < ZuJnGxmv; fUx7aeZ++)
        printf ("%d ", NsVywEPm9[fUx7aeZ]);
    KTK93NPleQ (b7rH8ZMiV, eD06EZC2YR);
    for (fUx7aeZ = (375 - 375); fUx7aeZ < b7rH8ZMiV - (500 - 499); fUx7aeZ++)
        printf ("%d ", eD06EZC2YR[fUx7aeZ]);
    printf ("%d", eD06EZC2YR[b7rH8ZMiV - (560 - 559)]);
}

