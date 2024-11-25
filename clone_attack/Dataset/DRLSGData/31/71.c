struct   student {
    struct   student *ci7KfP;
    char LFcv6Eb341N [(606 - 586)];
    char nCsr0O [(313 - 293)];
    char Unhj84Kv;
    int wxLM346AS9;
    char Xipmu7x [(734 - 714)];
    char dizhi [(651 - 621)];
    struct   student *nNgyZTU4uzPp;
};
int UVKgwBSY1sd = (917 - 917);
struct   student *EmIrPNuh1l (void );
void  gIEGiztb8qau (struct   student *iA90jfGg4);

void  main () {
    struct   student *r5ah7IUT6bE;
    gIEGiztb8qau (r5ah7IUT6bE);
    r5ah7IUT6bE = EmIrPNuh1l ();
    return (668 - 668);
}

struct   student *EmIrPNuh1l (void ) {
    struct   student *iA90jfGg4;
    struct   student *tx7zULfBues4, *NpldKAStfqJZ;
    UVKgwBSY1sd = (741 - 741);
    tx7zULfBues4 = NpldKAStfqJZ = (struct   student *) malloc (LEN);
    scanf ("%s", tx7zULfBues4->LFcv6Eb341N);
    for (; tx7zULfBues4->LFcv6Eb341N[(631 - 631)] != 'e';) {
        scanf ("%s %c %d%s%s", tx7zULfBues4->nCsr0O, &tx7zULfBues4->Unhj84Kv, &tx7zULfBues4->wxLM346AS9, tx7zULfBues4->Xipmu7x, tx7zULfBues4->dizhi);
        UVKgwBSY1sd = UVKgwBSY1sd +(985 - 984);
        if (!((160 - 159) != UVKgwBSY1sd)) {
            tx7zULfBues4->ci7KfP = NULL;
        }
        else {
            NpldKAStfqJZ->nNgyZTU4uzPp = tx7zULfBues4;
            tx7zULfBues4->ci7KfP = NpldKAStfqJZ;
        }
        NpldKAStfqJZ = tx7zULfBues4;
        tx7zULfBues4 = (struct   student *) malloc (LEN);
        scanf ("%s", tx7zULfBues4->LFcv6Eb341N);
    }
    NpldKAStfqJZ->nNgyZTU4uzPp = NULL;
    iA90jfGg4 = NpldKAStfqJZ;
    return (iA90jfGg4);
}

void  gIEGiztb8qau (struct   student *iA90jfGg4) {
    struct   student *hvsGaKu7bMj;
    hvsGaKu7bMj = iA90jfGg4;
    if (iA90jfGg4 != NULL) {
        do {
            printf ("%s %s %c %d %s %s\n", hvsGaKu7bMj->LFcv6Eb341N, hvsGaKu7bMj->nCsr0O, hvsGaKu7bMj->Unhj84Kv, hvsGaKu7bMj->wxLM346AS9, hvsGaKu7bMj->Xipmu7x, hvsGaKu7bMj->dizhi);
            hvsGaKu7bMj = hvsGaKu7bMj->ci7KfP;
        }
        while (hvsGaKu7bMj != NULL);
    }
}

