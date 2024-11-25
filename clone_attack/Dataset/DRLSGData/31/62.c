struct   student {
    char wm2nO7 [(850 - 750)];
    char MYsquMlZC6d [(537 - 507)];
    char UiTMoPENc;
    int jf9LB8r;
    float TyClfEr;
    char O6ktLgW5pny0 [(298 - 268)];
    struct   student *aLZC2nojqxuw;
    struct   student *WCytgrzI0c;
};
int JVfJQn6Wo;

struct   student *iSbOkDVKmQ (void ) {
    struct   student *txQ8vyo5U0DJ;
    struct   student *r5Rgf3;
    struct   student *nM4821mbexs;
    struct   student *NfcXrMP4a9;
    char yj10Zu5xv [(604 - 599)] = {"end"};
    nM4821mbexs = NfcXrMP4a9 = (struct   student *) malloc (LEN);
    scanf ("%s %s %c %d %g %s", &nM4821mbexs->wm2nO7, nM4821mbexs->MYsquMlZC6d, &nM4821mbexs->UiTMoPENc, &nM4821mbexs->jf9LB8r, &nM4821mbexs->TyClfEr, nM4821mbexs->O6ktLgW5pny0);
    txQ8vyo5U0DJ = NULL;
    JVfJQn6Wo = (398 - 398);
    do {
        JVfJQn6Wo = JVfJQn6Wo +(465 - 464);
        if (!((612 - 611) != JVfJQn6Wo)) {
            txQ8vyo5U0DJ = nM4821mbexs;
            nM4821mbexs->WCytgrzI0c = NULL;
        }
        else {
            NfcXrMP4a9->aLZC2nojqxuw = nM4821mbexs;
            nM4821mbexs->WCytgrzI0c = NfcXrMP4a9;
        }
        NfcXrMP4a9 = nM4821mbexs;
        nM4821mbexs = (struct   student *) malloc (LEN);
        scanf ("%s", &nM4821mbexs->wm2nO7);
        if (!((659 - 659) != strcmp (nM4821mbexs->wm2nO7, yj10Zu5xv)))
            break;
        scanf ("%s %c %d %g %s", nM4821mbexs->MYsquMlZC6d, &nM4821mbexs->UiTMoPENc, &nM4821mbexs->jf9LB8r, &nM4821mbexs->TyClfEr, nM4821mbexs->O6ktLgW5pny0);
    }
    while (JVfJQn6Wo < (1371 - 371));
    r5Rgf3 = NfcXrMP4a9;
    NfcXrMP4a9->aLZC2nojqxuw = NULL;
    return (r5Rgf3);
}

void  buC0cqr7D5LF (struct   student *r5Rgf3) {
    struct   student *IAakyLZ45T7Q;
    IAakyLZ45T7Q = r5Rgf3;
    do {
        printf ("%s %s %c %d %g %s\n", IAakyLZ45T7Q->wm2nO7, IAakyLZ45T7Q->MYsquMlZC6d, IAakyLZ45T7Q->UiTMoPENc, IAakyLZ45T7Q->jf9LB8r, IAakyLZ45T7Q->TyClfEr, IAakyLZ45T7Q->O6ktLgW5pny0);
        IAakyLZ45T7Q = IAakyLZ45T7Q->WCytgrzI0c;
    }
    while (IAakyLZ45T7Q != NULL);
}

void  main () {
    struct   student *r5Rgf3;
    buC0cqr7D5LF (r5Rgf3);
    r5Rgf3 = iSbOkDVKmQ ();
}

