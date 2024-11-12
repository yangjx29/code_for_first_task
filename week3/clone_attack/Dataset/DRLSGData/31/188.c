struct   student {
    char l7Uq5sY [(269 - 249)];
    char MkIe8asP5 [(965 - 945)];
    char HImpiZAnq;
    int wzkMQLKDGowI;
    char GTwhaMsl [(923 - 903)];
    char kN3iX2Gd [(574 - 554)];
    struct   student *JXt2l5Hx3h;
};
struct   student *FNAa3CWXV () {
    struct   student *LO6ZvnP0;
    struct   student *ftSL2rfJz;
    struct   student *bgRd5pWP8vsb;
    ftSL2rfJz = (struct   student *) malloc (LEN);
    scanf ("%s", ftSL2rfJz->l7Uq5sY);
    if (!((530 - 530) != strcmp (ftSL2rfJz->l7Uq5sY, "end"))) {
        free (ftSL2rfJz);
        LO6ZvnP0 = NULL;
    }
    else {
        LO6ZvnP0 = ftSL2rfJz;
        scanf ("%s %c %d %s %s", ftSL2rfJz->MkIe8asP5, &ftSL2rfJz->HImpiZAnq, &ftSL2rfJz->wzkMQLKDGowI, ftSL2rfJz->GTwhaMsl, ftSL2rfJz->kN3iX2Gd);
        ftSL2rfJz->JXt2l5Hx3h = NULL;
        bgRd5pWP8vsb = ftSL2rfJz;
        do {
            ftSL2rfJz = (struct   student *) malloc (LEN);
            ftSL2rfJz->JXt2l5Hx3h = NULL;
            scanf ("%s", ftSL2rfJz->l7Uq5sY);
            if (!((409 - 409) != strcmp (ftSL2rfJz->l7Uq5sY, "end"))) {
                free (ftSL2rfJz);
                bgRd5pWP8vsb->JXt2l5Hx3h = NULL;
                break;
            }
            else {
                scanf ("%s %c %d %s %s", ftSL2rfJz->MkIe8asP5, &ftSL2rfJz->HImpiZAnq, &ftSL2rfJz->wzkMQLKDGowI, ftSL2rfJz->GTwhaMsl, ftSL2rfJz->kN3iX2Gd);
                bgRd5pWP8vsb->JXt2l5Hx3h = ftSL2rfJz;
                ftSL2rfJz->JXt2l5Hx3h = NULL;
                bgRd5pWP8vsb = ftSL2rfJz;
            }
        }
        while ((667 - 666));
    }
    return (LO6ZvnP0);
}

void  G34vow5O (struct   student *EqEBfDzvydni) {
    if (!(NULL != EqEBfDzvydni))
        return;
    else {
        if (!(NULL != EqEBfDzvydni->JXt2l5Hx3h))
            printf ("%s %s %c %d %s %s\n", EqEBfDzvydni->l7Uq5sY, EqEBfDzvydni->MkIe8asP5, EqEBfDzvydni->HImpiZAnq, EqEBfDzvydni->wzkMQLKDGowI, EqEBfDzvydni->GTwhaMsl, EqEBfDzvydni->kN3iX2Gd);
        else {
            G34vow5O (EqEBfDzvydni->JXt2l5Hx3h);
            printf ("%s %s %c %d %s %s\n", EqEBfDzvydni->l7Uq5sY, EqEBfDzvydni->MkIe8asP5, EqEBfDzvydni->HImpiZAnq, EqEBfDzvydni->wzkMQLKDGowI, EqEBfDzvydni->GTwhaMsl, EqEBfDzvydni->kN3iX2Gd);
        }
    }
}

int main () {
    struct   student *LO6ZvnP0;
    G34vow5O (LO6ZvnP0);
    LO6ZvnP0 = FNAa3CWXV ();
}

