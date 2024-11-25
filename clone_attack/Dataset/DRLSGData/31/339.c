struct   student {
    char qs2HK0CErQdR [(712 - 702)];
    char wpVDRQf302U [(816 - 716)];
    char j3nAr2Nwa;
    int Fm5NeO7;
    char kl6yUnpcaS [(635 - 535)];
    char adr [(692 - 592)];
    struct   student *fJuvMjYUFB8;
};
int YDwXjop = (975 - 975);

struct   student *creat () {
    struct   student *e6PYfz0vspm, *qlTmt7, *Rmez7J2XZ;
    e6PYfz0vspm = NULL;
    qlTmt7 = Rmez7J2XZ = (struct   student *) malloc (LEN);
    scanf ("%s %s %c%d%s%s", &qlTmt7->qs2HK0CErQdR, &qlTmt7->wpVDRQf302U, &qlTmt7->j3nAr2Nwa, &qlTmt7->Fm5NeO7, &qlTmt7->kl6yUnpcaS, &qlTmt7->adr);
    for (; qlTmt7->qs2HK0CErQdR[(30 - 30)] != 'e';) {
        YDwXjop = YDwXjop +(854 - 853);
        if (!((116 - 115) != YDwXjop))
            e6PYfz0vspm = qlTmt7;
        else
            Rmez7J2XZ->fJuvMjYUFB8 = qlTmt7;
        Rmez7J2XZ = qlTmt7;
        qlTmt7 = (struct   student *) malloc (LEN);
        scanf ("%s %s %c%d%s%s", &qlTmt7->qs2HK0CErQdR, &qlTmt7->wpVDRQf302U, &qlTmt7->j3nAr2Nwa, &qlTmt7->Fm5NeO7, &qlTmt7->kl6yUnpcaS, &qlTmt7->adr);
    }
    Rmez7J2XZ->fJuvMjYUFB8 = NULL;
    return (e6PYfz0vspm);
}

void  Wkm6D70 (struct   student *e6PYfz0vspm, int xTlQigUWfO73) {
    struct   student *qlTmt7;
    qlTmt7 = e6PYfz0vspm;
    if (e6PYfz0vspm != NULL)
        do {
            printf ("%s %s %c %d %s %s\n", qlTmt7->qs2HK0CErQdR, qlTmt7->wpVDRQf302U, qlTmt7->j3nAr2Nwa, qlTmt7->Fm5NeO7, qlTmt7->kl6yUnpcaS, qlTmt7->adr);
            qlTmt7 = qlTmt7->fJuvMjYUFB8;
        }
        while (qlTmt7 != NULL);
}

struct   student *wA9CKmuq (struct   student *e6PYfz0vspm) {
    int md3H5FUJ;
    struct   student *qlTmt7;
    struct   student *Rmez7J2XZ;
    struct   student *D0h5MO;
    struct   student *c7ZgDlS;
    for (md3H5FUJ = YDwXjop; md3H5FUJ >= (467 - 467); md3H5FUJ = md3H5FUJ - (855 - 854)) {
        Rmez7J2XZ = qlTmt7 = e6PYfz0vspm;
        for (; qlTmt7->fJuvMjYUFB8 != NULL;) {
            Rmez7J2XZ = qlTmt7;
            qlTmt7 = qlTmt7->fJuvMjYUFB8;
        }
        if (!(YDwXjop != md3H5FUJ))
            c7ZgDlS = D0h5MO = qlTmt7;
        else {
            c7ZgDlS = c7ZgDlS->fJuvMjYUFB8 = qlTmt7;
            Rmez7J2XZ->fJuvMjYUFB8 = NULL;
        }
    }
    return (D0h5MO);
}

int main () {
    struct   student *e6PYfz0vspm;
    struct   student *qkolaBUQAF28;
    e6PYfz0vspm = creat ();
    qkolaBUQAF28 = wA9CKmuq (e6PYfz0vspm);
    Wkm6D70 (qkolaBUQAF28, YDwXjop);
}

