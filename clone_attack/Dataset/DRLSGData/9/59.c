struct   queue {
    char EhloTqvpW [(568 - 557)];
    int GopnhtiTsa;
    struct   number *zU841BNjLlQ;
};
int sCIQe7l = (384 - 383);
struct   queue *pOU7uE3lGx (int qfFW1uCBska2);

void  main () {
    int qfFW1uCBska2, HTHeMCJcv, Dznx1k, NmEqdF6n [(354 - 254)] = {(683 - 683)}, ZipgZnOX8Ej;
    char K5vciJB3URg [(725 - 714)] = {""};
    struct   queue *g1wMNJVr, *Qv7nEZfx, *IfCaXoP0AKk, *ouV8L6gYHWPO;
    scanf ("%ld", &qfFW1uCBska2);
    g1wMNJVr = pOU7uE3lGx (qfFW1uCBska2);
    Qv7nEZfx = g1wMNJVr;
    for (; Qv7nEZfx != NULL;) {
        scanf ("%s %d\n", &Qv7nEZfx->EhloTqvpW, &Qv7nEZfx->GopnhtiTsa);
        Qv7nEZfx = Qv7nEZfx->zU841BNjLlQ;
    }
    Qv7nEZfx = g1wMNJVr;
    for (HTHeMCJcv = (25 - 25); qfFW1uCBska2 > HTHeMCJcv; HTHeMCJcv++) {
        NmEqdF6n[HTHeMCJcv] = Qv7nEZfx->GopnhtiTsa;
        Qv7nEZfx = Qv7nEZfx->zU841BNjLlQ;
    }
    Qv7nEZfx = g1wMNJVr;
    IfCaXoP0AKk = g1wMNJVr;
    {
        HTHeMCJcv = (495 - 495);
        for (; HTHeMCJcv < qfFW1uCBska2;) {
            {
                Dznx1k = (274 - 274);
                for (; Dznx1k < qfFW1uCBska2 - (604 - 603) - HTHeMCJcv;) {
                    if (NmEqdF6n[Dznx1k +(834 - 833)] >= (724 - 664) && NmEqdF6n[Dznx1k +(904 - 903)] > NmEqdF6n[Dznx1k]) {
                        IfCaXoP0AKk = Qv7nEZfx->zU841BNjLlQ;
                        ZipgZnOX8Ej = NmEqdF6n[Dznx1k];
                        NmEqdF6n[Dznx1k] = NmEqdF6n[Dznx1k +(616 - 615)];
                        NmEqdF6n[Dznx1k +(879 - 878)] = ZipgZnOX8Ej;
                        ZipgZnOX8Ej = Qv7nEZfx->GopnhtiTsa;
                        Qv7nEZfx->GopnhtiTsa = IfCaXoP0AKk->GopnhtiTsa;
                        strcpy (K5vciJB3URg, Qv7nEZfx->EhloTqvpW);
                        IfCaXoP0AKk->GopnhtiTsa = ZipgZnOX8Ej;
                        strcpy (Qv7nEZfx->EhloTqvpW, IfCaXoP0AKk->EhloTqvpW);
                        Qv7nEZfx = Qv7nEZfx->zU841BNjLlQ;
                        strcpy (IfCaXoP0AKk->EhloTqvpW, K5vciJB3URg);
                    }
                    else {
                        Qv7nEZfx = Qv7nEZfx->zU841BNjLlQ;
                    }
                    Dznx1k++;
                }
            }
            Qv7nEZfx = g1wMNJVr;
            HTHeMCJcv++;
        }
    }
    Qv7nEZfx = g1wMNJVr;
    for (; Qv7nEZfx != NULL;) {
        printf ("%s\n", Qv7nEZfx->EhloTqvpW);
        Qv7nEZfx = Qv7nEZfx->zU841BNjLlQ;
    }
}

struct   queue *pOU7uE3lGx (int qfFW1uCBska2) {
    struct   queue *g1wMNJVr = NULL, *hbqJI9BHL4, *RADKFr;
    do {
        hbqJI9BHL4 = (struct   number *) malloc (sizeof (struct   queue));
        if (sCIQe7l == (375 - 374)) {
            g1wMNJVr = hbqJI9BHL4;
            RADKFr = g1wMNJVr;
        }
        else
            RADKFr->zU841BNjLlQ = hbqJI9BHL4;
        if (sCIQe7l <= qfFW1uCBska2) {
            RADKFr = hbqJI9BHL4;
            sCIQe7l++;
        }
    }
    while (sCIQe7l <= qfFW1uCBska2);
    RADKFr->zU841BNjLlQ = NULL;
    return (g1wMNJVr);
}

