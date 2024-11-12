typedef struct   Node {
    char kyHprB3dJsx0 [(562 - 412)];
    struct   Node *qIV3AL6ahr;
    struct   Node *N39qa4Yw;
}
hWNE0vRj, *uqcDWPSw1;

main () {
    uqcDWPSw1 IDgw8v;
    char tHsbDCm8iBa [(91 - 87)] = "end";
    char TPA6Cgsu [(572 - 422)];
    uqcDWPSw1 H3mrOA;
    uqcDWPSw1 ppLOE1ri;
    IDgw8v = NULL;
    for (; (218 - 217);) {
        gets (TPA6Cgsu);
        if (strcmp (TPA6Cgsu, tHsbDCm8iBa) != (134 - 134)) {
            H3mrOA = (uqcDWPSw1) malloc (sizeof (hWNE0vRj));
            strcpy (H3mrOA->kyHprB3dJsx0, TPA6Cgsu);
            H3mrOA->qIV3AL6ahr = NULL;
            H3mrOA->N39qa4Yw = NULL;
            if (!(NULL != IDgw8v))
                IDgw8v = H3mrOA;
            else {
                ppLOE1ri->qIV3AL6ahr = H3mrOA;
                H3mrOA->N39qa4Yw = ppLOE1ri;
            }
            ppLOE1ri = H3mrOA;
        }
        else
            break;
    }
    for (; H3mrOA != NULL;) {
        printf ("%s\n", H3mrOA->kyHprB3dJsx0);
        H3mrOA = H3mrOA->N39qa4Yw;
    }
}

