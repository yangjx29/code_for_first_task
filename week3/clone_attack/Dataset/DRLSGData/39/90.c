struct   student {
    char u73qnoPgkO [1000];
    int DeRlHIgL92;
    int wTByfGJctL;
    char xshe;
    char GmO8G3YHf71;
    int rtyeiXOANxW2;
    int RTDfVGI;
    struct   student *uMyuilwNj3qJ;
};
int mFjxtOHrkZ;

struct   student *G07exv (void ) {
    int XtFkBTofUEqH, BId71ZSUVKkM;
    struct   student *z4dK1CNHwL, *eXv13sxpEt, *heClgjsvtr8z;
    z4dK1CNHwL = NULL;
    eXv13sxpEt = heClgjsvtr8z = (struct   student *) malloc (LEN);
    scanf ("%s %d %d %c %c %d", eXv13sxpEt->u73qnoPgkO, &eXv13sxpEt->DeRlHIgL92, &eXv13sxpEt->wTByfGJctL, &eXv13sxpEt->xshe, &eXv13sxpEt->GmO8G3YHf71, &eXv13sxpEt->rtyeiXOANxW2);
    eXv13sxpEt->RTDfVGI = 0;
    BId71ZSUVKkM = 0;
    for (; BId71ZSUVKkM < mFjxtOHrkZ - 1;) {
        BId71ZSUVKkM = BId71ZSUVKkM +1;
        if (!(1 != BId71ZSUVKkM))
            z4dK1CNHwL = eXv13sxpEt;
        else
            heClgjsvtr8z->uMyuilwNj3qJ = eXv13sxpEt;
        heClgjsvtr8z = eXv13sxpEt;
        eXv13sxpEt = (struct   student *) malloc (LEN);
        scanf ("%s %d %d %c %c %d", eXv13sxpEt->u73qnoPgkO, &eXv13sxpEt->DeRlHIgL92, &eXv13sxpEt->wTByfGJctL, &eXv13sxpEt->xshe, &eXv13sxpEt->GmO8G3YHf71, &eXv13sxpEt->rtyeiXOANxW2);
        eXv13sxpEt->RTDfVGI = 0;
    }
    heClgjsvtr8z->uMyuilwNj3qJ = eXv13sxpEt;
    eXv13sxpEt->uMyuilwNj3qJ = NULL;
    return (z4dK1CNHwL);
}

void  main () {
    int dJOTANrcz = 0;
    struct   student *z4dK1CNHwL, *eXv13sxpEt, *heClgjsvtr8z, *yVgtmdZCW, *Q83q16HZ7plX;
    z4dK1CNHwL = G07exv ();
    yVgtmdZCW = eXv13sxpEt = heClgjsvtr8z = z4dK1CNHwL;
    for (; yVgtmdZCW != NULL; yVgtmdZCW = yVgtmdZCW->uMyuilwNj3qJ) {
        if (80 < (yVgtmdZCW->wTByfGJctL) && !('Y' != yVgtmdZCW->xshe))
            yVgtmdZCW->RTDfVGI = yVgtmdZCW->RTDfVGI + 850;
        if (80 < (yVgtmdZCW->DeRlHIgL92) && (yVgtmdZCW->rtyeiXOANxW2) >= 1)
            yVgtmdZCW->RTDfVGI = yVgtmdZCW->RTDfVGI + 8000;
        if (85 < (yVgtmdZCW->DeRlHIgL92) && 80 < (yVgtmdZCW->wTByfGJctL))
            yVgtmdZCW->RTDfVGI = yVgtmdZCW->RTDfVGI + 4000;
        if ((yVgtmdZCW->DeRlHIgL92) > 90)
            yVgtmdZCW->RTDfVGI = yVgtmdZCW->RTDfVGI + 2000;
        if ((yVgtmdZCW->DeRlHIgL92) > 85 && !('Y' != (yVgtmdZCW->GmO8G3YHf71)))
            yVgtmdZCW->RTDfVGI = yVgtmdZCW->RTDfVGI + 1000;
    }
    Q83q16HZ7plX = yVgtmdZCW = z4dK1CNHwL;
    for (; yVgtmdZCW != NULL; yVgtmdZCW = yVgtmdZCW->uMyuilwNj3qJ) {
        if ((yVgtmdZCW->RTDfVGI) > Q83q16HZ7plX->RTDfVGI)
            Q83q16HZ7plX = yVgtmdZCW;
        dJOTANrcz = dJOTANrcz + yVgtmdZCW->RTDfVGI;
    }
    printf ("%s\n%d\n%d\n", Q83q16HZ7plX->u73qnoPgkO, Q83q16HZ7plX->RTDfVGI, dJOTANrcz);
    scanf ("%d", &mFjxtOHrkZ);
}

