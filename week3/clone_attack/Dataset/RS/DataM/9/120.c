int H5alW6bzJQI;

struct   ceshi {
    char FSWJTq2n [(361 - 341)];
    int mFdq6Li;
    struct   ceshi *ydhqwgF;
};
struct   ceshi *ln6XRdQaq0 (struct   ceshi *StUoyYNrc4w, struct   ceshi *BZhuGKCp7LQ) {
    struct   ceshi *L8Yi60z, *bfogpRlJ0;
    if ((800 - 740) <= BZhuGKCp7LQ->mFdq6Li) {
        if (!(Null != StUoyYNrc4w)) {
            StUoyYNrc4w = BZhuGKCp7LQ;
            BZhuGKCp7LQ->ydhqwgF = Null;
        }
        else {
            L8Yi60z = StUoyYNrc4w;
            while ((L8Yi60z->mFdq6Li >= BZhuGKCp7LQ->mFdq6Li) && (L8Yi60z->ydhqwgF != Null)) {
                bfogpRlJ0 = L8Yi60z;
                L8Yi60z = L8Yi60z->ydhqwgF;
            }
            if (L8Yi60z->mFdq6Li <= BZhuGKCp7LQ->mFdq6Li) {
                if (L8Yi60z == StUoyYNrc4w) {
                    StUoyYNrc4w = BZhuGKCp7LQ;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    BZhuGKCp7LQ->ydhqwgF = L8Yi60z;
                }
                else {
                    bfogpRlJ0->ydhqwgF = BZhuGKCp7LQ;
                    BZhuGKCp7LQ->ydhqwgF = L8Yi60z;
                };
            }
            else {
                L8Yi60z->ydhqwgF = BZhuGKCp7LQ;
                BZhuGKCp7LQ->ydhqwgF = Null;
            };
        };
    }
    else {
        bfogpRlJ0 = StUoyYNrc4w;
        if (StUoyYNrc4w == Null) {
            StUoyYNrc4w = BZhuGKCp7LQ;
            BZhuGKCp7LQ->ydhqwgF = Null;
        }
        else {
            while (bfogpRlJ0->ydhqwgF != Null) {
                bfogpRlJ0 = bfogpRlJ0->ydhqwgF;
            }
            bfogpRlJ0->ydhqwgF = BZhuGKCp7LQ;
            BZhuGKCp7LQ->ydhqwgF = Null;
        };
    }
    return (StUoyYNrc4w);
}

struct   ceshi *aJnStyb () {
    int KfSNoI04Zh = (615 - 615);
    struct   ceshi *BZhuGKCp7LQ;
    struct   ceshi *StUoyYNrc4w;
    struct   ceshi *L8Yi60z;
    StUoyYNrc4w = Null;
    while (KfSNoI04Zh < H5alW6bzJQI) {
        BZhuGKCp7LQ = (struct   ceshi *) malloc (len);
        scanf ("%s %d", BZhuGKCp7LQ->FSWJTq2n, &BZhuGKCp7LQ->mFdq6Li);
        KfSNoI04Zh++;
        StUoyYNrc4w = ln6XRdQaq0 (StUoyYNrc4w, BZhuGKCp7LQ);
    }
    return (StUoyYNrc4w);
}

void  IkY1KOBL5 (struct   ceshi *StUoyYNrc4w) {
    struct   ceshi *bfogpRlJ0;
    bfogpRlJ0 = StUoyYNrc4w;
    while (bfogpRlJ0 != Null) {
        printf ("%s\n", bfogpRlJ0->FSWJTq2n);
        bfogpRlJ0 = bfogpRlJ0->ydhqwgF;
    };
}

void  main () {
    struct   ceshi *bfogpRlJ0;
    IkY1KOBL5 (bfogpRlJ0);
    scanf ("%d", &H5alW6bzJQI);
    bfogpRlJ0 = aJnStyb ();
}

