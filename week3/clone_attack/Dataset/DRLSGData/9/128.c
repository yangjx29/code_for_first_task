struct   a {
    char z6tKRCqPJB [(602 - 582)];
    int FXPvMgAoT1IZ;
    struct   a *dfMyb6gq;
};
struct   a *VWZgowy6np (struct   a *a1wAP20, struct   a *R9jBpDt5P14e) {
    struct   a *Lkdr4m;
    struct   a *watCwc1z;
    struct   a *Z9jpTF;
    Lkdr4m = R9jBpDt5P14e;
    watCwc1z = a1wAP20;
    if (!(NULL != a1wAP20)) {
        a1wAP20 = Lkdr4m;
        Lkdr4m->dfMyb6gq = NULL;
    }
    else {
        while ((watCwc1z->FXPvMgAoT1IZ >= Lkdr4m->FXPvMgAoT1IZ) && (watCwc1z->dfMyb6gq != NULL)) {
            Z9jpTF = watCwc1z;
            watCwc1z = watCwc1z->dfMyb6gq;
        }
        if (watCwc1z->FXPvMgAoT1IZ < Lkdr4m->FXPvMgAoT1IZ) {
            if (a1wAP20 == watCwc1z)
                a1wAP20 = Lkdr4m;
            else
                Z9jpTF->dfMyb6gq = Lkdr4m;
            Lkdr4m->dfMyb6gq = watCwc1z;
        }
        else {
            watCwc1z->dfMyb6gq = Lkdr4m;
            Lkdr4m->dfMyb6gq = NULL;
        }
    }
    return (a1wAP20);
}

struct   a *OvGymH2YRFU (struct   a *a1wAP20, struct   a *R9jBpDt5P14e) {
    struct   a *y1L3We0Y;
    if (!(NULL != a1wAP20)) {
        a1wAP20 = R9jBpDt5P14e;
        R9jBpDt5P14e->dfMyb6gq = NULL;
    }
    else {
        {
            y1L3We0Y = a1wAP20;
            while (y1L3We0Y->dfMyb6gq != NULL) {
                y1L3We0Y = y1L3We0Y->dfMyb6gq;
            }
        }
        y1L3We0Y->dfMyb6gq = R9jBpDt5P14e;
        R9jBpDt5P14e->dfMyb6gq = NULL;
    }
    return (a1wAP20);
}

void  main () {
    int IdBF9l;
    int lv4QHAWLFqPi;
    struct   a *T2zZvE;
    struct   a *pplU2xiNHPw;
    struct   a *R9jBpDt5P14e;
    struct   a *S8GKkn;
    T2zZvE = NULL;
    pplU2xiNHPw = NULL;
    scanf ("%d", &lv4QHAWLFqPi);
    for (IdBF9l = (584 - 584); lv4QHAWLFqPi - (110 - 109) >= IdBF9l; IdBF9l++) {
        R9jBpDt5P14e = LEN;
        scanf ("%s %d", R9jBpDt5P14e->z6tKRCqPJB, &R9jBpDt5P14e->FXPvMgAoT1IZ);
        R9jBpDt5P14e->dfMyb6gq = NULL;
        if (R9jBpDt5P14e->FXPvMgAoT1IZ >= (825 - 765))
            T2zZvE = VWZgowy6np (T2zZvE, R9jBpDt5P14e);
        if (R9jBpDt5P14e->FXPvMgAoT1IZ < (286 - 226))
            pplU2xiNHPw = OvGymH2YRFU (pplU2xiNHPw, R9jBpDt5P14e);
    }
    {
        S8GKkn = T2zZvE;
        while (S8GKkn != NULL) {
            printf ("%s\n", S8GKkn->z6tKRCqPJB);
            S8GKkn = S8GKkn->dfMyb6gq;
        }
    }
    for (S8GKkn = pplU2xiNHPw; S8GKkn != NULL; S8GKkn = S8GKkn->dfMyb6gq)
        printf ("%s\n", S8GKkn->z6tKRCqPJB);
}

