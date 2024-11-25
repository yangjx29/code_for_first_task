struct   student {
    long  Hkof1NX;
    int sjtugB;
    int vPZdqT;
    int sum;
    struct   student *BOkwHVoQnIb;
    struct   student *vLzoRetvF3A;
};
struct   student *hajeoybl (int YFNbpRfLGg) {
    int OXUmkj;
    struct   student *buh5DQd2sl, *z7JqHAd, *YE3MHUSc;
    z7JqHAd = (struct   student *) malloc (len);
    scanf ("%d %d %d", &z7JqHAd->Hkof1NX, &z7JqHAd->sjtugB, &z7JqHAd->vPZdqT);
    z7JqHAd->sum = z7JqHAd->sjtugB + z7JqHAd->vPZdqT;
    z7JqHAd->vLzoRetvF3A = null;
    z7JqHAd->BOkwHVoQnIb = null;
    buh5DQd2sl = z7JqHAd;
    YE3MHUSc = z7JqHAd;
    for (OXUmkj = (497 - 495); YFNbpRfLGg >= OXUmkj; OXUmkj++) {
        z7JqHAd = (struct   student *) malloc (len);
        scanf ("%d %d %d", &z7JqHAd->Hkof1NX, &z7JqHAd->sjtugB, &z7JqHAd->vPZdqT);
        z7JqHAd->sum = z7JqHAd->sjtugB + z7JqHAd->vPZdqT;
        z7JqHAd->vLzoRetvF3A = YE3MHUSc;
        YE3MHUSc->BOkwHVoQnIb = z7JqHAd;
        z7JqHAd->BOkwHVoQnIb = null;
        YE3MHUSc = z7JqHAd;
    }
    return (buh5DQd2sl);
}

struct   student *xUBWdhuvFm (struct   student *buh5DQd2sl) {
    struct   student *JStBaN4, *wpnT0YMfmht;
    wpnT0YMfmht = buh5DQd2sl;
    JStBaN4 = buh5DQd2sl;
    while (wpnT0YMfmht) {
        if (wpnT0YMfmht->sum > JStBaN4->sum)
            JStBaN4 = wpnT0YMfmht;
        wpnT0YMfmht = wpnT0YMfmht->BOkwHVoQnIb;
    }
    printf ("%d %d\n", JStBaN4->Hkof1NX, JStBaN4->sum);
    if (JStBaN4 == buh5DQd2sl) {
        JStBaN4->BOkwHVoQnIb->vLzoRetvF3A = null;
        buh5DQd2sl = JStBaN4->BOkwHVoQnIb;
    }
    else {
        JStBaN4->BOkwHVoQnIb->vLzoRetvF3A = JStBaN4->vLzoRetvF3A;
        JStBaN4->vLzoRetvF3A->BOkwHVoQnIb = JStBaN4->BOkwHVoQnIb;
    }
    return (buh5DQd2sl);
}

void  main () {
    int YFNbpRfLGg;
    struct   student *buh5DQd2sl;
    xUBWdhuvFm (buh5DQd2sl);
    xUBWdhuvFm (buh5DQd2sl);
    xUBWdhuvFm (buh5DQd2sl);
    scanf ("%d", &YFNbpRfLGg);
    buh5DQd2sl = hajeoybl (YFNbpRfLGg);
}

