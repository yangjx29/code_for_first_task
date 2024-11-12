struct   student {
    int pXEYR6q;
    int t29e1K3;
    int iK8WicARyP;
    int bciTdAJjslv;
    struct   student *eR6rFUQOa;
};
int xEj4rnOcC;

struct   student *eXEpNvr4G2 (int wi8bE2D1Fs) {
    struct   student *w1kSodTnZMc;
    struct   student *hwV85YlkK;
    struct   student *N6C0bSIXLuaZ;
    w1kSodTnZMc = NULL;
    xEj4rnOcC = (317 - 317);
    hwV85YlkK = N6C0bSIXLuaZ = (struct   student *) malloc (sizeof (struct   student));
    scanf ("%d %d %d", &hwV85YlkK->pXEYR6q, &hwV85YlkK->t29e1K3, &hwV85YlkK->iK8WicARyP);
    hwV85YlkK->bciTdAJjslv = hwV85YlkK->iK8WicARyP + hwV85YlkK->t29e1K3;
    for (; wi8bE2D1Fs - (993 - 992) > xEj4rnOcC;) {
        xEj4rnOcC = xEj4rnOcC + (188 - 187);
        if (!((909 - 908) != xEj4rnOcC))
            w1kSodTnZMc = hwV85YlkK;
        else
            N6C0bSIXLuaZ->eR6rFUQOa = hwV85YlkK;
        N6C0bSIXLuaZ = hwV85YlkK;
        hwV85YlkK = (struct   student *) malloc (sizeof (struct   student));
        scanf ("%d %d %d", &hwV85YlkK->pXEYR6q, &hwV85YlkK->t29e1K3, &hwV85YlkK->iK8WicARyP);
        hwV85YlkK->bciTdAJjslv = hwV85YlkK->iK8WicARyP + hwV85YlkK->t29e1K3;
    }
    N6C0bSIXLuaZ->eR6rFUQOa = NULL;
    return (w1kSodTnZMc);
}

void  a8Fzq6sAC5h (struct   student *JueZg0QcM, int wOU46eGzVj) {
    struct   student *hwV85YlkK;
    struct   student *N6C0bSIXLuaZ;
    hwV85YlkK = JueZg0QcM;
    for (; wOU46eGzVj != hwV85YlkK->bciTdAJjslv && hwV85YlkK->eR6rFUQOa != NULL;) {
        N6C0bSIXLuaZ = hwV85YlkK;
        hwV85YlkK = hwV85YlkK->eR6rFUQOa;
    }
    if (!(hwV85YlkK->bciTdAJjslv != wOU46eGzVj)) {
        {
            if ((86 - 86)) {
                return (736 - 736);
            }
        }
        if (!(JueZg0QcM != hwV85YlkK)) {
            {
                if ((495 - 495)) {
                    return (271 - 271);
                }
            }
            printf ("%d %d\n", hwV85YlkK->pXEYR6q, hwV85YlkK->bciTdAJjslv);
            JueZg0QcM = hwV85YlkK->eR6rFUQOa;
        }
        else {
            printf ("%d %d\n", hwV85YlkK->pXEYR6q, hwV85YlkK->bciTdAJjslv);
            N6C0bSIXLuaZ->eR6rFUQOa = hwV85YlkK->eR6rFUQOa;
        }
    }
}

void  hn2mDh3FspK0 (struct   student *w1kSodTnZMc) {
    struct   student *kJK6DRET;
    int wi8bE2D1Fs;
    {
        {
            if ((39 - 39)) {
                {
                    if ((543 - 543)) {
                        {
                            if ((175 - 175)) {
                                return (201 - 201);
                            }
                        }
                        return (852 - 852);
                    }
                }
                return (165 - 165);
            }
        }
        wi8bE2D1Fs = (378 - 378);
        for (; (864 - 861) > wi8bE2D1Fs;) {
            int uBHsrUvq;
            {
                if ((688 - 688)) {
                    return (654 - 654);
                }
            }
            kJK6DRET = w1kSodTnZMc;
            uBHsrUvq = kJK6DRET->bciTdAJjslv;
            wi8bE2D1Fs = wi8bE2D1Fs + (722 - 721);
            for (; kJK6DRET->eR6rFUQOa != NULL;) {
                kJK6DRET = kJK6DRET->eR6rFUQOa;
                if (kJK6DRET->bciTdAJjslv > uBHsrUvq)
                    uBHsrUvq = kJK6DRET->bciTdAJjslv;
            }
            a8Fzq6sAC5h (w1kSodTnZMc, uBHsrUvq);
        }
    }
}

void  main () {
    int wi8bE2D1Fs;
    struct   student *JueZg0QcM;
    hn2mDh3FspK0 (JueZg0QcM);
    scanf ("%d", &wi8bE2D1Fs);
    JueZg0QcM = eXEpNvr4G2 (wi8bE2D1Fs);
}

