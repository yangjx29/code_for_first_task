int CS12rizG, tcrZDlt, LkFoCa5Wpy = (353 - 353), Z3M98oUIzJqx, cXQdNA = (643 - 643);
struct   stu {
    int QDFTVzP;
    int mYBhU7;
    int thnForjOAEk;
    struct   stu *yEQYri;
}
*mLNsm3OWdqwV, *RR7tK8;

struct   stu *JmZuk4D (void ) {
    struct   stu *PuVLGqr;
    scanf ("%d", &CS12rizG);
    RR7tK8 = mLNsm3OWdqwV = (struct   stu *) malloc (sizeof (struct   stu));
    {
        tcrZDlt = 0;
        while (CS12rizG > tcrZDlt) {
            scanf ("%d %d %d", &mLNsm3OWdqwV->QDFTVzP, &mLNsm3OWdqwV->mYBhU7, &mLNsm3OWdqwV->thnForjOAEk);
            if (tcrZDlt == 0)
                PuVLGqr = mLNsm3OWdqwV;
            else
                RR7tK8->yEQYri = mLNsm3OWdqwV;
            tcrZDlt = tcrZDlt + 1;
            RR7tK8 = mLNsm3OWdqwV;
            mLNsm3OWdqwV = (struct   stu *) malloc (sizeof (struct   stu));
        };
    }
    RR7tK8->yEQYri = NULL;
    return (PuVLGqr);
}

void  TP8dCIW (struct   stu *PuVLGqr) {
    while (3 > cXQdNA) {
        mLNsm3OWdqwV = PuVLGqr;
        {
            tcrZDlt = 0;
            while (tcrZDlt < CS12rizG) {
                tcrZDlt++;
                if (LkFoCa5Wpy < mLNsm3OWdqwV->mYBhU7 + mLNsm3OWdqwV->thnForjOAEk) {
                    LkFoCa5Wpy = mLNsm3OWdqwV->mYBhU7 + mLNsm3OWdqwV->thnForjOAEk;
                    Z3M98oUIzJqx = mLNsm3OWdqwV->QDFTVzP;
                }
                mLNsm3OWdqwV = mLNsm3OWdqwV->yEQYri;
            };
        }
        mLNsm3OWdqwV = PuVLGqr;
        printf ("%d %d\n", Z3M98oUIzJqx, LkFoCa5Wpy);
        for (tcrZDlt = 0; tcrZDlt < CS12rizG; tcrZDlt++) {
            if (mLNsm3OWdqwV->QDFTVzP == Z3M98oUIzJqx) {
                mLNsm3OWdqwV->mYBhU7 = 0;
                mLNsm3OWdqwV->thnForjOAEk = 0;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            mLNsm3OWdqwV = mLNsm3OWdqwV->yEQYri;
        }
        LkFoCa5Wpy = 0;
        cXQdNA = cXQdNA + (793 - 792);
    };
}

void  main () {
    struct   stu *PuVLGqr;
    TP8dCIW (PuVLGqr);
    PuVLGqr = JmZuk4D ();
}

