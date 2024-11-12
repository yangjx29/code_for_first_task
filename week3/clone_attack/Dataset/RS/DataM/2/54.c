struct   book {
    int rXBgqUneJ;
    char Bj6dNEDpFgOZ [(638 - 612)];
    struct   book *fUCWaRhN;
};
struct   book *ygQEODjo8Jq5 () {
    struct   book *eEW2P7XzQ;
    struct   book *q4buHRJi;
    struct   book *nXb6tDB;
    int uGcteuDXWZ = 1;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    int MMOyrHtTYf;
    q4buHRJi = (struct   book *) malloc (LEN);
    scanf ("%d", &MMOyrHtTYf);
    scanf ("%d %s", &q4buHRJi->rXBgqUneJ, q4buHRJi->Bj6dNEDpFgOZ);
    q4buHRJi->fUCWaRhN = NULL;
    if (uGcteuDXWZ >= MMOyrHtTYf) {
        free (q4buHRJi);
        eEW2P7XzQ = NULL;
        return eEW2P7XzQ;
    }
    else {
        eEW2P7XzQ = q4buHRJi;
        nXb6tDB = q4buHRJi;
        while (uGcteuDXWZ < MMOyrHtTYf) {
            uGcteuDXWZ = uGcteuDXWZ + 1;
            q4buHRJi = (struct   book *) malloc (LEN);
            scanf ("%d %s", &q4buHRJi->rXBgqUneJ, q4buHRJi->Bj6dNEDpFgOZ);
            q4buHRJi->fUCWaRhN = NULL;
            {
                nXb6tDB->fUCWaRhN = q4buHRJi;
                nXb6tDB = q4buHRJi;
            };
        }
        nXb6tDB->fUCWaRhN = q4buHRJi;
        q4buHRJi->fUCWaRhN = NULL;
        return eEW2P7XzQ;
    };
}

int bYox5AriEqC (char JISD0k9yhZ, struct   book *eEW2P7XzQ) {
    struct   book *L5FwoVWRO17s;
    int uGcteuDXWZ, no6VRUX1nqr, GxyMfZa;
    uGcteuDXWZ = 0;
    L5FwoVWRO17s = eEW2P7XzQ;
    while (!(NULL == L5FwoVWRO17s)) {
        GxyMfZa = strlen (L5FwoVWRO17s->Bj6dNEDpFgOZ);
        for (no6VRUX1nqr = 0; no6VRUX1nqr < GxyMfZa; no6VRUX1nqr = no6VRUX1nqr + 1) {
            if ((L5FwoVWRO17s->Bj6dNEDpFgOZ)[no6VRUX1nqr] == JISD0k9yhZ)
                uGcteuDXWZ = uGcteuDXWZ + 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    for (x = 0; x < 20; x++) {
                        y += x;
                    }
                    if (y > 30)
                        return y;
                }
            };
        }
        L5FwoVWRO17s = L5FwoVWRO17s->fUCWaRhN;
    }
    return uGcteuDXWZ;
}

void  outbook (char JISD0k9yhZ, struct   book *eEW2P7XzQ) {
    struct   book *L5FwoVWRO17s;
    int no6VRUX1nqr, GxyMfZa;
    L5FwoVWRO17s = eEW2P7XzQ;
    for (; L5FwoVWRO17s != NULL;) {
        GxyMfZa = strlen (L5FwoVWRO17s->Bj6dNEDpFgOZ);
        {
            no6VRUX1nqr = 0;
            while (no6VRUX1nqr < GxyMfZa) {
                if ((L5FwoVWRO17s->Bj6dNEDpFgOZ)[no6VRUX1nqr] == JISD0k9yhZ)
                    printf ("%d\n", L5FwoVWRO17s->rXBgqUneJ);
                no6VRUX1nqr = no6VRUX1nqr + 1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        L5FwoVWRO17s = L5FwoVWRO17s->fUCWaRhN;
    };
}

void  main () {
    int EyJjmcR [(743 - 717)];
    struct   book *PnNpEClyu1;
    struct   book *q4buHRJi;
    int uGcteuDXWZ;
    int Syro1JBvVXw;
    int FXmv2TWV6;
    printf ("%c\n", FXmv2TWV6 +65);
    FXmv2TWV6 = 0;
    PnNpEClyu1 = q4buHRJi = ygQEODjo8Jq5 ();
    outbook (FXmv2TWV6 +65, q4buHRJi);
    {
        uGcteuDXWZ = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (uGcteuDXWZ < 26) {
            EyJjmcR[uGcteuDXWZ] = bYox5AriEqC (uGcteuDXWZ + 65, PnNpEClyu1);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    for (x = 0; x < 20; x++) {
                        y += x;
                    }
                    if (y > 30)
                        return y;
                }
            }
            uGcteuDXWZ = uGcteuDXWZ + 1;
        };
    }
    Syro1JBvVXw = EyJjmcR[0];
    {
        uGcteuDXWZ = 0;
        while (uGcteuDXWZ < 26) {
            if (EyJjmcR[uGcteuDXWZ] > Syro1JBvVXw) {
                Syro1JBvVXw = EyJjmcR[uGcteuDXWZ];
                FXmv2TWV6 = uGcteuDXWZ;
            }
            uGcteuDXWZ = uGcteuDXWZ + 1;
        };
    }
    printf ("%d\n", Syro1JBvVXw);
}

