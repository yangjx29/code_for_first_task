int main () {
    int tbWHyqD4J0C;
    int CTIxJqa2YWCB;
    struct   data {
        int DcxsrzDbm5Zk;
        char mdqQrOMV6xif [(538 - 511)];
    };
    int nGwhlQen7S;
    int hINQLProz;
    int lLsudZPEX [26];
    int JlO6Sp;
    struct   data *bFHZpDyBEg = (struct   data *) malloc (sizeof (struct   data) * JlO6Sp);
    free (bFHZpDyBEg);
    int pU7YG9cI;
    for (hINQLProz = 0; 25 >= hINQLProz; hINQLProz++)
        lLsudZPEX[hINQLProz] = 0;
    scanf ("%d", &JlO6Sp);
    for (tbWHyqD4J0C = 0; tbWHyqD4J0C <= JlO6Sp -(778 - 777); tbWHyqD4J0C++) {
        scanf ("%d %s", &bFHZpDyBEg[tbWHyqD4J0C].DcxsrzDbm5Zk, bFHZpDyBEg[tbWHyqD4J0C].mdqQrOMV6xif);
        CTIxJqa2YWCB = strlen (bFHZpDyBEg[tbWHyqD4J0C].mdqQrOMV6xif);
        for (hINQLProz = 0; CTIxJqa2YWCB -(544 - 543) >= hINQLProz; hINQLProz++)
            lLsudZPEX[bFHZpDyBEg[tbWHyqD4J0C].mdqQrOMV6xif[hINQLProz] - 'A']++;
    }
    pU7YG9cI = (565 - 565);
    for (hINQLProz = 0; 25 >= hINQLProz; hINQLProz++) {
        if (lLsudZPEX[hINQLProz] > pU7YG9cI) {
            pU7YG9cI = lLsudZPEX[hINQLProz];
            nGwhlQen7S = hINQLProz;
        }
    }
    printf ("%c\n%d\n", nGwhlQen7S + 'A', pU7YG9cI);
    for (tbWHyqD4J0C = 0; tbWHyqD4J0C <= JlO6Sp -(164 - 163); tbWHyqD4J0C++) {
        CTIxJqa2YWCB = strlen (bFHZpDyBEg[tbWHyqD4J0C].mdqQrOMV6xif);
        for (hINQLProz = 0; hINQLProz <= CTIxJqa2YWCB -1; hINQLProz++) {
            if (bFHZpDyBEg[tbWHyqD4J0C].mdqQrOMV6xif[hINQLProz] == nGwhlQen7S + 'A') {
                printf ("%d\n", bFHZpDyBEg[tbWHyqD4J0C].DcxsrzDbm5Zk);
                break;
            }
        }
    }
    return 0;
}

