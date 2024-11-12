struct   book {
    int k5HPhCq6;
    char gLojSJ1gG7ZV [30];
    struct   book *VokVisJ7;
};
int n;

struct   book *OlTJGSQ1IjK (void ) {
    struct   book *bCIzfD1Md;
    struct   book *aEgiPt, *YOGUC9mhjAH6;
    int L2aAEfFJ8hB;
    L2aAEfFJ8hB = 0;
    aEgiPt = YOGUC9mhjAH6 = (struct   book *) malloc (len);
    scanf ("%d %s", &aEgiPt->k5HPhCq6, aEgiPt->gLojSJ1gG7ZV);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    bCIzfD1Md = NULL;
    for (; n - (344 - 343) > L2aAEfFJ8hB;) {
        L2aAEfFJ8hB++;
        if (!(1 != L2aAEfFJ8hB))
            bCIzfD1Md = aEgiPt;
        else
            YOGUC9mhjAH6->VokVisJ7 = aEgiPt;
        YOGUC9mhjAH6 = aEgiPt;
        aEgiPt = (struct   book *) malloc (len);
        scanf ("%d %s", &aEgiPt->k5HPhCq6, aEgiPt->gLojSJ1gG7ZV);
    }
    YOGUC9mhjAH6->VokVisJ7 = aEgiPt;
    YOGUC9mhjAH6 = aEgiPt;
    YOGUC9mhjAH6->VokVisJ7 = NULL;
    return (bCIzfD1Md);
}

void  main () {
    struct   book *bCIzfD1Md, *aEgiPt;
    struct   book *cLjFQ0MNOf;
    int i;
    int a9YWbUmA [(145 - 118)];
    char L2aAEfFJ8hB;
    int fA5u7Vh;
    fA5u7Vh = a9YWbUmA[0];
    bCIzfD1Md = OlTJGSQ1IjK ();
    scanf ("%d", &n);
    cLjFQ0MNOf = bCIzfD1Md;
    memset (a9YWbUmA, 0, sizeof (a9YWbUmA));
    for (cLjFQ0MNOf = bCIzfD1Md; !(NULL == cLjFQ0MNOf); cLjFQ0MNOf = cLjFQ0MNOf->VokVisJ7) {
        int vevn7AtdzG;
        for (i = 0; strlen (cLjFQ0MNOf->gLojSJ1gG7ZV) > i; i = i + 1) {
            vevn7AtdzG = cLjFQ0MNOf->gLojSJ1gG7ZV[i] - 'A';
            a9YWbUmA[vevn7AtdzG]++;
        };
    }
    for (i = 0; 27 > i; i = i + 1) {
        if (a9YWbUmA[i] > fA5u7Vh)
            fA5u7Vh = a9YWbUmA[i];
    }
    for (i = 0; 27 > i; i++) {
        if (!(fA5u7Vh != a9YWbUmA[i])) {
            printf ("%c\n%d\n", 'A' + i, a9YWbUmA[i]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    for (x = 0; x < 20; x++) {
                        y += x;
                    }
                    if (y > 30)
                        return y;
                }
            }
            L2aAEfFJ8hB = 'A' + i;
        };
    }
    for (cLjFQ0MNOf = bCIzfD1Md; cLjFQ0MNOf != NULL; cLjFQ0MNOf = cLjFQ0MNOf->VokVisJ7) {
        for (i = 0; i < strlen (cLjFQ0MNOf->gLojSJ1gG7ZV); i++) {
            if (cLjFQ0MNOf->gLojSJ1gG7ZV[i] == L2aAEfFJ8hB) {
                printf ("%d\n", cLjFQ0MNOf->k5HPhCq6);
                break;
            };
        };
    };
}

