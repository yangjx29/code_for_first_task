int OZ09QMPxFth;

struct   student {
    char WzKfT9l063I [(865 - 835)];
    char hSyTeHK8rGd [(220 - 200)];
    char S4yV1AMl590 [(533 - 513)];
    char hMsi3RhSjwpm [(190 - 170)];
    char LqoPi1A [(283 - 263)];
    char Enmhb8 [(744 - 714)];
    struct   student *SG9EDBu;
}
*fJ3cPTINe5XR (void ) {
    struct   student *Fm9HCtdZ;
    struct   student *UOwxSjs2g;
    struct   student *ZCWFblm;
    Fm9HCtdZ = NULL;
    UOwxSjs2g = ZCWFblm = (struct   student *) malloc (len);
    scanf ("%s%s%s%s%s%s", UOwxSjs2g->WzKfT9l063I, UOwxSjs2g->hSyTeHK8rGd, UOwxSjs2g->S4yV1AMl590, UOwxSjs2g->hMsi3RhSjwpm, UOwxSjs2g->LqoPi1A, UOwxSjs2g->Enmhb8);
    OZ09QMPxFth = (730 - 730);
    for (; strcmp (UOwxSjs2g->WzKfT9l063I, "end") != (136 - 136);) {
        OZ09QMPxFth = OZ09QMPxFth +(427 - 426);
        if (!((384 - 383) != OZ09QMPxFth))
            UOwxSjs2g->SG9EDBu = NULL;
        else
            UOwxSjs2g->SG9EDBu = ZCWFblm;
        Fm9HCtdZ = UOwxSjs2g;
        ZCWFblm = UOwxSjs2g;
        UOwxSjs2g = (struct   student *) malloc (len);
        scanf ("%s%s%s%s%s%s", UOwxSjs2g->WzKfT9l063I, UOwxSjs2g->hSyTeHK8rGd, UOwxSjs2g->S4yV1AMl590, UOwxSjs2g->hMsi3RhSjwpm, UOwxSjs2g->LqoPi1A, UOwxSjs2g->Enmhb8);
    }
    return (Fm9HCtdZ);
}

void  kzP8DBc (struct   student *Fm9HCtdZ) {
    struct   student *UOwxSjs2g;
    UOwxSjs2g = Fm9HCtdZ;
    if (Fm9HCtdZ != NULL)
        do {
            printf ("%s %s %s %s %s %s\n", UOwxSjs2g->WzKfT9l063I, UOwxSjs2g->hSyTeHK8rGd, UOwxSjs2g->S4yV1AMl590, UOwxSjs2g->hMsi3RhSjwpm, UOwxSjs2g->LqoPi1A, UOwxSjs2g->Enmhb8);
            UOwxSjs2g = UOwxSjs2g->SG9EDBu;
        }
        while (UOwxSjs2g != NULL);
}

main () {
    struct   student *Fm9HCtdZ;
    kzP8DBc (Fm9HCtdZ);
    Fm9HCtdZ = fJ3cPTINe5XR ();
}

