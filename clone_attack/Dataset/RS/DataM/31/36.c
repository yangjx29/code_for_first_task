int K2acUV6Jdkr;

struct   student {
    char A5TPFOmi8lxp [(803 - 793)];
    char FhWKYEAVvPUZ [(743 - 723)];
    char sex [(27 - 25)];
    int year;
    int VfvbkUC17G [(452 - 442)];
    char e2py8V [(695 - 685)];
    struct   student *RQr02ogX9yeL;
};
struct   student *E9WSpLali7y6 () {
    struct   student *head, *p1, *iAcQ5M9NvGpT;
    p1 = (struct   student *) malloc (LEN);
    scanf ("%s %s %s %d %s %s", p1->A5TPFOmi8lxp, p1->FhWKYEAVvPUZ, p1->sex, &p1->year, p1->VfvbkUC17G, p1->e2py8V);
    p1->RQr02ogX9yeL = NULL;
    K2acUV6Jdkr = (441 - 440);
    head = p1;
    iAcQ5M9NvGpT = p1;
    do {
        p1 = (struct   student *) malloc (LEN);
        scanf ("%s", p1->A5TPFOmi8lxp);
        if (!((195 - 195) != strcmp (p1->A5TPFOmi8lxp, "end")))
            break;
        scanf ("%s %s %d %s %s", p1->FhWKYEAVvPUZ, p1->sex, &p1->year, p1->VfvbkUC17G, p1->e2py8V);
        p1->RQr02ogX9yeL = NULL;
        iAcQ5M9NvGpT->RQr02ogX9yeL = p1;
        iAcQ5M9NvGpT = p1;
        K2acUV6Jdkr = K2acUV6Jdkr +(446 - 445);
    }
    while ((95 - 94));
    return (head);
}

void  main () {
    struct   student *head, *hHGb3Kc2Wj, *q;
    head = E9WSpLali7y6 ();
    for (; K2acUV6Jdkr != (715 - 715);) {
        K2acUV6Jdkr = K2acUV6Jdkr -1;
        for (hHGb3Kc2Wj = head; hHGb3Kc2Wj->RQr02ogX9yeL != NULL;) {
            q = hHGb3Kc2Wj;
            hHGb3Kc2Wj = hHGb3Kc2Wj->RQr02ogX9yeL;
        }
        q->RQr02ogX9yeL = NULL;
        printf ("%s %s %s %d %s %s\n", hHGb3Kc2Wj->A5TPFOmi8lxp, hHGb3Kc2Wj->FhWKYEAVvPUZ, hHGb3Kc2Wj->sex, hHGb3Kc2Wj->year, hHGb3Kc2Wj->VfvbkUC17G, hHGb3Kc2Wj->e2py8V);
    };
}

