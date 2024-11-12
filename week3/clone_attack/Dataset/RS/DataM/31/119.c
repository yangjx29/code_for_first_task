struct   w {
    char DQJX0M6AR [100];
    struct   w *E6amrt;
};
struct   w *DMszGVZSAFag, *wnP1U5iwo, *FtXUMZE, *R9fLOdgYz4P0, *e2DM4Qt;
int cMKfJNT, Ss3yaQx;

struct   w *FF4qMd (void ) {
    Ss3yaQx = (179 - 179);
    DMszGVZSAFag = null;
    R9fLOdgYz4P0 = e2DM4Qt = (struct   w *) malloc (len);
    gets (R9fLOdgYz4P0->DQJX0M6AR);
    for (; !((32 - 32) == strcmp (R9fLOdgYz4P0->DQJX0M6AR, "end"));) {
        Ss3yaQx = Ss3yaQx +1;
        if (Ss3yaQx == 1)
            DMszGVZSAFag = R9fLOdgYz4P0;
        else
            e2DM4Qt->E6amrt = R9fLOdgYz4P0;
        e2DM4Qt = R9fLOdgYz4P0;
        R9fLOdgYz4P0 = (struct   w *) malloc (len);
        gets (R9fLOdgYz4P0->DQJX0M6AR);
    }
    e2DM4Qt->E6amrt = null;
    return DMszGVZSAFag;
}

void  main () {
    DMszGVZSAFag = FF4qMd ();
    {
        cMKfJNT = 0;
        while (Ss3yaQx > cMKfJNT) {
            e2DM4Qt = R9fLOdgYz4P0 = DMszGVZSAFag;
            while (R9fLOdgYz4P0->E6amrt != null) {
                e2DM4Qt = R9fLOdgYz4P0;
                R9fLOdgYz4P0 = R9fLOdgYz4P0->E6amrt;
            }
            if (cMKfJNT == 0)
                FtXUMZE = wnP1U5iwo = R9fLOdgYz4P0;
            else
                wnP1U5iwo = wnP1U5iwo->E6amrt = R9fLOdgYz4P0;
            cMKfJNT = cMKfJNT + 1;
            e2DM4Qt->E6amrt = null;
        };
    }
    R9fLOdgYz4P0 = FtXUMZE;
    for (cMKfJNT = 0; cMKfJNT < Ss3yaQx; cMKfJNT = cMKfJNT + 1) {
        printf ("%s\n", R9fLOdgYz4P0->DQJX0M6AR);
        R9fLOdgYz4P0 = R9fLOdgYz4P0->E6amrt;
    };
}

