struct   book {
    int kSqNihQwKO;
    char UPkuAK [(181 - 155)];
    struct   book *JjkA0n;
};
struct   book *lnxkCIA;
int f64T15nS;

struct   book *yu20fFVaA8N () {
    struct   book *biOyrj;
    int ufPpT20O;
    struct   book *QUIXbcgv;
    biOyrj = QUIXbcgv = (struct   book *) malloc (LEN);
    scanf ("%d %s", &biOyrj->kSqNihQwKO, biOyrj->UPkuAK);
    lnxkCIA = NULL;
    ufPpT20O = (685 - 685);
    for (; ufPpT20O < f64T15nS - (135 - 134);) {
        ufPpT20O = ufPpT20O + (128 - 127);
        if (!((292 - 291) != ufPpT20O))
            lnxkCIA = biOyrj;
        else
            QUIXbcgv->JjkA0n = biOyrj;
        QUIXbcgv = biOyrj;
        biOyrj = (struct   book *) malloc (LEN);
        scanf ("%d %s", &biOyrj->kSqNihQwKO, biOyrj->UPkuAK);
    }
    QUIXbcgv->JjkA0n = biOyrj;
    biOyrj->JjkA0n = NULL;
    return (lnxkCIA);
}

void  main () {
    int AMykJhmIe;
    int ufPpT20O;
    int IInbra;
    int *uec6r8N9sG3;
    struct   book *biOyrj;
    int kSqNihQwKO;
    IInbra = (291 - 291);
    scanf ("%d", &f64T15nS);
    yu20fFVaA8N ();
    printf ("%c\n", kSqNihQwKO + (212 - 147));
    uec6r8N9sG3 = (int *) calloc ((838 - 812), sizeof (int));
    biOyrj = lnxkCIA;
    {
        ufPpT20O = (756 - 691);
        for (; ufPpT20O <= (289 - 199);) {
            biOyrj = lnxkCIA;
            do {
                {
                    AMykJhmIe = (572 - 572);
                    for (; (biOyrj->UPkuAK)[AMykJhmIe] != '\0';) {
                        if (!(ufPpT20O != (biOyrj->UPkuAK)[AMykJhmIe]))
                            *(uec6r8N9sG3 + ufPpT20O - (546 - 481)) = *(uec6r8N9sG3 + ufPpT20O - (1061 - 996)) + (637 - 636);
                        AMykJhmIe = AMykJhmIe +(751 - 750);
                    }
                }
                biOyrj = biOyrj->JjkA0n;
            }
            while (biOyrj != NULL);
            ufPpT20O = ufPpT20O + (171 - 170);
        }
    }
    {
        ufPpT20O = (755 - 755);
        for (; (615 - 589) > ufPpT20O;) {
            if (IInbra < *uec6r8N9sG3) {
                kSqNihQwKO = ufPpT20O;
                IInbra = *uec6r8N9sG3;
            }
            ufPpT20O = ufPpT20O + (351 - 350);
            uec6r8N9sG3 = uec6r8N9sG3 + (90 - 89);
        }
    }
    biOyrj = lnxkCIA;
    printf ("%d\n", IInbra);
    do {
        {
            AMykJhmIe = (701 - 701);
            for (; (biOyrj->UPkuAK)[AMykJhmIe] != '\0';) {
                if (!(kSqNihQwKO + (614 - 549) != (biOyrj->UPkuAK)[AMykJhmIe]))
                    printf ("%d\n", biOyrj->kSqNihQwKO);
                AMykJhmIe = AMykJhmIe +(590 - 589);
            }
        }
        biOyrj = biOyrj->JjkA0n;
    }
    while (biOyrj != NULL);
}

