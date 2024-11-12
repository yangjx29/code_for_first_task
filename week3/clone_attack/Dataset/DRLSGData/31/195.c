struct   student {
    char ksQDXCx5c [(408 - 388)];
    char YHSpV14c5fDh [(701 - 671)];
    char HdswqBm7e;
    int DLWcGEi;
    char FWweLqU43p [(403 - 373)];
    char M9fzDGIla1 [(454 - 424)];
    struct   student *HARcbW4Vxn;
    struct   student *VMEU6cAm9FG;
};
int ySkM6Q4EVHG;

void  main () {
    struct   student *Qhar9pGXjPn3;
    struct   student *gkrHDB;
    struct   student *pqPoD0;
    pqPoD0 = NULL;
    Qhar9pGXjPn3 = gkrHDB = (struct   student *) malloc (LEN);
    scanf ("%s %s %c %d %s %s", Qhar9pGXjPn3->ksQDXCx5c, Qhar9pGXjPn3->YHSpV14c5fDh, &(*(Qhar9pGXjPn3)).HdswqBm7e, &(*(Qhar9pGXjPn3)).DLWcGEi, Qhar9pGXjPn3->FWweLqU43p, Qhar9pGXjPn3->M9fzDGIla1);
    ySkM6Q4EVHG = (190 - 190);
    for (; strcmp (Qhar9pGXjPn3->ksQDXCx5c, "end") != (545 - 545);) {
        ySkM6Q4EVHG = ySkM6Q4EVHG + (934 - 933);
        if (!((264 - 263) != ySkM6Q4EVHG)) {
            Qhar9pGXjPn3->VMEU6cAm9FG = NULL;
            pqPoD0 = Qhar9pGXjPn3;
        }
        else
            gkrHDB->HARcbW4Vxn = Qhar9pGXjPn3;
        Qhar9pGXjPn3->VMEU6cAm9FG = gkrHDB;
        gkrHDB = Qhar9pGXjPn3;
        Qhar9pGXjPn3 = (struct   student *) malloc (LEN);
        scanf ("%s %s %c %d %s %s", Qhar9pGXjPn3->ksQDXCx5c, Qhar9pGXjPn3->YHSpV14c5fDh, &Qhar9pGXjPn3->HdswqBm7e, &Qhar9pGXjPn3->DLWcGEi, Qhar9pGXjPn3->FWweLqU43p, Qhar9pGXjPn3->M9fzDGIla1);
    }
    gkrHDB->HARcbW4Vxn = NULL;
    for (; gkrHDB != NULL;) {
        if (gkrHDB != pqPoD0) {
            printf ("%s %s %c %d %s %s\n", gkrHDB->ksQDXCx5c, gkrHDB->YHSpV14c5fDh, (*(gkrHDB)).HdswqBm7e, (*(gkrHDB)).DLWcGEi, gkrHDB->FWweLqU43p, gkrHDB->M9fzDGIla1);
            gkrHDB = gkrHDB->VMEU6cAm9FG;
        }
        else {
            printf ("%s %s %c %d %s %s\n", pqPoD0->ksQDXCx5c, pqPoD0->YHSpV14c5fDh, (*(pqPoD0)).HdswqBm7e, (*(pqPoD0)).DLWcGEi, pqPoD0->FWweLqU43p, pqPoD0->M9fzDGIla1);
            break;
        }
    }
}

