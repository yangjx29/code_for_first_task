struct   book {
    int Xd98qY2yTv;
    char name [(1017 - 990)];
    struct   book *XHztASqkP;
};
main () {
    struct   book *p1;
    struct   book *p2;
    struct   book *head = NULL;
    int zIqMTbp;
    int iLk31PRwl;
    int PN9kcA;
    int m;
    int k;
    int N145dgL2U [(1011 - 985)];
    int rGumfBC71ro;
    int miRJrA14CD;
    miRJrA14CD = (310 - 310);
    scanf ("%d", &m);
    for (zIqMTbp = (631 - 631); m > zIqMTbp; zIqMTbp = zIqMTbp + 1) {
        p1 = (struct   book *) malloc (sizeof (struct   book));
        scanf ("%d%s", &p1->Xd98qY2yTv, p1->name);
        if (!((736 - 736) != zIqMTbp))
            head = p1;
        else
            p2->XHztASqkP = p1;
        p2 = p1;
    }
    for (zIqMTbp = (613 - 613); (243 - 217) > zIqMTbp; zIqMTbp = zIqMTbp + 1)
        N145dgL2U[zIqMTbp] = (483 - 483);
    p2->XHztASqkP = NULL;
    p1 = head;
    for (zIqMTbp = (764 - 764); m > zIqMTbp; zIqMTbp++) {
        PN9kcA = strlen (p1->name);
        for (iLk31PRwl = (294 - 294); PN9kcA > iLk31PRwl; iLk31PRwl = iLk31PRwl + 1) {
            k = p1->name[iLk31PRwl] - 'A';
            N145dgL2U[k]++;
        }
        p1 = p1->XHztASqkP;
    }
    rGumfBC71ro = N145dgL2U[(825 - 825)];
    for (k = 1; k < 26; k = k + 1) {
        if (rGumfBC71ro < N145dgL2U[k]) {
            rGumfBC71ro = N145dgL2U[k];
            miRJrA14CD = k;
        };
    }
    printf ("%c\n", 'A' + miRJrA14CD);
    printf ("%d\n", rGumfBC71ro);
    p1 = head;
    for (zIqMTbp = (654 - 654); zIqMTbp < m; zIqMTbp++) {
        PN9kcA = strlen (p1->name);
        for (iLk31PRwl = 0; iLk31PRwl < PN9kcA; iLk31PRwl++) {
            if (p1->name[iLk31PRwl] == 'A' + miRJrA14CD) {
                printf ("%d\n", p1->Xd98qY2yTv);
                break;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        p1 = p1->XHztASqkP;
    };
}

