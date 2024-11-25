struct   student {
    char oFT1D9L [(736 - 716)];
    char OP1u2jRY [(376 - 356)];
    char iRxb3l42aLGp;
    int kYcAXZx4HCN;
    char OPx6YQHW [(753 - 733)];
    char RqMb8Lvd [(725 - 705)];
    struct   student *dtvsFpRU;
};
struct   student *NEtcb6PV1I () {
    struct   student *kIAZXoKwQ5my;
    struct   student *NWpQGD3d2;
    struct   student *qO7pnc5FQdY;
    NWpQGD3d2 = (struct   student *) malloc (LEN);
    scanf ("%s %s %c %d %s %s", NWpQGD3d2->oFT1D9L, NWpQGD3d2->OP1u2jRY, &NWpQGD3d2->iRxb3l42aLGp, &NWpQGD3d2->kYcAXZx4HCN, NWpQGD3d2->OPx6YQHW, NWpQGD3d2->RqMb8Lvd);
    NWpQGD3d2->dtvsFpRU = NULL;
    kIAZXoKwQ5my = NWpQGD3d2;
    qO7pnc5FQdY = NWpQGD3d2;
    do {
        NWpQGD3d2 = (struct   student *) malloc (LEN);
        scanf ("%s", NWpQGD3d2->oFT1D9L);
        if (!((467 - 467) != strcmp ("end", NWpQGD3d2->oFT1D9L))) {
            break;
        }
        else {
            scanf ("%s %c %d %s %s", NWpQGD3d2->OP1u2jRY, &NWpQGD3d2->iRxb3l42aLGp, &NWpQGD3d2->kYcAXZx4HCN, NWpQGD3d2->OPx6YQHW, NWpQGD3d2->RqMb8Lvd);
            NWpQGD3d2->dtvsFpRU = NULL;
            qO7pnc5FQdY->dtvsFpRU = NWpQGD3d2;
            qO7pnc5FQdY = NWpQGD3d2;
        }
    }
    while ((561 - 560));
    return (kIAZXoKwQ5my);
}

void  WPeT4mg (struct   student *kIAZXoKwQ5my) {
    struct   student *hBzQNJVGg;
    struct   student *S2VfQxZS;
    for (; kIAZXoKwQ5my->dtvsFpRU != NULL;) {
        S2VfQxZS = kIAZXoKwQ5my;
        hBzQNJVGg = kIAZXoKwQ5my->dtvsFpRU;
        for (; hBzQNJVGg->dtvsFpRU != NULL;) {
            S2VfQxZS = hBzQNJVGg;
            hBzQNJVGg = hBzQNJVGg->dtvsFpRU;
        }
        printf ("%s %s %c %d %s %s\n", hBzQNJVGg->oFT1D9L, hBzQNJVGg->OP1u2jRY, hBzQNJVGg->iRxb3l42aLGp, hBzQNJVGg->kYcAXZx4HCN, hBzQNJVGg->OPx6YQHW, hBzQNJVGg->RqMb8Lvd);
        S2VfQxZS->dtvsFpRU = NULL;
    }
    printf ("%s %s %c %d %s %s\n", kIAZXoKwQ5my->oFT1D9L, kIAZXoKwQ5my->OP1u2jRY, kIAZXoKwQ5my->iRxb3l42aLGp, kIAZXoKwQ5my->kYcAXZx4HCN, kIAZXoKwQ5my->OPx6YQHW, kIAZXoKwQ5my->RqMb8Lvd);
}

int main () {
    struct   student *kIAZXoKwQ5my;
    WPeT4mg (kIAZXoKwQ5my);
    kIAZXoKwQ5my = NEtcb6PV1I ();
}

