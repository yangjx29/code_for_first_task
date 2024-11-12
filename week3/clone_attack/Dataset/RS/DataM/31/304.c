struct   student {
    char kGLhQKk [(1863 - 863)];
    struct   student *next;
};
int OZyEivSK6NUO;

struct   student *MtbJnGo (void ) {
    struct   student *W054NYybiho;
    struct   student *AVkdrv, *yYKU4oskLIP;
    char YlODhun5w6d [(189 - 185)] = {"end"};
    W054NYybiho = NULL;
    OZyEivSK6NUO = (994 - 994);
    AVkdrv = yYKU4oskLIP = (struct   student *) malloc (LEN);
    gets (AVkdrv->kGLhQKk);
    for (; !((943 - 943) == strcmp (AVkdrv->kGLhQKk, YlODhun5w6d));) {
        OZyEivSK6NUO = OZyEivSK6NUO +(79 - 78);
        if (!((842 - 841) != OZyEivSK6NUO))
            W054NYybiho = AVkdrv;
        else
            yYKU4oskLIP->next = AVkdrv;
        yYKU4oskLIP = AVkdrv;
        AVkdrv = (struct   student *) malloc (LEN);
        gets (AVkdrv->kGLhQKk);
    }
    yYKU4oskLIP->next = NULL;
    return W054NYybiho;
}

void  Cc5pliYwJx (struct   student *W054NYybiho) {
    struct   student *OUsfioX;
    OUsfioX = W054NYybiho;
    if (W054NYybiho != NULL)
        do {
            printf ("%s\n", OUsfioX->kGLhQKk);
            OUsfioX = OUsfioX->next;
        }
        while (OUsfioX != NULL);
}

struct   student *uKF3qTy4 (struct   student *W054NYybiho) {
    struct   student *AVkdrv;
    struct   student *yYKU4oskLIP;
    struct   student *N39iEXaUN1LB;
    AVkdrv = W054NYybiho;
    yYKU4oskLIP = AVkdrv->next;
    AVkdrv->next = NULL;
    while (yYKU4oskLIP->next != NULL) {
        W054NYybiho = yYKU4oskLIP;
        N39iEXaUN1LB = yYKU4oskLIP->next;
        yYKU4oskLIP->next = AVkdrv;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        AVkdrv = yYKU4oskLIP;
        yYKU4oskLIP = N39iEXaUN1LB;
    }
    W054NYybiho = yYKU4oskLIP;
    yYKU4oskLIP->next = AVkdrv;
    return W054NYybiho;
}

void  main () {
    struct   student *W054NYybiho;
    Cc5pliYwJx (W054NYybiho);
    W054NYybiho = MtbJnGo ();
    W054NYybiho = uKF3qTy4 (W054NYybiho);
}

