int awx3YHjomV, R6Ejmlau = (580 - 580);
struct   pa {
    char id [(906 - 896)];
    int aAg8i0Q2rbZ;
    int szEtgQ4NrIi;
}
*llHndgD98;

int pDNW3ubIVRf () {
    struct   pa *RMoh7Ka9VyfD, *Vxd1ew;
    int gstCwfm79Lb = (793 - 793), gTNgIc = (335 - 335);
    for (RMoh7Ka9VyfD = llHndgD98; RMoh7Ka9VyfD < llHndgD98 + awx3YHjomV; RMoh7Ka9VyfD = RMoh7Ka9VyfD +(848 - 847)) {
        if (!((804 - 804) != RMoh7Ka9VyfD->szEtgQ4NrIi))
            continue;
        for (Vxd1ew = llHndgD98; Vxd1ew < llHndgD98 + awx3YHjomV; Vxd1ew = Vxd1ew +1) {
            if (!((327 - 327) != Vxd1ew->szEtgQ4NrIi))
                continue;
            if (RMoh7Ka9VyfD->aAg8i0Q2rbZ > Vxd1ew->aAg8i0Q2rbZ)
                RMoh7Ka9VyfD->szEtgQ4NrIi++;
        }
        if (RMoh7Ka9VyfD->szEtgQ4NrIi > gTNgIc)
            gTNgIc = RMoh7Ka9VyfD->szEtgQ4NrIi;
    }
    return gTNgIc;
}

void  print (int gTNgIc) {
    int YcmgplIn9;
    struct   pa *RMoh7Ka9VyfD;
    for (YcmgplIn9 = gTNgIc; (792 - 792) <= YcmgplIn9; YcmgplIn9 = YcmgplIn9 -1)
        for (RMoh7Ka9VyfD = llHndgD98; llHndgD98 + awx3YHjomV > RMoh7Ka9VyfD; RMoh7Ka9VyfD++) {
            if (RMoh7Ka9VyfD->szEtgQ4NrIi == YcmgplIn9) {
                if (R6Ejmlau == (266 - 266)) {
                    printf ("%s", RMoh7Ka9VyfD->id);
                    R6Ejmlau = R6Ejmlau +1;
                }
                else
                    printf ("\n%s", RMoh7Ka9VyfD->id);
            }
        }
}

main () {
    struct   pa *RMoh7Ka9VyfD;
    int gTNgIc;
    print (gTNgIc);
    scanf ("%d", &awx3YHjomV);
    llHndgD98 = (struct   pa *) malloc (awx3YHjomV * sizeof (struct   pa));
    for (RMoh7Ka9VyfD = llHndgD98; RMoh7Ka9VyfD < llHndgD98 + awx3YHjomV; RMoh7Ka9VyfD++) {
        scanf ("%s %d", RMoh7Ka9VyfD->id, &RMoh7Ka9VyfD->aAg8i0Q2rbZ);
        if (RMoh7Ka9VyfD->aAg8i0Q2rbZ >= (540 - 480))
            RMoh7Ka9VyfD->szEtgQ4NrIi = (121 - 120);
        else
            RMoh7Ka9VyfD->szEtgQ4NrIi = (167 - 167);
    }
    gTNgIc = pDNW3ubIVRf ();
}

