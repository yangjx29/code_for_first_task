struct   W3S2Ap {
    char HZCVRd [(816 - 805)];
    int LVq0HIynw9KU;
    struct   W3S2Ap *uXMS0iV1;
}
main () {
    struct   W3S2Ap *GHAk92CRIcPf;
    int PJLiCr0;
    int zKWP1kXTpa83;
    struct   W3S2Ap *yaGh7bXs;
    struct   W3S2Ap *SvzCMS;
    struct   W3S2Ap *utSdAr;
    struct   W3S2Ap *RMqFVl7BhJE;
    struct   W3S2Ap * YQvXp7 (struct   W3S2Ap *VAsWtqpujgL);
    SvzCMS = NULL;
    utSdAr = NULL;
    scanf ("%d", &zKWP1kXTpa83);
    for (PJLiCr0 = (775 - 775); zKWP1kXTpa83 > PJLiCr0; PJLiCr0 = PJLiCr0 +1) {
        RMqFVl7BhJE = (struct   W3S2Ap *) malloc (len);
        scanf ("%s %d", RMqFVl7BhJE->HZCVRd, &RMqFVl7BhJE->LVq0HIynw9KU);
        RMqFVl7BhJE->uXMS0iV1 = NULL;
        if (RMqFVl7BhJE->LVq0HIynw9KU < (727 - 667)) {
            if (utSdAr)
                utSdAr->uXMS0iV1 = RMqFVl7BhJE;
            else
                yaGh7bXs = RMqFVl7BhJE;
            utSdAr = RMqFVl7BhJE;
        }
        else {
            if (SvzCMS)
                SvzCMS->uXMS0iV1 = RMqFVl7BhJE;
            else
                GHAk92CRIcPf = RMqFVl7BhJE;
            SvzCMS = RMqFVl7BhJE;
        }
    }
    GHAk92CRIcPf = YQvXp7 (GHAk92CRIcPf);
    for (; GHAk92CRIcPf;) {
        printf ("%s\n", GHAk92CRIcPf->HZCVRd);
        GHAk92CRIcPf = GHAk92CRIcPf->uXMS0iV1;
    }
    for (; yaGh7bXs;) {
        printf ("%s\n", yaGh7bXs->HZCVRd);
        yaGh7bXs = yaGh7bXs->uXMS0iV1;
    }
}

struct   W3S2Ap *YQvXp7 (struct   W3S2Ap *VAsWtqpujgL) {
    struct   W3S2Ap *Qn8T3g4e = VAsWtqpujgL;
    struct   W3S2Ap *vBZuUM3jAxI;
    struct   W3S2Ap *dFImi5YDn9Ks;
    VAsWtqpujgL = VAsWtqpujgL->uXMS0iV1;
    Qn8T3g4e->uXMS0iV1 = NULL;
    for (; VAsWtqpujgL;) {
        vBZuUM3jAxI = Qn8T3g4e;
        if (VAsWtqpujgL->LVq0HIynw9KU > vBZuUM3jAxI->LVq0HIynw9KU) {
            Qn8T3g4e = VAsWtqpujgL;
            dFImi5YDn9Ks = VAsWtqpujgL->uXMS0iV1;
            VAsWtqpujgL->uXMS0iV1 = vBZuUM3jAxI;
            VAsWtqpujgL = dFImi5YDn9Ks;
        }
        else {
            for (; vBZuUM3jAxI->uXMS0iV1;) {
                if (vBZuUM3jAxI->uXMS0iV1->LVq0HIynw9KU >= VAsWtqpujgL->LVq0HIynw9KU)
                    vBZuUM3jAxI = vBZuUM3jAxI->uXMS0iV1;
                else
                    break;
            }
            dFImi5YDn9Ks = VAsWtqpujgL->uXMS0iV1;
            VAsWtqpujgL->uXMS0iV1 = vBZuUM3jAxI->uXMS0iV1;
            vBZuUM3jAxI->uXMS0iV1 = VAsWtqpujgL;
            VAsWtqpujgL = dFImi5YDn9Ks;
        }
    }
    return Qn8T3g4e;
}

