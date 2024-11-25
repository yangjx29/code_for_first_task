void  ppxiVG5jy6Ms (int *DBSVb8RFUIo, int qP86grnSt, int PcA1E40vb7N) {
    int pTPVJbRd6v, j2jnFGdVYl;
    j2jnFGdVYl = (203 - 203);
    {
        pTPVJbRd6v = 0;
        for (; PcA1E40vb7N > pTPVJbRd6v;) {
            j2jnFGdVYl = j2jnFGdVYl + *(DBSVb8RFUIo +pTPVJbRd6v);
            pTPVJbRd6v = pTPVJbRd6v + 1;
        }
    }
    {
        pTPVJbRd6v = (844 - 843);
        for (; pTPVJbRd6v < qP86grnSt;) {
            j2jnFGdVYl = j2jnFGdVYl + *(DBSVb8RFUIo +PcA1E40vb7N*pTPVJbRd6v) + *(DBSVb8RFUIo +PcA1E40vb7N*pTPVJbRd6v + PcA1E40vb7N -(411 - 410));
            pTPVJbRd6v = pTPVJbRd6v + 1;
        }
    }
    for (pTPVJbRd6v = 1; pTPVJbRd6v < PcA1E40vb7N -1; pTPVJbRd6v = pTPVJbRd6v + 1)
        j2jnFGdVYl = j2jnFGdVYl + *(DBSVb8RFUIo +(qP86grnSt - 1) * PcA1E40vb7N +pTPVJbRd6v);
    printf ("%d\n", j2jnFGdVYl);
}

void  main () {
    int *DBSVb8RFUIo, qP86grnSt, PcA1E40vb7N, jKCV5biq, pTPVJbRd6v, ArZ54xNFTSke;
    scanf ("%d", &jKCV5biq);
    {
        pTPVJbRd6v = 0;
        for (; jKCV5biq > pTPVJbRd6v;) {
            free (DBSVb8RFUIo);
            pTPVJbRd6v = pTPVJbRd6v + 1;
            scanf ("%d %d", &qP86grnSt, &PcA1E40vb7N);
            DBSVb8RFUIo = (int *) malloc (qP86grnSt * PcA1E40vb7N * sizeof (int));
            {
                ArZ54xNFTSke = 0;
                for (; ArZ54xNFTSke < qP86grnSt * PcA1E40vb7N;) {
                    scanf ("%d", DBSVb8RFUIo +ArZ54xNFTSke);
                    ArZ54xNFTSke = ArZ54xNFTSke +1;
                }
            }
            ppxiVG5jy6Ms (DBSVb8RFUIo, qP86grnSt, PcA1E40vb7N);
        }
    }
}

