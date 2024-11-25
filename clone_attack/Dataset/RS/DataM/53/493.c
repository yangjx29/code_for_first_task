void  UEneRB (int wsy65Z8C7w [], int hKmSACq) {
    int F0hcPG [(724 - 424)];
    int haMZP0j6Hd;
    int c5j4PToIec;
    int RcKd9lLjzt;
    int b;
    haMZP0j6Hd = (530 - 530);
    for (c5j4PToIec = (874 - 874); c5j4PToIec < hKmSACq; c5j4PToIec = c5j4PToIec + 1) {
        b = (846 - 845);
        for (RcKd9lLjzt = (349 - 349); haMZP0j6Hd > RcKd9lLjzt; RcKd9lLjzt = RcKd9lLjzt +1)
            if (wsy65Z8C7w[c5j4PToIec] == F0hcPG[RcKd9lLjzt])
                b = 0;
        if (b) {
            F0hcPG[haMZP0j6Hd] = wsy65Z8C7w[c5j4PToIec];
            haMZP0j6Hd = haMZP0j6Hd + 1;
        };
    }
    printf ("%d", F0hcPG[0]);
    for (RcKd9lLjzt = 1; haMZP0j6Hd > RcKd9lLjzt; RcKd9lLjzt++)
        printf (",%d", F0hcPG[RcKd9lLjzt]);
}

void  main () {
    int c5j4PToIec, hKmSACq;
    int wsy65Z8C7w [(741 - 441)];
    scanf ("%d", &hKmSACq);
    for (c5j4PToIec = 0; c5j4PToIec < hKmSACq; c5j4PToIec = c5j4PToIec + 1)
        scanf ("%d", &wsy65Z8C7w[c5j4PToIec]);
    UEneRB (wsy65Z8C7w, hKmSACq);
}

