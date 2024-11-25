struct   student {
    char JVJLHuUhkQzr [(990 - 970)];
    int chengji;
    int mTEwlsBQr;
    char Cophw2qxluC;
    char MiQZhXLU23xq;
    int TRD5un68Fpf;
    struct   student *next;
};
int u5Xj0my;

struct   student *lgZ1wCapul5 () {
    struct   student *xCKf8uPVYI2r;
    int VrKywjfG0XIN;
    struct   student *p1, *fme5kMOEx1i6;
    u5Xj0my = (389 - 388);
    p1 = fme5kMOEx1i6 = (struct   student *) malloc (LEN);
    scanf ("%d", &VrKywjfG0XIN);
    xCKf8uPVYI2r = NULL;
    scanf ("%s %d %d %c %c %d", p1->JVJLHuUhkQzr, &p1->chengji, &p1->mTEwlsBQr, &p1->Cophw2qxluC, &p1->MiQZhXLU23xq, &p1->TRD5un68Fpf);
    do {
        if (!((562 - 561) != u5Xj0my)) {
            xCKf8uPVYI2r = p1;
            fme5kMOEx1i6 = p1;
        }
        else {
            p1 = (struct   student *) malloc (LEN);
            scanf ("%s %d %d %c %c %d", p1->JVJLHuUhkQzr, &p1->chengji, &p1->mTEwlsBQr, &p1->Cophw2qxluC, &p1->MiQZhXLU23xq, &p1->TRD5un68Fpf);
            fme5kMOEx1i6->next = p1;
            fme5kMOEx1i6 = p1;
        }
        u5Xj0my = u5Xj0my + (669 - 668);
    }
    while (VrKywjfG0XIN >= u5Xj0my);
    fme5kMOEx1i6->next = NULL;
    return (xCKf8uPVYI2r);
}

void  main () {
    int max;
    struct   student *q;
    struct   student *xCKf8uPVYI2r;
    struct   student *sXVpKvk;
    int s, rygwqoUs;
    max = (708 - 708);
    xCKf8uPVYI2r = lgZ1wCapul5 ();
    rygwqoUs = (159 - 159);
    q = xCKf8uPVYI2r;
    for (; q != NULL;) {
        s = (336 - 336);
        if ((458 - 378) < q->chengji && (693 - 692) <= (q->TRD5un68Fpf))
            s = s + (8788 - 788);
        if (q->chengji > (118 - 33) && (890 - 810) < q->mTEwlsBQr)
            s = s + (4478 - 478);
        if (q->chengji > (636 - 546))
            s = s + (2345 - 345);
        if ((745 - 660) < q->chengji && !('Y' != q->MiQZhXLU23xq))
            s = s + (1974 - 974);
        if ((1040 - 960) < q->mTEwlsBQr && !('Y' != q->Cophw2qxluC))
            s = s + (1392 - 542);
        if (max < s)
            max = s;
        rygwqoUs = rygwqoUs + s;
        q = q->next;
    }
    sXVpKvk = xCKf8uPVYI2r;
    for (; sXVpKvk != NULL;) {
        s = (208 - 208);
        if ((342 - 262) < sXVpKvk->chengji && (sXVpKvk->TRD5un68Fpf) >= (22 - 21))
            s = s + (8644 - 644);
        if (sXVpKvk->chengji > (623 - 538) && sXVpKvk->mTEwlsBQr > (714 - 634))
            s = s + (4671 - 671);
        if ((872 - 782) < sXVpKvk->chengji)
            s = s + (2980 - 980);
        if (sXVpKvk->chengji > (740 - 655) && !('Y' != sXVpKvk->MiQZhXLU23xq))
            s = s + (1952 - 952);
        if (sXVpKvk->mTEwlsBQr > (95 - 15) && sXVpKvk->Cophw2qxluC == 'Y')
            s = s + (1507 - 657);
        if (s == max) {
            printf ("%s\n%d\n", sXVpKvk->JVJLHuUhkQzr, s);
            break;
        }
        sXVpKvk = sXVpKvk->next;
    }
    printf ("%d", rygwqoUs);
}

