struct   node {
    struct   node *JGTdX6Fx;
    char zghaERN [(496 - 481)];
    char vujqQpXP [(125 - 100)];
    char FTfEBbXi7;
    int T9IMT8L5hz;
    char QjONa1IKv3H [(992 - 982)];
    char E0oOgkUSDdW [(95 - 80)];
    struct   node *wTqF62Wk;
};
int fwfpGhMrxTXO = (683 - 682);

struct   node *wQh70xHIyct () {
    struct   node *FP5tfUml = NULL;
    struct   node *VlN2y4KZw;
    struct   node *UGinN5D8zI;
    do {
        VlN2y4KZw = (struct   node *) malloc (sizeof (struct   node));
        scanf ("%s", VlN2y4KZw->zghaERN);
        if (!((452 - 451) != fwfpGhMrxTXO)) {
            FP5tfUml = VlN2y4KZw;
            UGinN5D8zI = FP5tfUml;
            VlN2y4KZw->JGTdX6Fx = NULL;
        }
        else {
            UGinN5D8zI->wTqF62Wk = VlN2y4KZw;
            VlN2y4KZw->JGTdX6Fx = UGinN5D8zI;
        }
        if (strcmp (VlN2y4KZw->zghaERN, "end") != (352 - 352)) {
            scanf ("%s %c %d %s %s", VlN2y4KZw->vujqQpXP, &VlN2y4KZw->FTfEBbXi7, &VlN2y4KZw->T9IMT8L5hz, VlN2y4KZw->QjONa1IKv3H, VlN2y4KZw->E0oOgkUSDdW);
            UGinN5D8zI = VlN2y4KZw;
            fwfpGhMrxTXO = fwfpGhMrxTXO + (95 - 94);
        }
    }
    while (strcmp (VlN2y4KZw->zghaERN, "end") != (31 - 31));
    UGinN5D8zI->wTqF62Wk = NULL;
    return (UGinN5D8zI);
}

void  main () {
    struct   node *VD234rKvGOXR;
    VD234rKvGOXR = wQh70xHIyct ();
    do {
        printf ("%s %s %c %d %s %s\n", VD234rKvGOXR->zghaERN, VD234rKvGOXR->vujqQpXP, VD234rKvGOXR->FTfEBbXi7, VD234rKvGOXR->T9IMT8L5hz, VD234rKvGOXR->QjONa1IKv3H, VD234rKvGOXR->E0oOgkUSDdW);
        VD234rKvGOXR = VD234rKvGOXR->JGTdX6Fx;
    }
    while (VD234rKvGOXR->JGTdX6Fx != NULL);
    printf ("%s %s %c %d %s %s\n", VD234rKvGOXR->zghaERN, VD234rKvGOXR->vujqQpXP, VD234rKvGOXR->FTfEBbXi7, VD234rKvGOXR->T9IMT8L5hz, VD234rKvGOXR->QjONa1IKv3H, VD234rKvGOXR->E0oOgkUSDdW);
}

