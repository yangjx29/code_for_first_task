struct   st {
    int UNqTuBe, BgTm7Cyozqh;
    char ddURx2bcJF [(793 - 778)];
    struct   st *etGJEPe;
};
struct   st *jECeF5RZgh7 (int AxIrMqJv) {
    struct   st *qphEbtyxLfB2;
    struct   st *g9ZtvNjXz7;
    struct   st *dcCpu7;
    int hV0C7nmJ;
    int YzkJh4LXC1yP;
    hV0C7nmJ = (355 - 250);
    g9ZtvNjXz7 = (struct   st *) malloc (sizeof (struct   st));
    dcCpu7 = g9ZtvNjXz7;
    qphEbtyxLfB2 = g9ZtvNjXz7;
    {
        YzkJh4LXC1yP = 521 - 520;
        while (YzkJh4LXC1yP <= AxIrMqJv) {
            g9ZtvNjXz7 = (struct   st *) malloc (sizeof (struct   st));
            scanf ("%s %d", g9ZtvNjXz7->ddURx2bcJF, &g9ZtvNjXz7->UNqTuBe);
            if (g9ZtvNjXz7->UNqTuBe >= (627 - 567))
                g9ZtvNjXz7->BgTm7Cyozqh = g9ZtvNjXz7->UNqTuBe * (1510 - 510) + hV0C7nmJ;
            else
                g9ZtvNjXz7->BgTm7Cyozqh = hV0C7nmJ;
            hV0C7nmJ--;
            g9ZtvNjXz7->etGJEPe = NULL;
            dcCpu7->etGJEPe = g9ZtvNjXz7;
            dcCpu7 = g9ZtvNjXz7;
            YzkJh4LXC1yP++;
        }
    }
    return (qphEbtyxLfB2);
}

void  YEdOjHD (struct   st *qphEbtyxLfB2) {
    struct   st *WHikuF, *bMAbV9c7SG2H, *g9ZtvNjXz7, *dcCpu7, *MAVf5L, *kTuDwUe8vyh;
    g9ZtvNjXz7 = qphEbtyxLfB2;
    for (; g9ZtvNjXz7->etGJEPe;) {
        dcCpu7 = g9ZtvNjXz7->etGJEPe;
        WHikuF = dcCpu7;
        kTuDwUe8vyh = dcCpu7;
        bMAbV9c7SG2H = dcCpu7->etGJEPe;
        for (; bMAbV9c7SG2H;) {
            if (bMAbV9c7SG2H->BgTm7Cyozqh > WHikuF->BgTm7Cyozqh) {
                MAVf5L = kTuDwUe8vyh;
                WHikuF = bMAbV9c7SG2H;
            }
            bMAbV9c7SG2H = bMAbV9c7SG2H->etGJEPe;
            kTuDwUe8vyh = kTuDwUe8vyh->etGJEPe;
        }
        if (WHikuF > g9ZtvNjXz7->etGJEPe) {
            MAVf5L->etGJEPe = WHikuF->etGJEPe;
            g9ZtvNjXz7->etGJEPe = WHikuF;
            WHikuF->etGJEPe = dcCpu7;
        }
        g9ZtvNjXz7 = g9ZtvNjXz7->etGJEPe;
    }
}

void  main () {
    struct   st *jECeF5RZgh7 (int AxIrMqJv);
    void  YEdOjHD (struct   st *qphEbtyxLfB2);
    struct   st *qphEbtyxLfB2;
    struct   st *bMAbV9c7SG2H;
    YEdOjHD (qphEbtyxLfB2);
    int AxIrMqJv;
    scanf ("%d", &AxIrMqJv);
    qphEbtyxLfB2 = jECeF5RZgh7 (AxIrMqJv);
    bMAbV9c7SG2H = qphEbtyxLfB2->etGJEPe;
    for (; bMAbV9c7SG2H;) {
        printf ("%s\n", bMAbV9c7SG2H->ddURx2bcJF);
        bMAbV9c7SG2H = bMAbV9c7SG2H->etGJEPe;
    }
}

