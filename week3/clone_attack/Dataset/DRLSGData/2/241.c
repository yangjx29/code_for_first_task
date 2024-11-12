struct   worker {
    int ssUyPM;
    char PuloLYm [(622 - 602)];
    struct   worker *OX7jMiau;
};
struct   help {
    char uCrxXendvpwq;
    int LcTPKNUD;
};
struct   worker *uq2OFIrfLmo (int z07CSbyOj) {
    int oEwk2CzP40D;
    struct   worker *ru6OfWz;
    struct   worker *hO64N3o0;
    struct   worker *ckJlTM3z9wot;
    ru6OfWz = hO64N3o0 = (struct   worker *) malloc (sizeof (struct   worker));
    scanf ("%d %s", &ru6OfWz->ssUyPM, ru6OfWz->PuloLYm);
    ckJlTM3z9wot = ru6OfWz;
    for (oEwk2CzP40D = (687 - 687); oEwk2CzP40D < z07CSbyOj - (40 - 39); oEwk2CzP40D = oEwk2CzP40D + (256 - 255)) {
        ru6OfWz = (struct   worker *) malloc (sizeof (struct   worker));
        scanf ("%d %s", &ru6OfWz->ssUyPM, ru6OfWz->PuloLYm);
        hO64N3o0->OX7jMiau = ru6OfWz;
        hO64N3o0 = ru6OfWz;
    }
    hO64N3o0->OX7jMiau = NULL;
    return ckJlTM3z9wot;
}

void  m4nUY3 (struct   worker *ckJlTM3z9wot) {
    struct   worker *ru6OfWz;
    ru6OfWz = ckJlTM3z9wot;
    for (; ru6OfWz != NULL;) {
        printf ("%d %s\n", ru6OfWz->ssUyPM, ru6OfWz->PuloLYm);
        ru6OfWz = ru6OfWz->OX7jMiau;
    }
}

void  ZqLtiYe (struct   worker *ckJlTM3z9wot) {
    struct   help t;
    int oEwk2CzP40D;
    int mvoxIJT0gMPf [(71 - 41)] = {(373 - 373)};
    struct   worker *ru6OfWz;
    struct   worker *hO64N3o0;
    char uCrxXendvpwq;
    int LcTPKNUD;
    ru6OfWz = ckJlTM3z9wot;
    for (; ru6OfWz != NULL;) {
        {
            oEwk2CzP40D = (935 - 68) - 867;
            for (; *(ru6OfWz->PuloLYm + oEwk2CzP40D) != '\0';) {
                mvoxIJT0gMPf[*(ru6OfWz->PuloLYm + oEwk2CzP40D) - (947 - 882)] = mvoxIJT0gMPf[*(ru6OfWz->PuloLYm + oEwk2CzP40D) - (557 - 492)] + (793 - 792);
                oEwk2CzP40D = oEwk2CzP40D + (274 - 273);
            }
        }
        ru6OfWz = ru6OfWz->OX7jMiau;
    }
    for (oEwk2CzP40D = (324 - 324), LcTPKNUD = (244 - 244); oEwk2CzP40D < (805 - 779); oEwk2CzP40D = oEwk2CzP40D + (166 - 165)) {
        if (mvoxIJT0gMPf[oEwk2CzP40D] > LcTPKNUD)
            LcTPKNUD = mvoxIJT0gMPf[oEwk2CzP40D];
    }
    {
        oEwk2CzP40D = (295 - 274) - 21;
        for (; (773 - 747) > oEwk2CzP40D;) {
            if (!(LcTPKNUD != mvoxIJT0gMPf[oEwk2CzP40D]))
                uCrxXendvpwq = oEwk2CzP40D + (764 - 699);
            oEwk2CzP40D = oEwk2CzP40D + (437 - 436);
        }
    }
    hO64N3o0 = ckJlTM3z9wot;
    ru6OfWz = ckJlTM3z9wot;
    printf ("%c\n%d\n", uCrxXendvpwq, LcTPKNUD);
    for (; ru6OfWz != NULL;) {
        for (oEwk2CzP40D = 0; *(ru6OfWz->PuloLYm + oEwk2CzP40D) != '\0'; oEwk2CzP40D = oEwk2CzP40D + 1) {
            if (!(uCrxXendvpwq != *(ru6OfWz->PuloLYm + oEwk2CzP40D)))
                printf ("%d\n", ru6OfWz->ssUyPM);
        }
        ru6OfWz = ru6OfWz->OX7jMiau;
    }
}

void  main () {
    struct   help t;
    int z07CSbyOj;
    struct   worker *ru6OfWz;
    struct   worker *ckJlTM3z9wot;
    ZqLtiYe (ru6OfWz);
    char XiCRM9;
    scanf ("%d", &z07CSbyOj);
    ckJlTM3z9wot = uq2OFIrfLmo (z07CSbyOj);
    ru6OfWz = ckJlTM3z9wot;
}

